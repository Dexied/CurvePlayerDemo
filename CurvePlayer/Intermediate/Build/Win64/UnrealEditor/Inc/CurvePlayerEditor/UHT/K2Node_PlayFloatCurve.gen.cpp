// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_PlayFloatCurve.h"
#include "Curves/RichCurve.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeK2Node_PlayFloatCurve() {}

// ********** Begin Cross Module References ********************************************************
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_AsyncAction(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CurvePlayerEditor(ETypeConstructPhase);
CURVEPLAYEREDITOR_API UClass* Z_Construct_UClass_UK2Node_PlayFloatCurve(ETypeConstructPhase);
CURVEPLAYEREDITOR_API UClass* Z_Construct_UClass_UK2Node_PlayFloatCurve(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UK2Node_PlayFloatCurve ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UK2Node_PlayFloatCurve_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Dedicated async K2 node with an inline FRichCurve, similar in ownership semantics to a Timeline track.\n */" },
#endif
		{ "IncludePath", "K2Node_PlayFloatCurve.h" },
		{ "ModuleRelativePath", "Public/K2Node_PlayFloatCurve.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dedicated async K2 node with an inline FRichCurve, similar in ownership semantics to a Timeline track." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatCurve_MetaData[] = {
		{ "Category", "Curve Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Curve is serialized in the owning Blueprint graph node; no external curve asset is required. */" },
#endif
		{ "ModuleRelativePath", "Public/K2Node_PlayFloatCurve.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Curve is serialized in the owning Blueprint graph node; no external curve asset is required." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UK2Node_PlayFloatCurve constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloatCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UK2Node_PlayFloatCurve constinit property declarations *********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_PlayFloatCurve>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UK2Node_PlayFloatCurve Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_FloatCurve = { "FloatCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UK2Node_PlayFloatCurve, FloatCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatCurve_MetaData), NewProp_FloatCurve_MetaData) }; // 28fb44b60692b6b1fe1c67f0d097e47124003582
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FloatCurve,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UK2Node_PlayFloatCurve Property Definitions ********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UK2Node_AsyncAction,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CurvePlayerEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UK2Node_PlayFloatCurve,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UK2Node_PlayFloatCurve;
UClass* Z_Construct_UClass_UK2Node_PlayFloatCurve(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UK2Node_PlayFloatCurve;
		if (!Z_Registration_Info_UClass_UK2Node_PlayFloatCurve.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("K2Node_PlayFloatCurve"),
				Z_Registration_Info_UClass_UK2Node_PlayFloatCurve.InnerSingleton,
				nullptr,
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
		return Z_Registration_Info_UClass_UK2Node_PlayFloatCurve.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UK2Node_PlayFloatCurve.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_PlayFloatCurve.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UK2Node_PlayFloatCurve.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UK2Node_PlayFloatCurve);
UK2Node_PlayFloatCurve::~UK2Node_PlayFloatCurve() {}
// ********** End Class UK2Node_PlayFloatCurve *****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Projects_CurvePlayerDemo_Plugins_CurvePlayer_Source_CurvePlayerEditor_Public_K2Node_PlayFloatCurve_h__Script_CurvePlayerEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_PlayFloatCurve, TEXT("UK2Node_PlayFloatCurve"), &Z_Registration_Info_UClass_UK2Node_PlayFloatCurve, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_PlayFloatCurve), 1565039682U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_CurvePlayerDemo_Plugins_CurvePlayer_Source_CurvePlayerEditor_Public_K2Node_PlayFloatCurve_h__Script_CurvePlayerEditor_08e46b6a35c401efb9baa8e6c0d6937aed082db0{
	TEXT("/Script/CurvePlayerEditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
