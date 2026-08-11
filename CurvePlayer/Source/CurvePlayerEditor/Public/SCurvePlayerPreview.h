#pragma once

#include "CoreMinimal.h"
#include "Widgets/SLeafWidget.h"
#include "CurvePlayerRuntimeTypes.h"

class UK2Node_PlayFloatCurve;


/** Read-only curve thumbnail embedded in the K2 node. */
class CURVEPLAYEREDITOR_API SCurvePlayerPreview final : public SLeafWidget
{
public:
    SLATE_BEGIN_ARGS(SCurvePlayerPreview) {}
        SLATE_ARGUMENT(TWeakObjectPtr<UK2Node_PlayFloatCurve>, CurveNode)
        SLATE_ARGUMENT(ECPLoopMode, CurveLoopMode)
    SLATE_END_ARGS()

    void Construct(const FArguments& InArgs);
    virtual void Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime) override;
    
    virtual FVector2D ComputeDesiredSize(float LayoutScaleMultiplier) const override;
    virtual int32 OnPaint(
        const FPaintArgs& Args,
        const FGeometry& AllottedGeometry,
        const FSlateRect& MyCullingRect,
        FSlateWindowElementList& OutDrawElements,
        int32 LayerId,
        const FWidgetStyle& InWidgetStyle,
        bool bParentEnabled) const override;

private:
    TWeakObjectPtr<UK2Node_PlayFloatCurve> CurveNode;
    ECPLoopMode CurveLoopMode;
    float CurrentTime = 0.0f;
    bool bPingPongReverse = false;
};
