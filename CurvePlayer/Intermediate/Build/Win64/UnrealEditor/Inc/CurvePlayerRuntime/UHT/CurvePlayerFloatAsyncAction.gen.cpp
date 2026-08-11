// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CurvePlayerFloatAsyncAction.h"
#include "Curves/RichCurve.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeCurvePlayerFloatAsyncAction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurveKey(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CurvePlayerRuntime(ETypeConstructPhase);
CURVEPLAYERRUNTIME_API UClass* Z_Construct_UClass_UCurvePlayerFloatAsyncAction(ETypeConstructPhase);
CURVEPLAYERRUNTIME_API UFunction* Z_Construct_UDelegateFunction_CurvePlayerRuntime_CurvePlayerFloatCompletedSignature__DelegateSignature(ETypeConstructPhase);
CURVEPLAYERRUNTIME_API UFunction* Z_Construct_UDelegateFunction_CurvePlayerRuntime_CurvePlayerFloatUpdateSignature__DelegateSignature(ETypeConstructPhase);
CURVEPLAYERRUNTIME_API UEnum* Z_Construct_UEnum_CurvePlayerRuntime_ECPLoopMode(ETypeConstructPhase);
CURVEPLAYERRUNTIME_API UClass* Z_Construct_UClass_UCurvePlayerFloatAsyncAction(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FCurvePlayerFloatUpdateSignature **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_CurvePlayerRuntime_CurvePlayerFloatUpdateSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_CurvePlayerRuntime_eventCurvePlayerFloatUpdateSignature_Parms
	{
		float CurveTime;
		float CurveValue;
		float DeltaTime;
		float DeltaValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/CurvePlayerFloatAsyncAction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FCurvePlayerFloatUpdateSignature constinit property declarations ******
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FCurvePlayerFloatUpdateSignature constinit property declarations ********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FCurvePlayerFloatUpdateSignature Property Definitions *****************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CurveTime = { "CurveTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CurvePlayerRuntime_eventCurvePlayerFloatUpdateSignature_Parms, CurveTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CurveValue = { "CurveValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CurvePlayerRuntime_eventCurvePlayerFloatUpdateSignature_Parms, CurveValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CurvePlayerRuntime_eventCurvePlayerFloatUpdateSignature_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CurvePlayerRuntime_eventCurvePlayerFloatUpdateSignature_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurveTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurveValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeltaValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FCurvePlayerFloatUpdateSignature Property Definitions *******************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_CurvePlayerRuntime, nullptr, "CurvePlayerFloatUpdateSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_CurvePlayerRuntime_eventCurvePlayerFloatUpdateSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_CurvePlayerRuntime_eventCurvePlayerFloatUpdateSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CurvePlayerRuntime_CurvePlayerFloatUpdateSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FCurvePlayerFloatUpdateSignature ****************************************

// ********** Begin Delegate FCurvePlayerFloatCompletedSignature ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_CurvePlayerRuntime_CurvePlayerFloatCompletedSignature__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_CurvePlayerRuntime_eventCurvePlayerFloatCompletedSignature_Parms
	{
		float CurveTime;
		float CurveValue;
		float DeltaTime;
		float DeltaValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/CurvePlayerFloatAsyncAction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FCurvePlayerFloatCompletedSignature constinit property declarations ***
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FCurvePlayerFloatCompletedSignature constinit property declarations *****
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FCurvePlayerFloatCompletedSignature Property Definitions **************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CurveTime = { "CurveTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CurvePlayerRuntime_eventCurvePlayerFloatCompletedSignature_Parms, CurveTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CurveValue = { "CurveValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CurvePlayerRuntime_eventCurvePlayerFloatCompletedSignature_Parms, CurveValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CurvePlayerRuntime_eventCurvePlayerFloatCompletedSignature_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CurvePlayerRuntime_eventCurvePlayerFloatCompletedSignature_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurveTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurveValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeltaValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FCurvePlayerFloatCompletedSignature Property Definitions ****************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_CurvePlayerRuntime, nullptr, "CurvePlayerFloatCompletedSignature__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_CurvePlayerRuntime_eventCurvePlayerFloatCompletedSignature_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_CurvePlayerRuntime_eventCurvePlayerFloatCompletedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CurvePlayerRuntime_CurvePlayerFloatCompletedSignature__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FCurvePlayerFloatCompletedSignature *************************************

// ********** Begin Class UCurvePlayerFloatAsyncAction Function PlayFloatCurve *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCurvePlayerFloatAsyncAction_PlayFloatCurve_Statics
struct UHT_STATICS
{
	struct CurvePlayerFloatAsyncAction_eventPlayFloatCurve_Parms
	{
		UObject* WorldContextObject;
		TArray<FRichCurveKey> CurveKeys;
		int32 CurveKeyCount;
		float CurveDefaultValue;
		uint8 PreInfinityExtrap;
		uint8 PostInfinityExtrap;
		float CurvePlaySpeed;
		float CurveStartPosition;
		ECPLoopMode CurveLoopMode;
		UCurvePlayerFloatAsyncAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Curve Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Internal factory used by UK2Node_PlayFloatCurve.\n     * Curve data is packed by the K2 node so the FRichCurve remains inline in the Blueprint node.\n     */" },
#endif
		{ "CPP_Default_CurveLoopMode", "None" },
		{ "CPP_Default_CurvePlaySpeed", "1.000000" },
		{ "CPP_Default_CurveStartPosition", "0.000000" },
		{ "ModuleRelativePath", "Public/CurvePlayerFloatAsyncAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal factory used by UK2Node_PlayFloatCurve.\nCurve data is packed by the K2 node so the FRichCurve remains inline in the Blueprint node." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PlayFloatCurve constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurveKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveKeys;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurveKeyCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveDefaultValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PreInfinityExtrap;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PostInfinityExtrap;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurvePlaySpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveStartPosition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurveLoopMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveLoopMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PlayFloatCurve constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PlayFloatCurve Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(CurvePlayerFloatAsyncAction_eventPlayFloatCurve_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CurveKeys_Inner = { "CurveKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRichCurveKey, METADATA_PARAMS(0, nullptr) }; // 7554c2198ab8ac12a04cb37e0dc778bd75abda8c
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_CurveKeys = { "CurveKeys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(CurvePlayerFloatAsyncAction_eventPlayFloatCurve_Parms, CurveKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveKeys_MetaData), NewProp_CurveKeys_MetaData) }; // 7554c2198ab8ac12a04cb37e0dc778bd75abda8c
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CurveKeyCount = { "CurveKeyCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(CurvePlayerFloatAsyncAction_eventPlayFloatCurve_Parms, CurveKeyCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CurveDefaultValue = { "CurveDefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(CurvePlayerFloatAsyncAction_eventPlayFloatCurve_Parms, CurveDefaultValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_PreInfinityExtrap = { "PreInfinityExtrap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(CurvePlayerFloatAsyncAction_eventPlayFloatCurve_Parms, PreInfinityExtrap), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_PostInfinityExtrap = { "PostInfinityExtrap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(CurvePlayerFloatAsyncAction_eventPlayFloatCurve_Parms, PostInfinityExtrap), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CurvePlaySpeed = { "CurvePlaySpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(CurvePlayerFloatAsyncAction_eventPlayFloatCurve_Parms, CurvePlaySpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CurveStartPosition = { "CurveStartPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(CurvePlayerFloatAsyncAction_eventPlayFloatCurve_Parms, CurveStartPosition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CurveLoopMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_CurveLoopMode = { "CurveLoopMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(CurvePlayerFloatAsyncAction_eventPlayFloatCurve_Parms, CurveLoopMode), Z_Construct_UEnum_CurvePlayerRuntime_ECPLoopMode, METADATA_PARAMS(0, nullptr) }; // 1374988e8bb95cbb3db6db6dd65bab2806b75b90
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(CurvePlayerFloatAsyncAction_eventPlayFloatCurve_Parms, ReturnValue), Z_Construct_UClass_UCurvePlayerFloatAsyncAction, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurveKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurveKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurveKeyCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurveDefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreInfinityExtrap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PostInfinityExtrap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurvePlaySpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurveStartPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurveLoopMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurveLoopMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PlayFloatCurve Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCurvePlayerFloatAsyncAction, nullptr, "PlayFloatCurve", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CurvePlayerFloatAsyncAction_eventPlayFloatCurve_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CurvePlayerFloatAsyncAction_eventPlayFloatCurve_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCurvePlayerFloatAsyncAction_PlayFloatCurve(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UCurvePlayerFloatAsyncAction::execPlayFloatCurve)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(FRichCurveKey,Z_Param_Out_CurveKeys);
	P_GET_PROPERTY(FIntProperty,Z_Param_CurveKeyCount);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CurveDefaultValue);
	P_GET_PROPERTY(FByteProperty,Z_Param_PreInfinityExtrap);
	P_GET_PROPERTY(FByteProperty,Z_Param_PostInfinityExtrap);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CurvePlaySpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CurveStartPosition);
	P_GET_ENUM(ECPLoopMode,Z_Param_CurveLoopMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCurvePlayerFloatAsyncAction**)Z_Param__Result=UCurvePlayerFloatAsyncAction::PlayFloatCurve(Z_Param_WorldContextObject,Z_Param_Out_CurveKeys,Z_Param_CurveKeyCount,Z_Param_CurveDefaultValue,Z_Param_PreInfinityExtrap,Z_Param_PostInfinityExtrap,Z_Param_CurvePlaySpeed,Z_Param_CurveStartPosition,ECPLoopMode(Z_Param_CurveLoopMode));
	P_NATIVE_END;
}
// ********** End Class UCurvePlayerFloatAsyncAction Function PlayFloatCurve ***********************

// ********** Begin Class UCurvePlayerFloatAsyncAction *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UCurvePlayerFloatAsyncAction_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Runtime proxy used by the dedicated Play Float Curve K2 node. */" },
#endif
		{ "HasDedicatedAsyncNode", "" },
		{ "IncludePath", "CurvePlayerFloatAsyncAction.h" },
		{ "ModuleRelativePath", "Public/CurvePlayerFloatAsyncAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runtime proxy used by the dedicated Play Float Curve K2 node." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Update_MetaData[] = {
		{ "Category", "Curve Player" },
		{ "ModuleRelativePath", "Public/CurvePlayerFloatAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[] = {
		{ "Category", "Curve Player" },
		{ "ModuleRelativePath", "Public/CurvePlayerFloatAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoredWorldContextObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/CurvePlayerFloatAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceKeys_MetaData[] = {
		{ "ModuleRelativePath", "Public/CurvePlayerFloatAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceKeyCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/CurvePlayerFloatAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceDefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/CurvePlayerFloatAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePreInfinityExtrap_MetaData[] = {
		{ "ModuleRelativePath", "Public/CurvePlayerFloatAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePostInfinityExtrap_MetaData[] = {
		{ "ModuleRelativePath", "Public/CurvePlayerFloatAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaySpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/CurvePlayerFloatAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/CurvePlayerFloatAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveLoopMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/CurvePlayerFloatAsyncAction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCurvePlayerFloatAsyncAction constinit property declarations *************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Update;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StoredWorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceKeys;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SourceKeyCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceDefaultValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourcePreInfinityExtrap;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourcePostInfinityExtrap;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaySpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartPosition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurveLoopMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveLoopMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCurvePlayerFloatAsyncAction constinit property declarations ***************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("PlayFloatCurve"), .Pointer = &UCurvePlayerFloatAsyncAction::execPlayFloatCurve },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCurvePlayerFloatAsyncAction_PlayFloatCurve, "PlayFloatCurve" }, // 667ccf753c2aea9ec5cd584a0fd3a7061c35f3b0
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurvePlayerFloatAsyncAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UCurvePlayerFloatAsyncAction Property Definitions ************************
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_Update = { "Update", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UCurvePlayerFloatAsyncAction, Update), Z_Construct_UDelegateFunction_CurvePlayerRuntime_CurvePlayerFloatUpdateSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Update_MetaData), NewProp_Update_MetaData) }; // 8bb7ad4000022e949c70f6ef1f2ea1d13c1af9f8
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UCurvePlayerFloatAsyncAction, Completed), Z_Construct_UDelegateFunction_CurvePlayerRuntime_CurvePlayerFloatCompletedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Completed_MetaData), NewProp_Completed_MetaData) }; // dcbdb9d33e9d4e3b8bbec1fcbf661c60242e02c4
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StoredWorldContextObject = { "StoredWorldContextObject", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UCurvePlayerFloatAsyncAction, StoredWorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoredWorldContextObject_MetaData), NewProp_StoredWorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SourceKeys_Inner = { "SourceKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRichCurveKey, METADATA_PARAMS(0, nullptr) }; // 7554c2198ab8ac12a04cb37e0dc778bd75abda8c
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SourceKeys = { "SourceKeys", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UCurvePlayerFloatAsyncAction, SourceKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceKeys_MetaData), NewProp_SourceKeys_MetaData) }; // 7554c2198ab8ac12a04cb37e0dc778bd75abda8c
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SourceKeyCount = { "SourceKeyCount", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UCurvePlayerFloatAsyncAction, SourceKeyCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceKeyCount_MetaData), NewProp_SourceKeyCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SourceDefaultValue = { "SourceDefaultValue", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UCurvePlayerFloatAsyncAction, SourceDefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceDefaultValue_MetaData), NewProp_SourceDefaultValue_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SourcePreInfinityExtrap = { "SourcePreInfinityExtrap", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(UCurvePlayerFloatAsyncAction, SourcePreInfinityExtrap), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePreInfinityExtrap_MetaData), NewProp_SourcePreInfinityExtrap_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SourcePostInfinityExtrap = { "SourcePostInfinityExtrap", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(UCurvePlayerFloatAsyncAction, SourcePostInfinityExtrap), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePostInfinityExtrap_MetaData), NewProp_SourcePostInfinityExtrap_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PlaySpeed = { "PlaySpeed", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UCurvePlayerFloatAsyncAction, PlaySpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaySpeed_MetaData), NewProp_PlaySpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UCurvePlayerFloatAsyncAction, StartPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPosition_MetaData), NewProp_StartPosition_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CurveLoopMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_CurveLoopMode = { "CurveLoopMode", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UCurvePlayerFloatAsyncAction, CurveLoopMode), Z_Construct_UEnum_CurvePlayerRuntime_ECPLoopMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveLoopMode_MetaData), NewProp_CurveLoopMode_MetaData) }; // 1374988e8bb95cbb3db6db6dd65bab2806b75b90
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Update,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Completed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StoredWorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceKeyCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceDefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourcePreInfinityExtrap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourcePostInfinityExtrap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlaySpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurveLoopMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurveLoopMode,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UCurvePlayerFloatAsyncAction Property Definitions **************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintAsyncActionBase,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CurvePlayerRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UCurvePlayerFloatAsyncAction,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UCurvePlayerFloatAsyncAction_StaticRegisterNativesUCurvePlayerFloatAsyncAction()
{
	UClass* Class = UCurvePlayerFloatAsyncAction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCurvePlayerFloatAsyncAction;
UClass* Z_Construct_UClass_UCurvePlayerFloatAsyncAction(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UCurvePlayerFloatAsyncAction;
		if (!Z_Registration_Info_UClass_UCurvePlayerFloatAsyncAction.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("CurvePlayerFloatAsyncAction"),
				Z_Registration_Info_UClass_UCurvePlayerFloatAsyncAction.InnerSingleton,
				UCurvePlayerFloatAsyncAction_StaticRegisterNativesUCurvePlayerFloatAsyncAction,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_UCurvePlayerFloatAsyncAction.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UCurvePlayerFloatAsyncAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurvePlayerFloatAsyncAction.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UCurvePlayerFloatAsyncAction.OuterSingleton;
}
#undef UHT_STATICS
UCurvePlayerFloatAsyncAction::UCurvePlayerFloatAsyncAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCurvePlayerFloatAsyncAction);
UCurvePlayerFloatAsyncAction::~UCurvePlayerFloatAsyncAction() {}
// ********** End Class UCurvePlayerFloatAsyncAction ***********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Projects_CurvePlayerDemo_Plugins_CurvePlayer_Source_CurvePlayerRuntime_Public_CurvePlayerFloatAsyncAction_h__Script_CurvePlayerRuntime_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCurvePlayerFloatAsyncAction, TEXT("UCurvePlayerFloatAsyncAction"), &Z_Registration_Info_UClass_UCurvePlayerFloatAsyncAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurvePlayerFloatAsyncAction), 2575359532U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_CurvePlayerDemo_Plugins_CurvePlayer_Source_CurvePlayerRuntime_Public_CurvePlayerFloatAsyncAction_h__Script_CurvePlayerRuntime_79298d8e73d8bbe4fdbe90f970b0a32381f04174{
	TEXT("/Script/CurvePlayerRuntime"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
