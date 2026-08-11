#include "SCurvePlayerPreview.h"

#include "K2Node_PlayFloatCurve.h"
#include "Rendering/DrawElements.h"
#include "Styling/AppStyle.h"

void SCurvePlayerPreview::Construct(const FArguments& InArgs)
{
    CurveNode = InArgs._CurveNode;
	CurveLoopMode = InArgs._CurveLoopMode;
    SetCanTick(true);
}



void SCurvePlayerPreview::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
    if (!CurveNode.IsValid())
        return;

    UK2Node_PlayFloatCurve* Node = CurveNode.Get();
    if (!Node || Node->FloatCurve.Keys.IsEmpty())
        return;

    float MinTime, MaxTime;
    Node->FloatCurve.GetTimeRange(MinTime, MaxTime);
    if (FMath::IsNearlyEqual(MinTime, MaxTime))
    {
        MaxTime = MinTime + 1.0f;
    }

    CurveLoopMode = Node->GetCurveLoopMode();

    switch (CurveLoopMode)
    {
    case ECPLoopMode::None:
        CurrentTime = 0.0f;
        break;
    case ECPLoopMode::Forward:
        CurrentTime += InDeltaTime;
        if (CurrentTime > MaxTime)
        {
            CurrentTime = MinTime;
        }
        break;
    case ECPLoopMode::Backward:
        CurrentTime -= InDeltaTime;
        if (CurrentTime <= MinTime)
        {
            CurrentTime = MaxTime;
        }
        break;
    case ECPLoopMode::PingPong:
        if (bPingPongReverse)
        {
            CurrentTime -= InDeltaTime;
            if (CurrentTime < MinTime)
            {
                CurrentTime = MinTime;
                bPingPongReverse = false;
            }
        }
        else
        {
            CurrentTime += InDeltaTime;
            if (CurrentTime > MaxTime)
            {
                CurrentTime = MaxTime;
                bPingPongReverse = true;
            }
        }
        break;
    }


    

    Invalidate(EInvalidateWidgetReason::Paint);
}

FVector2D SCurvePlayerPreview::ComputeDesiredSize(float LayoutScaleMultiplier) const
{
    return FVector2D(240.0f, 88.0f);
}

int32 SCurvePlayerPreview::OnPaint(
    const FPaintArgs& Args,
    const FGeometry& AllottedGeometry,
    const FSlateRect& MyCullingRect,
    FSlateWindowElementList& OutDrawElements,
    int32 LayerId,
    const FWidgetStyle& InWidgetStyle,
    bool bParentEnabled) const
{
    const FVector2D Size = AllottedGeometry.GetLocalSize();
    const FSlateBrush* BackgroundBrush = FAppStyle::GetBrush("Graph.Node.Body");

    FSlateDrawElement::MakeBox(
        OutDrawElements,
        LayerId,
        AllottedGeometry.ToPaintGeometry(),
        BackgroundBrush,
        ESlateDrawEffect::None,
        FLinearColor(0.045f, 0.045f, 0.045f, 0.85f));

    UK2Node_PlayFloatCurve* Node = CurveNode.Get();
    if (!Node || Node->FloatCurve.Keys.IsEmpty() || Size.X <= 4.0f || Size.Y <= 4.0f)
    {
        return LayerId + 1;
    }

    float MinTime = 0.0f;
    float MaxTime = 0.0f;
    float MinValue = 0.0f;
    float MaxValue = 0.0f;
    Node->FloatCurve.GetTimeRange(MinTime, MaxTime);
    Node->FloatCurve.GetValueRange(MinValue, MaxValue);

    if (FMath::IsNearlyEqual(MinTime, MaxTime))
    {
        MaxTime = MinTime + 1.0f;
    }
    if (FMath::IsNearlyEqual(MinValue, MaxValue))
    {
        MinValue -= 0.5f;
        MaxValue += 0.5f;
    }

    const float Padding = 6.0f;
    const float Width = FMath::Max(1.0f, Size.X - Padding * 2.0f);
    const float Height = FMath::Max(1.0f, Size.Y - Padding * 2.0f);

    TArray<FVector2f> Points;
    constexpr int32 SampleCount = 96;
    Points.Reserve(SampleCount);

    for (int32 Index = 0; Index < SampleCount; ++Index)
    {
        const float Alpha = static_cast<float>(Index) / static_cast<float>(SampleCount - 1);
        const float Time = FMath::Lerp(MinTime, MaxTime, Alpha);
        const float Value = Node->FloatCurve.Eval(Time);
        const float ValueAlpha = (Value - MinValue) / (MaxValue - MinValue);

        Points.Emplace(
            Padding + Alpha * Width,
            Padding + (1.0f - ValueAlpha) * Height);
    }

    FSlateDrawElement::MakeLines(
        OutDrawElements,
        LayerId + 1,
        AllottedGeometry.ToPaintGeometry(),
        Points,
        ESlateDrawEffect::None,
        FLinearColor(0.15f, 0.75f, 1.0f, 1.0f),
        true,
        1.5f);

    //

    if (CurveLoopMode != ECPLoopMode::None)
    {
        if (MaxTime - MinTime > 0.0f && MaxValue - MinValue > 0.0f)
        {
            const float TimeAlpha = (CurrentTime - MinTime) / (MaxTime - MinTime);
            const float Value = Node->FloatCurve.Eval(CurrentTime);
            const float ValueAlpha = (Value - MinValue) / (MaxValue - MinValue);

            const FVector2D MarkerPos(
                Padding + TimeAlpha * Width,
                Padding + (1.0f - ValueAlpha) * Height
            );

            const float MarkerSize = 8.0f;
            const FVector2D MarkerHalfSize(MarkerSize * 0.5f, MarkerSize * 0.5f);
            const FSlateBrush* MarkerBrush = FAppStyle::GetBrush("WhiteBrush"); // или свой

            FSlateDrawElement::MakeBox(
                OutDrawElements,
                LayerId + 2, // выше линии
                AllottedGeometry.ToPaintGeometry(
                    MarkerPos - MarkerHalfSize,
                    FVector2D(MarkerSize, MarkerSize)
                ),
                MarkerBrush,
                ESlateDrawEffect::None,
                FLinearColor(1.0f, 0.2f, 0.2f, 1.0f) // красный
            );
        }
    }

    return LayerId + 3;
}
