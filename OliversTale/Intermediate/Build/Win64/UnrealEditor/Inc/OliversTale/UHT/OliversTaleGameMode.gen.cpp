// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OliversTale/OliversTaleGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOliversTaleGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	OLIVERSTALE_API UClass* Z_Construct_UClass_AOliversTaleGameMode();
	OLIVERSTALE_API UClass* Z_Construct_UClass_AOliversTaleGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OliversTale();
// End Cross Module References
	void AOliversTaleGameMode::StaticRegisterNativesAOliversTaleGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOliversTaleGameMode);
	UClass* Z_Construct_UClass_AOliversTaleGameMode_NoRegister()
	{
		return AOliversTaleGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AOliversTaleGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOliversTaleGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OliversTale,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOliversTaleGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOliversTaleGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "OliversTaleGameMode.h" },
		{ "ModuleRelativePath", "OliversTaleGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOliversTaleGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOliversTaleGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOliversTaleGameMode_Statics::ClassParams = {
		&AOliversTaleGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOliversTaleGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AOliversTaleGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AOliversTaleGameMode()
	{
		if (!Z_Registration_Info_UClass_AOliversTaleGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOliversTaleGameMode.OuterSingleton, Z_Construct_UClass_AOliversTaleGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOliversTaleGameMode.OuterSingleton;
	}
	template<> OLIVERSTALE_API UClass* StaticClass<AOliversTaleGameMode>()
	{
		return AOliversTaleGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOliversTaleGameMode);
	AOliversTaleGameMode::~AOliversTaleGameMode() {}
	struct Z_CompiledInDeferFile_FID_OliversTale_Source_OliversTale_OliversTaleGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OliversTale_Source_OliversTale_OliversTaleGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOliversTaleGameMode, AOliversTaleGameMode::StaticClass, TEXT("AOliversTaleGameMode"), &Z_Registration_Info_UClass_AOliversTaleGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOliversTaleGameMode), 3394408756U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OliversTale_Source_OliversTale_OliversTaleGameMode_h_846133644(TEXT("/Script/OliversTale"),
		Z_CompiledInDeferFile_FID_OliversTale_Source_OliversTale_OliversTaleGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OliversTale_Source_OliversTale_OliversTaleGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
