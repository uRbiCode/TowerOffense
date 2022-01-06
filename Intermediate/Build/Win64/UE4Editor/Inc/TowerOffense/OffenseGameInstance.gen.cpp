// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerOffense/GameInstance/OffenseGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOffenseGameInstance() {}
// Cross Module References
	TOWEROFFENSE_API UClass* Z_Construct_UClass_UOffenseGameInstance_NoRegister();
	TOWEROFFENSE_API UClass* Z_Construct_UClass_UOffenseGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_TowerOffense();
// End Cross Module References
	void UOffenseGameInstance::StaticRegisterNativesUOffenseGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UOffenseGameInstance_NoRegister()
	{
		return UOffenseGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UOffenseGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectileMovementSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOffenseGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerOffense,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOffenseGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameInstance/OffenseGameInstance.h" },
		{ "ModuleRelativePath", "GameInstance/OffenseGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOffenseGameInstance_Statics::NewProp_ProjectileMovementSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Move" },
		{ "ModuleRelativePath", "GameInstance/OffenseGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOffenseGameInstance_Statics::NewProp_ProjectileMovementSpeed = { "ProjectileMovementSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOffenseGameInstance, ProjectileMovementSpeed), METADATA_PARAMS(Z_Construct_UClass_UOffenseGameInstance_Statics::NewProp_ProjectileMovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOffenseGameInstance_Statics::NewProp_ProjectileMovementSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOffenseGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffenseGameInstance_Statics::NewProp_ProjectileMovementSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOffenseGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOffenseGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOffenseGameInstance_Statics::ClassParams = {
		&UOffenseGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOffenseGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOffenseGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UOffenseGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOffenseGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOffenseGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOffenseGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOffenseGameInstance, 686859727);
	template<> TOWEROFFENSE_API UClass* StaticClass<UOffenseGameInstance>()
	{
		return UOffenseGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOffenseGameInstance(Z_Construct_UClass_UOffenseGameInstance, &UOffenseGameInstance::StaticClass, TEXT("/Script/TowerOffense"), TEXT("UOffenseGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOffenseGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
