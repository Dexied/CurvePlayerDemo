// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CurvePlayerRuntimeTypes.h"

#ifdef CURVEPLAYERRUNTIME_CurvePlayerRuntimeTypes_generated_h
#error "CurvePlayerRuntimeTypes.generated.h already included, missing '#pragma once' in CurvePlayerRuntimeTypes.h"
#endif
#define CURVEPLAYERRUNTIME_CurvePlayerRuntimeTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_CurvePlayerDemo_Plugins_CurvePlayer_Source_CurvePlayerRuntime_Public_CurvePlayerRuntimeTypes_h

// ********** Begin Enum ECPLoopMode ***************************************************************
#define FOREACH_ENUM_ECPLOOPMODE(op) \
	op(ECPLoopMode::None) \
	op(ECPLoopMode::Forward) \
	op(ECPLoopMode::Backward) \
	op(ECPLoopMode::PingPong) 

enum class ECPLoopMode : uint8;
template<> struct TIsUEnumClass<ECPLoopMode> { enum { Value = true }; };
template<> UE_NODEBUG CURVEPLAYERRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ECPLoopMode>();
// ********** End Enum ECPLoopMode *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
