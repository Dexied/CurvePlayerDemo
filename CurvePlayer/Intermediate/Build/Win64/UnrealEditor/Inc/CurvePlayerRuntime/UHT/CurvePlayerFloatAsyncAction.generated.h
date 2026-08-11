// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CurvePlayerFloatAsyncAction.h"

#ifdef CURVEPLAYERRUNTIME_CurvePlayerFloatAsyncAction_generated_h
#error "CurvePlayerFloatAsyncAction.generated.h already included, missing '#pragma once' in CurvePlayerFloatAsyncAction.h"
#endif
#define CURVEPLAYERRUNTIME_CurvePlayerFloatAsyncAction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCurvePlayerFloatAsyncAction;
class UObject;
enum class ECPLoopMode : uint8;
struct FRichCurveKey;

// ********** Begin Class UCurvePlayerFloatAsyncAction *********************************************
#define FID_Projects_CurvePlayerDemo_Plugins_CurvePlayer_Source_CurvePlayerRuntime_Public_CurvePlayerFloatAsyncAction_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPlayFloatCurve);


struct Z_Construct_UClass_UCurvePlayerFloatAsyncAction_Statics;
CURVEPLAYERRUNTIME_API UClass* Z_Construct_UClass_UCurvePlayerFloatAsyncAction(ETypeConstructPhase);

#define FID_Projects_CurvePlayerDemo_Plugins_CurvePlayer_Source_CurvePlayerRuntime_Public_CurvePlayerFloatAsyncAction_h_22_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UCurvePlayerFloatAsyncAction_Statics; \
	friend CURVEPLAYERRUNTIME_API UClass* ::Z_Construct_UClass_UCurvePlayerFloatAsyncAction(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UCurvePlayerFloatAsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CurvePlayerRuntime"), Z_Construct_UClass_UCurvePlayerFloatAsyncAction) \
	DECLARE_SERIALIZER(UCurvePlayerFloatAsyncAction)


#define FID_Projects_CurvePlayerDemo_Plugins_CurvePlayer_Source_CurvePlayerRuntime_Public_CurvePlayerFloatAsyncAction_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCurvePlayerFloatAsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCurvePlayerFloatAsyncAction(UCurvePlayerFloatAsyncAction&&) = delete; \
	UCurvePlayerFloatAsyncAction(const UCurvePlayerFloatAsyncAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCurvePlayerFloatAsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurvePlayerFloatAsyncAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurvePlayerFloatAsyncAction) \
	NO_API ~UCurvePlayerFloatAsyncAction();


#define FID_Projects_CurvePlayerDemo_Plugins_CurvePlayer_Source_CurvePlayerRuntime_Public_CurvePlayerFloatAsyncAction_h_17_PROLOG
#define FID_Projects_CurvePlayerDemo_Plugins_CurvePlayer_Source_CurvePlayerRuntime_Public_CurvePlayerFloatAsyncAction_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_CurvePlayerDemo_Plugins_CurvePlayer_Source_CurvePlayerRuntime_Public_CurvePlayerFloatAsyncAction_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_CurvePlayerDemo_Plugins_CurvePlayer_Source_CurvePlayerRuntime_Public_CurvePlayerFloatAsyncAction_h_22_INCLASS_NO_PURE_DECLS \
	FID_Projects_CurvePlayerDemo_Plugins_CurvePlayer_Source_CurvePlayerRuntime_Public_CurvePlayerFloatAsyncAction_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCurvePlayerFloatAsyncAction;

// ********** End Class UCurvePlayerFloatAsyncAction ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_CurvePlayerDemo_Plugins_CurvePlayer_Source_CurvePlayerRuntime_Public_CurvePlayerFloatAsyncAction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
