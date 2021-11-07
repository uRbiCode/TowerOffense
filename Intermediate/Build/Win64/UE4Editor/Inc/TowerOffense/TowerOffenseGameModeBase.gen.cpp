// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerOffense/TowerOffenseGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTowerOffenseGameModeBase() {}
// Cross Module References
	TOWEROFFENSE_API UClass* Z_Construct_UClass_ATowerOffenseGameModeBase_NoRegister();
	TOWEROFFENSE_API UClass* Z_Construct_UClass_ATowerOffenseGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TowerOffense();
// End Cross Module References
	void ATowerOffenseGameModeBase::StaticRegisterNativesATowerOffenseGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATowerOffenseGameModeBase_NoRegister()
	{
		return ATowerOffenseGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATowerOffenseGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATowerOffenseGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerOffense,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerOffenseGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TowerOffenseGameModeBase.h" },
		{ "ModuleRelativePath", "TowerOffenseGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATowerOffenseGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATowerOffenseGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATowerOffenseGameModeBase_Statics::ClassParams = {
		&ATowerOffenseGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATowerOffenseGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerOffenseGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATowerOffenseGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATowerOffenseGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATowerOffenseGameModeBase, 1184444354);
	template<> TOWEROFFENSE_API UClass* StaticClass<ATowerOffenseGameModeBase>()
	{
		return ATowerOffenseGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATowerOffenseGameModeBase(Z_Construct_UClass_ATowerOffenseGameModeBase, &ATowerOffenseGameModeBase::StaticClass, TEXT("/Script/TowerOffense"), TEXT("ATowerOffenseGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATowerOffenseGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
