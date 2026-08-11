/**
* Copyright(C) 2026 | Created by dexied | Sultan Sultanov | Dexied Games
* All rights reserved!
*My Discord Server : https://discord.gg/mqV52Qf
*/


#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "CurvePlayerRuntimeTypes.generated.h"

UENUM(BlueprintType)
enum class ECPLoopMode : uint8
{
    None = 0 UMETA(DisplayName = "None"),
    Forward = 1 UMETA(DisplayName = "Forward"),
    Backward = 2 UMETA(DisplayName = "Backward"),
    PingPong = 3 UMETA(DisplayName = "Ping Pong")
};
