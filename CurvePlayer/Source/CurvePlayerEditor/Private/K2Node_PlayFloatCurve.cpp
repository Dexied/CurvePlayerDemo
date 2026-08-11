#include "K2Node_PlayFloatCurve.h"

#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "CurvePlayerFloatAsyncAction.h"
#include "EdGraph/EdGraph.h"
#include "EdGraph/EdGraphPin.h"
#include "EdGraph/EdGraphSchema.h"
#include "K2Node_MakeArray.h"
#include "KismetCompiler.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "SCurveEditor.h"
#include "Widgets/SWindow.h"
#include "Framework/Application/SlateApplication.h"

#define LOCTEXT_NAMESPACE "K2Node_PlayFloatCurve"

const FName UK2Node_PlayFloatCurve::CurveKeysPinName(TEXT("CurveKeys"));
const FName UK2Node_PlayFloatCurve::CurveKeyCountPinName(TEXT("CurveKeyCount"));
const FName UK2Node_PlayFloatCurve::CurveDefaultValuePinName(TEXT("CurveDefaultValue"));
const FName UK2Node_PlayFloatCurve::PreInfinityExtrapPinName(TEXT("PreInfinityExtrap"));
const FName UK2Node_PlayFloatCurve::PostInfinityExtrapPinName(TEXT("PostInfinityExtrap"));
const FName UK2Node_PlayFloatCurve::CurvePlaySpeedPinName(TEXT("CurvePlaySpeed"));
const FName UK2Node_PlayFloatCurve::CurveStartPositionPinName(TEXT("CurveStartPosition"));
const FName UK2Node_PlayFloatCurve::CurveLoopModePinName(TEXT("CurveLoopMode"));

UK2Node_PlayFloatCurve::UK2Node_PlayFloatCurve(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    if (const UFunction* FactoryFunction = UCurvePlayerFloatAsyncAction::StaticClass()->FindFunctionByName(
        GET_FUNCTION_NAME_CHECKED(UCurvePlayerFloatAsyncAction, PlayFloatCurve)))
    {
        InitializeProxyFromFunction(FactoryFunction);
    }
}

void UK2Node_PlayFloatCurve::EnsureDefaultCurve()
{
    if (FloatCurve.Keys.IsEmpty())
    {
        FloatCurve.AddKey(0.0f, 0.0f);
        FloatCurve.AddKey(1.0f, 1.0f);
        FloatCurve.AutoSetTangents(0.0f);
    }
}

void UK2Node_PlayFloatCurve::PostPlacedNewNode()
{
    Super::PostPlacedNewNode();
    EnsureDefaultCurve();
    MakeTransactional();
}

void UK2Node_PlayFloatCurve::HideInternalPin(const FName& PinName)
{
    if (UEdGraphPin* Pin = FindPin(PinName))
    {
        Pin->bHidden = true;
    }
}

void UK2Node_PlayFloatCurve::AllocateDefaultPins()
{
    Super::AllocateDefaultPins();

    HideInternalPin(CurveKeysPinName);
    HideInternalPin(CurveKeyCountPinName);
    HideInternalPin(CurveDefaultValuePinName);
    HideInternalPin(PreInfinityExtrapPinName);
    HideInternalPin(PostInfinityExtrapPinName);

    if (UEdGraphPin* SpeedPin = FindPin(CurvePlaySpeedPinName))
    {
        SpeedPin->PinFriendlyName = LOCTEXT("CurvePlaySpeedFriendlyName", "Curve Play Speed");
    }

    if (UEdGraphPin* StartPin = FindPin(CurveStartPositionPinName))
    {
        StartPin->PinFriendlyName = LOCTEXT("CurveStartPositionFriendlyName", "Curve Start Position");
    }

    if (UEdGraphPin* LoopModePin = FindPin(CurveLoopModePinName))
    {
        LoopModePin->PinFriendlyName = LOCTEXT("CurveLoopModeFriendlyName", "Curve Loop Mode");
    }
}

void UK2Node_PlayFloatCurve::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
    UEdGraphPin* CurveKeysPin = FindPin(CurveKeysPinName);
    UEdGraphPin* CurveKeyCountPin = FindPin(CurveKeyCountPinName);
    UEdGraphPin* CurveDefaultValuePin = FindPin(CurveDefaultValuePinName);
    UEdGraphPin* PreInfinityPin = FindPin(PreInfinityExtrapPinName);
    UEdGraphPin* PostInfinityPin = FindPin(PostInfinityExtrapPinName);

    if (!CurveKeysPin || !CurveKeyCountPin || !CurveDefaultValuePin || !PreInfinityPin || !PostInfinityPin)
    {
        CompilerContext.MessageLog.Error(TEXT("Curve Player: required internal pin is missing."));
        BreakAllNodeLinks();
        return;
    }

    const UEdGraphSchema* Schema = SourceGraph ? SourceGraph->GetSchema() : nullptr;
    if (!Schema)
    {
        CompilerContext.MessageLog.Error(TEXT("Curve Player: graph schema is unavailable."));
        BreakAllNodeLinks();
        return;
    }

    // Package the serialized inline FRichCurve keys into an intermediate Blueprint array.
    UK2Node_MakeArray* MakeArrayNode = CompilerContext.SpawnIntermediateNode<UK2Node_MakeArray>(this, SourceGraph);
    MakeArrayNode->NumInputs = FMath::Max(1, FloatCurve.Keys.Num());
    MakeArrayNode->AllocateDefaultPins();

    UEdGraphPin* ArrayOutputPin = MakeArrayNode->GetOutputPin();
    if (!ArrayOutputPin)
    {
        CompilerContext.MessageLog.Error(TEXT("Curve Player: failed to allocate internal curve-key array."));
        BreakAllNodeLinks();
        return;
    }

    ArrayOutputPin->PinType = CurveKeysPin->PinType;

    FEdGraphPinType ElementPinType = CurveKeysPin->PinType;
    ElementPinType.ContainerType = EPinContainerType::None;

    int32 KeyIndex = 0;
    for (UEdGraphPin* Pin : MakeArrayNode->Pins)
    {
        if (!Pin || Pin->Direction != EGPD_Input)
            continue;

        // Set the element type (non‑array, non‑reference)
        FEdGraphPinType NewPinType = ElementPinType;
        NewPinType.bIsReference = false;
        NewPinType.bIsConst = false;
        Pin->PinType = NewPinType;

        if (FloatCurve.Keys.IsValidIndex(KeyIndex))
        {
            FString ExportedKey;
            FRichCurveKey::StaticStruct()->ExportText(
                ExportedKey,
                &FloatCurve.Keys[KeyIndex],
                nullptr,
                nullptr,
                PPF_None,
                nullptr,
                false);

            // Now it’s safe to set a default value on a non‑reference pin
            Schema->TrySetDefaultValue(*Pin, ExportedKey, false);
            if (!Schema->IsCurrentPinDefaultValid(Pin).IsEmpty())
            {
                CompilerContext.MessageLog.Error(TEXT("Curve Player: failed to serialize an inline curve key."));
            }
        }
        ++KeyIndex;
    }

   /* for (UEdGraphPin* Pin : MakeArrayNode->Pins)
    {
        if (!Pin || Pin->Direction != EGPD_Input)
        {
            continue;
        }

        Pin->PinType = ElementPinType;

        if (FloatCurve.Keys.IsValidIndex(KeyIndex))
        {
            FString ExportedKey;
            FRichCurveKey::StaticStruct()->ExportText(
                ExportedKey,
                &FloatCurve.Keys[KeyIndex],
                nullptr,
                nullptr,
                PPF_None,
                nullptr,
                false);

            Schema->TrySetDefaultValue(*Pin, ExportedKey, false);
            if (!Schema->IsCurrentPinDefaultValid(Pin).IsEmpty())
            {
                CompilerContext.MessageLog.Error(TEXT("Curve Player: failed to serialize an inline curve key."));
            }
        }

        ++KeyIndex;
    }*/

    if (!Schema->TryCreateConnection(ArrayOutputPin, CurveKeysPin))
    {
        CompilerContext.MessageLog.Error(TEXT("Curve Player: failed to connect internal curve data."));
    }

    Schema->TrySetDefaultValue(*CurveKeyCountPin, FString::FromInt(FloatCurve.Keys.Num()), false);
    Schema->TrySetDefaultValue(*CurveDefaultValuePin, FString::SanitizeFloat(FloatCurve.DefaultValue), false);
    Schema->TrySetDefaultValue(*PreInfinityPin, FString::FromInt(static_cast<uint8>(FloatCurve.PreInfinityExtrap)), false);
    Schema->TrySetDefaultValue(*PostInfinityPin, FString::FromInt(static_cast<uint8>(FloatCurve.PostInfinityExtrap)), false);

    // UK2Node_BaseAsyncTask handles the proxy factory call and delegate-to-exec expansion.
    Super::ExpandNode(CompilerContext, SourceGraph);
}

FText UK2Node_PlayFloatCurve::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return LOCTEXT("NodeTitle", "Play Float Curve");
}

FText UK2Node_PlayFloatCurve::GetTooltipText() const
{
    return LOCTEXT("NodeTooltip", "Asynchronously plays an inline float curve. Double-click the node to edit the curve with Unreal Engine's native Curve Editor.");
}

FText UK2Node_PlayFloatCurve::GetMenuCategory() const
{
    return LOCTEXT("MenuCategory", "Curve Player");
}

void UK2Node_PlayFloatCurve::GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const
{
    UClass* ActionKey = GetClass();
    if (ActionRegistrar.IsOpenForRegistration(ActionKey))
    {
        UBlueprintNodeSpawner* Spawner = UBlueprintNodeSpawner::Create(GetClass());
        ActionRegistrar.AddBlueprintAction(ActionKey, Spawner);
    }
}

void UK2Node_PlayFloatCurve::DestroyNode()
{
    if (TSharedPtr<SWindow> Window = NativeCurveEditorWindow.Pin())
    {
        Window->RequestDestroyWindow();
    }
    NativeCurveEditorWindow.Reset();
    Super::DestroyNode();
}

TArray<FRichCurveEditInfo> UK2Node_PlayFloatCurve::GetCurves()
{
    TArray<FRichCurveEditInfo> Curves;
    Curves.Emplace(&FloatCurve, TEXT("Float"));
    return Curves;
}

TArray<FRichCurveEditInfoConst> UK2Node_PlayFloatCurve::GetCurves() const
{
    TArray<FRichCurveEditInfoConst> Curves;
    Curves.Emplace(&FloatCurve, TEXT("Float"));
    return Curves;
}

void UK2Node_PlayFloatCurve::ModifyOwner()
{
    Modify();
}

void UK2Node_PlayFloatCurve::GetCurves(TAdderReserverRef<FRichCurveEditInfoConst> Curves) const
{
    Curves.Reserve(Curves.Num() + 1);
    Curves.Add(FRichCurveEditInfoConst(&FloatCurve, TEXT("Float")));
}

TArray<const UObject*> UK2Node_PlayFloatCurve::GetOwners() const
{
    TArray<const UObject*> Owners;
    Owners.Add(this);
    return Owners;
}

void UK2Node_PlayFloatCurve::MakeTransactional()
{
    SetFlags(RF_Transactional);
}

void UK2Node_PlayFloatCurve::OnCurveChanged(const TArray<FRichCurveEditInfo>& ChangedCurveEditInfos)
{
    if (UEdGraph* Graph = GetGraph())
    {
        Graph->NotifyGraphChanged();
    }

    if (UBlueprint* Blueprint = FBlueprintEditorUtils::FindBlueprintForNode(this))
    {
        FBlueprintEditorUtils::MarkBlueprintAsModified(Blueprint);
    }
}

bool UK2Node_PlayFloatCurve::IsValidCurve(FRichCurveEditInfo CurveInfo)
{
    return CurveInfo.CurveToEdit == &FloatCurve;
}

float UK2Node_PlayFloatCurve::GetCurveLength() const
{
    if (FloatCurve.Keys.IsEmpty())
    {
        return 0.0f;
    }

    float LocalMinTime = 0.0f;
    float LocalMaxTime = 0.0f;
    FloatCurve.GetTimeRange(LocalMinTime, LocalMaxTime);
    return FMath::Max(0.0f, LocalMaxTime - LocalMinTime);
}

ECPLoopMode UK2Node_PlayFloatCurve::GetCurveLoopMode() const
{
    if (const UEdGraphPin* LoopModePin = FindPin(CurveLoopModePinName))
    {
        if (!LoopModePin->DefaultValue.IsEmpty())
        {
            UEnum* Enum = StaticEnum<ECPLoopMode>();
            int32 Value = Enum->GetValueByNameString(LoopModePin->DefaultValue, EGetByNameFlags::CaseSensitive);
            if (Value != INDEX_NONE)
            {
                return static_cast<ECPLoopMode>(Value);
            }
        }
    }
    return ECPLoopMode::None;
}

void UK2Node_PlayFloatCurve::OpenNativeCurveEditor()
{
    if (TSharedPtr<SWindow> ExistingWindow = NativeCurveEditorWindow.Pin())
    {
        ExistingWindow->BringToFront(true);
        return;
    }

    MakeTransactional();

    TSharedRef<SCurveEditor> CurveEditor = SNew(SCurveEditor);
    CurveEditor->SetCurveOwner(this, true);
    CurveEditor->SetAllowAutoFrame(true);

    TSharedRef<SWindow> Window = SNew(SWindow)
        .Title(LOCTEXT("CurveEditorWindowTitle", "Play Float Curve"))
        .ClientSize(FVector2D(900.0f, 560.0f))
        .SupportsMaximize(true)
        .SupportsMinimize(true)
        [
            CurveEditor
        ];

    NativeCurveEditorWindow = Window;

    FSlateApplication::Get().AddWindow(Window);
    CurveEditor->ZoomToFit(true);

}


void UK2Node_PlayFloatCurve::NotifyPinConnectionListChanged(UEdGraphPin* Pin)
{
	Super::NotifyPinConnectionListChanged(Pin);
    
    UE_LOG(LogTemp, Warning, TEXT("UK2Node_PlayFloatCurve::NotifyPinConnectionListChanged"));

    /*if (PropertyChangedEvent.Property)
    {
        if (const UEdGraphPin* LoopModePin = FindPin(CurveLoopModePinName))
        {
            if (PropertyChangedEvent.Property->GetFName() == LoopModePin->GetFName())
            {
                if (UBlueprint* Blueprint = FBlueprintEditorUtils::FindBlueprintForNode(this))
                {
                    FBlueprintEditorUtils::MarkBlueprintAsModified(Blueprint);
                }

                if (UEdGraph* Graph = GetGraph())
                {
                    Graph->NotifyGraphChanged();
                }
            }
        }
    }*/
}

#undef LOCTEXT_NAMESPACE
