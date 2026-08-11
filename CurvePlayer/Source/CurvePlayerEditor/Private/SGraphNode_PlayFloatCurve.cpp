#include "SGraphNode_PlayFloatCurve.h"

#include "K2Node_PlayFloatCurve.h"
#include "SCurvePlayerPreview.h"
#include "EdGraph/EdGraphPin.h"
#include "GraphEditAction.h"
#include "Input/Events.h"
#include "InputCoreTypes.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Text/STextBlock.h"


void SGraphNode_PlayFloatCurve::Construct(const FArguments& InArgs)
{
    CurveNode = InArgs._CurveNode;
    CurveLoopMode = InArgs._CurveLoopMode;
    
    SGraphNodeK2Default::Construct(SGraphNodeK2Default::FArguments(), InArgs._CurveNode);
}

TSharedRef<SWidget> SGraphNode_PlayFloatCurve::CreateNodeContentArea()
{
    TSharedRef<SWidget> DefaultPinArea = SGraphNodeK2Default::CreateNodeContentArea();

    return SNew(SVerticalBox)
        + SVerticalBox::Slot()
        .AutoHeight()
        .Padding(FMargin(8.0f, 4.0f, 8.0f, 4.0f))
        [
            SNew(SBox)
            .WidthOverride(240.0f)
            .HeightOverride(88.0f)
            [
                SNew(SCurvePlayerPreview)
                .CurveNode(CurveNode)
				.CurveLoopMode(CurveLoopMode)
            ]
        ]
        + SVerticalBox::Slot()
        .AutoHeight()
        .Padding(FMargin(8.0f, 0.0f, 8.0f, 2.0f))
        [
            SNew(STextBlock)
            .Text(this, &SGraphNode_PlayFloatCurve::GetLengthText)
        ]
        + SVerticalBox::Slot()
        .AutoHeight()
        .Padding(FMargin(8.0f, 0.0f, 8.0f, 2.0f))
        [
            SNew(STextBlock)
            .Text(this, &SGraphNode_PlayFloatCurve::GetSpeedText)
        ]
        + SVerticalBox::Slot()
        .AutoHeight()
        .Padding(FMargin(8.0f, 0.0f, 8.0f, 5.0f))
        [
            SNew(STextBlock)
            .Text(this, &SGraphNode_PlayFloatCurve::GetStartPositionText)
        ]
        + SVerticalBox::Slot()
        .AutoHeight()
        [
            DefaultPinArea
        ];
}

FReply SGraphNode_PlayFloatCurve::OnMouseButtonDoubleClick(const FGeometry& InMyGeometry, const FPointerEvent& InMouseEvent)
{
    if (InMouseEvent.GetEffectingButton() == EKeys::LeftMouseButton)
    {
        if (UK2Node_PlayFloatCurve* Node = CurveNode.Get())
        {
            Node->OpenNativeCurveEditor();
            return FReply::Handled();
        }
    }

    return SGraphNodeK2Default::OnMouseButtonDoubleClick(InMyGeometry, InMouseEvent);
}

FReply SGraphNode_PlayFloatCurve::OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
    if (MouseEvent.GetEffectingButton() == EKeys::LeftMouseButton)
    {
        return FReply::Handled();
    }
    return SGraphNodeK2Default::OnMouseButtonDown(MyGeometry, MouseEvent);
}

FText SGraphNode_PlayFloatCurve::GetLengthText() const
{
    if (const UK2Node_PlayFloatCurve* Node = CurveNode.Get())
    {
        return FText::Format(NSLOCTEXT("CurvePlayer", "CurveLengthFmt", "Curve Length: {0} s"), FText::AsNumber(Node->GetCurveLength()));
    }

    return FText::GetEmpty();
}

FText SGraphNode_PlayFloatCurve::GetFloatPinSummary(const FName& PinName, const FText& Label) const
{
    if (const UK2Node_PlayFloatCurve* Node = CurveNode.Get())
    {
        if (const UEdGraphPin* Pin = Node->FindPin(PinName))
        {
            if (Pin->LinkedTo.Num() > 0)
            {
                return FText::Format(NSLOCTEXT("CurvePlayer", "LinkedValueFmt", "{0}: linked"), Label);
            }

            return FText::Format(
                NSLOCTEXT("CurvePlayer", "DefaultValueFmt", "{0}: {1}"),
                Label,
                FText::FromString(Pin->DefaultValue));
        }
    }

    return FText::Format(NSLOCTEXT("CurvePlayer", "UnavailableValueFmt", "{0}: —"), Label);
}

FText SGraphNode_PlayFloatCurve::GetSpeedText() const
{
    return GetFloatPinSummary(UK2Node_PlayFloatCurve::CurvePlaySpeedPinName, NSLOCTEXT("CurvePlayer", "SpeedLabel", "Curve Play Speed"));
}

FText SGraphNode_PlayFloatCurve::GetStartPositionText() const
{
    return GetFloatPinSummary(UK2Node_PlayFloatCurve::CurveStartPositionPinName, NSLOCTEXT("CurvePlayer", "StartLabel", "Curve Start Position"));
}

