#pragma once

#include "CoreMinimal.h"
#include "Curves/RichCurve.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Tickable.h"

#include "CurvePlayerRuntimeTypes.h"
#include "CurvePlayerFloatAsyncAction.generated.h"



DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FCurvePlayerFloatUpdateSignature, float, CurveTime, float, CurveValue, float, DeltaTime, float, DeltaValue);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FCurvePlayerFloatCompletedSignature, float, CurveTime, float, CurveValue, float, DeltaTime, float, DeltaValue);

/** Runtime proxy used by the dedicated Play Float Curve K2 node. */
UCLASS(meta=(HasDedicatedAsyncNode))
class CURVEPLAYERRUNTIME_API UCurvePlayerFloatAsyncAction final
    : public UBlueprintAsyncActionBase
    , public FTickableGameObject
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintAssignable, Category="Curve Player")
    FCurvePlayerFloatUpdateSignature Update;

    UPROPERTY(BlueprintAssignable, Category="Curve Player")
    FCurvePlayerFloatCompletedSignature Completed;

    /**
     * Internal factory used by UK2Node_PlayFloatCurve.
     * Curve data is packed by the K2 node so the FRichCurve remains inline in the Blueprint node.
     */
    UFUNCTION(BlueprintCallable, Category="Curve Player", meta=(BlueprintInternalUseOnly="true", WorldContext="WorldContextObject"))
    static UCurvePlayerFloatAsyncAction* PlayFloatCurve(
        UObject* WorldContextObject,
        const TArray<FRichCurveKey>& CurveKeys,
        int32 CurveKeyCount,
        float CurveDefaultValue,
        uint8 PreInfinityExtrap,
        uint8 PostInfinityExtrap,
        float CurvePlaySpeed = 1.0f,
        float CurveStartPosition = 0.0f, 
        ECPLoopMode CurveLoopMode = ECPLoopMode::None);

    virtual void Activate() override;

    // FTickableGameObject
    virtual void Tick(float DeltaTime) override;
    virtual TStatId GetStatId() const override;
    virtual bool IsTickable() const override;
    virtual UWorld* GetWorld() const override;

private:
    UPROPERTY(Transient)
    TObjectPtr<UObject> StoredWorldContextObject = nullptr;

    UPROPERTY(Transient)
    TArray<FRichCurveKey> SourceKeys;

    UPROPERTY(Transient)
    int32 SourceKeyCount = 0;

    UPROPERTY(Transient)
    float SourceDefaultValue = 0.0f;

    UPROPERTY(Transient)
    uint8 SourcePreInfinityExtrap = 0;

    UPROPERTY(Transient)
    uint8 SourcePostInfinityExtrap = 0;

    UPROPERTY(Transient)
    float PlaySpeed = 1.0f;

    UPROPERTY(Transient)
    float StartPosition = 0.0f;

    UPROPERTY(Transient)
    ECPLoopMode CurveLoopMode = ECPLoopMode::None;

    FRichCurve RuntimeCurve;
    float CurrentTime = 0.0f;
    float MinTime = 0.0f;
    float MaxTime = 0.0f;
    bool bActivated = false;
    bool bFinished = false;
    bool bHasKeys = false;

    void BuildRuntimeCurve();
    void Finish(float FinalTime, float FinalValue);
};
