#pragma once

#include "CoreMinimal.h"
#include "Curves/CurveOwnerInterface.h"
#include "Curves/RichCurve.h"
#include "K2Node_AsyncAction.h"
#include "CurvePlayerRuntimeTypes.h"
#include "K2Node_PlayFloatCurve.generated.h"

class SWindow;

/**
 * Dedicated async K2 node with an inline FRichCurve, similar in ownership semantics to a Timeline track.
 */
UCLASS()
class CURVEPLAYEREDITOR_API UK2Node_PlayFloatCurve final
    : public UK2Node_AsyncAction
    , public FCurveOwnerInterface
{
    GENERATED_BODY()

public:
    UK2Node_PlayFloatCurve(const FObjectInitializer& ObjectInitializer);

    /** Curve is serialized in the owning Blueprint graph node; no external curve asset is required. */
    UPROPERTY(EditAnywhere, Category="Curve Player")
    FRichCurve FloatCurve;

    // UEdGraphNode / UK2Node
    virtual void PostPlacedNewNode() override;
    virtual void AllocateDefaultPins() override;
    virtual void ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph) override;
    virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
    virtual FText GetTooltipText() const override;
    virtual FText GetMenuCategory() const override;
    virtual void GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const override;
    virtual void DestroyNode() override;
    virtual void NotifyPinConnectionListChanged(UEdGraphPin* Pin) override;

    // FCurveOwnerInterface - consumed by Unreal's standard SCurveEditor.
    virtual TArray<FRichCurveEditInfo> GetCurves() override;
    virtual TArray<FRichCurveEditInfoConst> GetCurves() const override;
    virtual void GetCurves(TAdderReserverRef<FRichCurveEditInfoConst> Curves) const override;
    virtual void ModifyOwner() override;
    virtual TArray<const UObject*> GetOwners() const override;
    virtual void MakeTransactional() override;
    virtual void OnCurveChanged(const TArray<FRichCurveEditInfo>& ChangedCurveEditInfos) override;
    virtual bool IsValidCurve(FRichCurveEditInfo CurveInfo) override;
    

    float GetCurveLength() const;
    ECPLoopMode GetCurveLoopMode() const;
    void OpenNativeCurveEditor();

    static const FName CurveKeysPinName;
    static const FName CurveKeyCountPinName;
    static const FName CurveDefaultValuePinName;
    static const FName PreInfinityExtrapPinName;
    static const FName PostInfinityExtrapPinName;
    static const FName CurvePlaySpeedPinName;
    static const FName CurveStartPositionPinName;
    static const FName CurveLoopModePinName;

private:
    TWeakPtr<SWindow> NativeCurveEditorWindow;

    void EnsureDefaultCurve();
    void HideInternalPin(const FName& PinName);
};
