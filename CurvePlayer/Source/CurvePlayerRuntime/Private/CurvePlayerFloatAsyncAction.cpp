#include "CurvePlayerFloatAsyncAction.h"

#include "Engine/Engine.h"
#include "Engine/GameInstance.h"
#include "Engine/World.h"

UCurvePlayerFloatAsyncAction* UCurvePlayerFloatAsyncAction::PlayFloatCurve(
    UObject* WorldContextObject,
    const TArray<FRichCurveKey>& CurveKeys,
    int32 CurveKeyCount,
    float CurveDefaultValue,
    uint8 PreInfinityExtrap,
    uint8 PostInfinityExtrap,
    float CurvePlaySpeed,
    float CurveStartPosition,
    ECPLoopMode CurveLoopMode)
{
    UCurvePlayerFloatAsyncAction* Action = NewObject<UCurvePlayerFloatAsyncAction>();
    Action->SetFlags(RF_StrongRefOnFrame);
    Action->StoredWorldContextObject = WorldContextObject;
    Action->SourceKeys = CurveKeys;
    Action->SourceKeyCount = CurveKeyCount;
    Action->SourceDefaultValue = CurveDefaultValue == MAX_flt ? 0.0f : CurveDefaultValue;
    Action->SourcePreInfinityExtrap = PreInfinityExtrap;
    Action->SourcePostInfinityExtrap = PostInfinityExtrap;
    Action->PlaySpeed = CurvePlaySpeed;
    Action->StartPosition = CurveStartPosition;
    Action->CurveLoopMode = CurveLoopMode;

    Action->RegisterWithGameInstance(WorldContextObject);

    return Action;
}

void UCurvePlayerFloatAsyncAction::BuildRuntimeCurve()
{
    const int32 EffectiveCount = FMath::Clamp(SourceKeyCount, 0, SourceKeys.Num());

    TArray<FRichCurveKey> EffectiveKeys;
    if (EffectiveCount > 0)
    {
        EffectiveKeys.Append(SourceKeys.GetData(), EffectiveCount);
    }

    RuntimeCurve.SetKeys(EffectiveKeys);
    RuntimeCurve.DefaultValue = SourceDefaultValue;
    RuntimeCurve.PreInfinityExtrap = static_cast<ERichCurveExtrapolation>(SourcePreInfinityExtrap);
    RuntimeCurve.PostInfinityExtrap = static_cast<ERichCurveExtrapolation>(SourcePostInfinityExtrap);


    bHasKeys = EffectiveCount > 0;
    if (bHasKeys)
    {
        RuntimeCurve.GetTimeRange(MinTime, MaxTime);
    }
    else
    {
        MinTime = 0.0f;
        MaxTime = 0.0f;
    }
}

void UCurvePlayerFloatAsyncAction::Activate()
{
    if (bActivated || bFinished)
    {
        return;
    }

    BuildRuntimeCurve();
    CurrentTime = bHasKeys ? FMath::Clamp(StartPosition, MinTime, MaxTime) : StartPosition;
    bActivated = true;

    const float InitialValue = RuntimeCurve.Eval(CurrentTime, SourceDefaultValue);
    Update.Broadcast(CurrentTime, InitialValue, 0.0f, 0.0f);

    if (!bHasKeys || FMath::IsNearlyZero(PlaySpeed))
    {
        Finish(CurrentTime, InitialValue);
        return;
    }

    const bool bAlreadyAtForwardEnd = PlaySpeed > 0.0f && CurrentTime >= MaxTime;
    const bool bAlreadyAtReverseEnd = PlaySpeed < 0.0f && CurrentTime <= MinTime;
    if (bAlreadyAtForwardEnd || bAlreadyAtReverseEnd)
    {
        Finish(CurrentTime, InitialValue);
    }
}

void UCurvePlayerFloatAsyncAction::Tick(float DeltaTime)
{
    if (!bActivated || bFinished)
    {
        return;
    }
    const float LastTime = CurrentTime;
    CurrentTime += DeltaTime * PlaySpeed;

    bool bReachedEnd = false;
    if (PlaySpeed > 0.0f && CurrentTime >= MaxTime)
    {
        CurrentTime = MaxTime;
        bReachedEnd = true;
    }
    else if (PlaySpeed < 0.0f && CurrentTime <= MinTime)
    {
        CurrentTime = MinTime;
        bReachedEnd = true;
    }

    const float CurrentValue = RuntimeCurve.Eval(CurrentTime, SourceDefaultValue);
    Update.Broadcast(CurrentTime, CurrentValue, DeltaTime, CurrentValue - RuntimeCurve.Eval(LastTime, SourceDefaultValue));

    if (bReachedEnd)
    {
        Finish(CurrentTime, CurrentValue);
    }
}

TStatId UCurvePlayerFloatAsyncAction::GetStatId() const
{
    RETURN_QUICK_DECLARE_CYCLE_STAT(UCurvePlayerFloatAsyncAction, STATGROUP_Tickables);
}

bool UCurvePlayerFloatAsyncAction::IsTickable() const
{
    return !HasAnyFlags(RF_ClassDefaultObject) && bActivated && !bFinished;
}

UWorld* UCurvePlayerFloatAsyncAction::GetWorld() const
{
    if (StoredWorldContextObject && GEngine)
    {
        return GEngine->GetWorldFromContextObject(StoredWorldContextObject, EGetWorldErrorMode::ReturnNull);
    }

    return nullptr;
}

void UCurvePlayerFloatAsyncAction::Finish(float FinalTime, float FinalValue)
{
    if (bFinished)
    {
        return;
    }

    bFinished = true;
    bActivated = false;
    Completed.Broadcast(FinalTime, FinalValue, 0.0f, 0.0f);
    SetReadyToDestroy();
}
