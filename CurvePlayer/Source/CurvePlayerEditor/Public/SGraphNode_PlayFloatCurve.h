#pragma once

#include "CoreMinimal.h"
#include "KismetNodes/SGraphNodeK2Default.h"
#include "CurvePlayerRuntimeTypes.h"

class UK2Node_PlayFloatCurve;

class CURVEPLAYEREDITOR_API SGraphNode_PlayFloatCurve final : public SGraphNodeK2Default
{
public:
    SLATE_BEGIN_ARGS(SGraphNode_PlayFloatCurve) {}
        SLATE_ARGUMENT(UK2Node_PlayFloatCurve*, CurveNode)
        SLATE_ARGUMENT(ECPLoopMode, CurveLoopMode)
    SLATE_END_ARGS()

    void Construct(const FArguments& InArgs);

    virtual FReply OnMouseButtonDoubleClick(const FGeometry& InMyGeometry, const FPointerEvent& InMouseEvent) override;
    virtual FReply OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;

protected:
    virtual TSharedRef<SWidget> CreateNodeContentArea() override;

private:
    TWeakObjectPtr<UK2Node_PlayFloatCurve> CurveNode;
	ECPLoopMode CurveLoopMode = ECPLoopMode::None;

    FText GetLengthText() const;
    FText GetSpeedText() const;
    FText GetStartPositionText() const;
    FText GetFloatPinSummary(const FName& PinName, const FText& Label) const;
};
