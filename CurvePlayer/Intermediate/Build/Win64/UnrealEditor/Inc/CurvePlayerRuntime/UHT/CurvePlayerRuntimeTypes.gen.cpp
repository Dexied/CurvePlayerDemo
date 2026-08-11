// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CurvePlayerRuntimeTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeCurvePlayerRuntimeTypes() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CurvePlayerRuntime(ETypeConstructPhase);
CURVEPLAYERRUNTIME_API UEnum* Z_Construct_UEnum_CurvePlayerRuntime_ECPLoopMode(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum ECPLoopMode ***************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_CurvePlayerRuntime_ECPLoopMode_Statics
template<> CURVEPLAYERRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ECPLoopMode>()
{
	return Z_Construct_UEnum_CurvePlayerRuntime_ECPLoopMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Backward.DisplayName", "Backward" },
		{ "Backward.Name", "ECPLoopMode::Backward" },
		{ "BlueprintType", "true" },
		{ "Forward.DisplayName", "Forward" },
		{ "Forward.Name", "ECPLoopMode::Forward" },
		{ "ModuleRelativePath", "Public/CurvePlayerRuntimeTypes.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ECPLoopMode::None" },
		{ "PingPong.DisplayName", "Ping Pong" },
		{ "PingPong.Name", "ECPLoopMode::PingPong" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECPLoopMode::None", (int64)ECPLoopMode::None },
		{ "ECPLoopMode::Forward", (int64)ECPLoopMode::Forward },
		{ "ECPLoopMode::Backward", (int64)ECPLoopMode::Backward },
		{ "ECPLoopMode::PingPong", (int64)ECPLoopMode::PingPong },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CurvePlayerRuntime,
	nullptr,
	"ECPLoopMode",
	"ECPLoopMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ECPLoopMode;
UEnum* Z_Construct_UEnum_CurvePlayerRuntime_ECPLoopMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ECPLoopMode.OuterSingleton)
		{
			ZRIE_ECPLoopMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CurvePlayerRuntime_ECPLoopMode, (UObject*)Z_Construct_UPackage__Script_CurvePlayerRuntime(ETypeConstructPhase::Outer), TEXT("ECPLoopMode"));
		}
		return ZRIE_ECPLoopMode.OuterSingleton;
	}
	if (!ZRIE_ECPLoopMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ECPLoopMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ECPLoopMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ECPLoopMode *****************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Projects_CurvePlayerDemo_Plugins_CurvePlayer_Source_CurvePlayerRuntime_Public_CurvePlayerRuntimeTypes_h__Script_CurvePlayerRuntime_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_CurvePlayerRuntime_ECPLoopMode, TEXT("ECPLoopMode"), &ZRIE_ECPLoopMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 326408334U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_CurvePlayerDemo_Plugins_CurvePlayer_Source_CurvePlayerRuntime_Public_CurvePlayerRuntimeTypes_h__Script_CurvePlayerRuntime_da0d6bc135a519c893a5fa9153e0006976c583c6{
	TEXT("/Script/CurvePlayerRuntime"),
	nullptr, 0,
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
