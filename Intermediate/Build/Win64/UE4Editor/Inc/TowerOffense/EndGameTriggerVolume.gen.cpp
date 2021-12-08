// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerOffense/Volumes/EndGameTriggerVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndGameTriggerVolume() {}
// Cross Module References
	TOWEROFFENSE_API UClass* Z_Construct_UClass_AEndGameTriggerVolume_NoRegister();
	TOWEROFFENSE_API UClass* Z_Construct_UClass_AEndGameTriggerVolume();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume();
	UPackage* Z_Construct_UPackage__Script_TowerOffense();
// End Cross Module References
	void AEndGameTriggerVolume::StaticRegisterNativesAEndGameTriggerVolume()
	{
	}
	UClass* Z_Construct_UClass_AEndGameTriggerVolume_NoRegister()
	{
		return AEndGameTriggerVolume::StaticClass();
	}
	struct Z_Construct_UClass_AEndGameTriggerVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEndGameTriggerVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerOffense,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEndGameTriggerVolume_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Volumes/EndGameTriggerVolume.h" },
		{ "ModuleRelativePath", "Volumes/EndGameTriggerVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEndGameTriggerVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEndGameTriggerVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEndGameTriggerVolume_Statics::ClassParams = {
		&AEndGameTriggerVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEndGameTriggerVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEndGameTriggerVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEndGameTriggerVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEndGameTriggerVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEndGameTriggerVolume, 3472052901);
	template<> TOWEROFFENSE_API UClass* StaticClass<AEndGameTriggerVolume>()
	{
		return AEndGameTriggerVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEndGameTriggerVolume(Z_Construct_UClass_AEndGameTriggerVolume, &AEndGameTriggerVolume::StaticClass, TEXT("/Script/TowerOffense"), TEXT("AEndGameTriggerVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEndGameTriggerVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
