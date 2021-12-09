// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerOffense/GameStates/OffenseStateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOffenseStateBase() {}
// Cross Module References
	TOWEROFFENSE_API UClass* Z_Construct_UClass_AOffenseStateBase_NoRegister();
	TOWEROFFENSE_API UClass* Z_Construct_UClass_AOffenseStateBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_TowerOffense();
// End Cross Module References
	void AOffenseStateBase::StaticRegisterNativesAOffenseStateBase()
	{
	}
	UClass* Z_Construct_UClass_AOffenseStateBase_NoRegister()
	{
		return AOffenseStateBase::StaticClass();
	}
	struct Z_Construct_UClass_AOffenseStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOffenseStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerOffense,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOffenseStateBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameStates/OffenseStateBase.h" },
		{ "ModuleRelativePath", "GameStates/OffenseStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOffenseStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOffenseStateBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOffenseStateBase_Statics::ClassParams = {
		&AOffenseStateBase::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOffenseStateBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOffenseStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOffenseStateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOffenseStateBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOffenseStateBase, 3231766928);
	template<> TOWEROFFENSE_API UClass* StaticClass<AOffenseStateBase>()
	{
		return AOffenseStateBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOffenseStateBase(Z_Construct_UClass_AOffenseStateBase, &AOffenseStateBase::StaticClass, TEXT("/Script/TowerOffense"), TEXT("AOffenseStateBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOffenseStateBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
