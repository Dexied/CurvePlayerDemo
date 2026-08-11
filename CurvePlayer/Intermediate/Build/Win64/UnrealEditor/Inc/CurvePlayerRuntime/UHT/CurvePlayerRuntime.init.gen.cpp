// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurvePlayerRuntime_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
	CURVEPLAYERRUNTIME_API UFunction* Z_Construct_UDelegateFunction_CurvePlayerRuntime_CurvePlayerFloatCompletedSignature__DelegateSignature(ETypeConstructPhase);
	CURVEPLAYERRUNTIME_API UFunction* Z_Construct_UDelegateFunction_CurvePlayerRuntime_CurvePlayerFloatUpdateSignature__DelegateSignature(ETypeConstructPhase);
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CurvePlayerRuntime;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CurvePlayerRuntime(ETypeConstructPhase)
	{
		if (!Z_Registration_Info_UPackage__Script_CurvePlayerRuntime.OuterSingleton)
		{
		static FTypeConstructFunc* SingletonFuncArray[] = {
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_CurvePlayerRuntime_CurvePlayerFloatCompletedSignature__DelegateSignature,
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_CurvePlayerRuntime_CurvePlayerFloatUpdateSignature__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/CurvePlayerRuntime",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x68FE6CFF,
			0xBB44F096,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CurvePlayerRuntime.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_CurvePlayerRuntime.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CurvePlayerRuntime(Z_Construct_UPackage__Script_CurvePlayerRuntime, TEXT("/Script/CurvePlayerRuntime"), Z_Registration_Info_UPackage__Script_CurvePlayerRuntime, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x68FE6CFF, 0xBB44F096));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
