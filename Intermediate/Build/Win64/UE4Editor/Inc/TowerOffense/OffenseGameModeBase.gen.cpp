// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerOffense/GameModes/OffenseGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOffenseGameModeBase() {}
// Cross Module References
	TOWEROFFENSE_API UClass* Z_Construct_UClass_AOffenseGameModeBase_NoRegister();
	TOWEROFFENSE_API UClass* Z_Construct_UClass_AOffenseGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TowerOffense();
	TOWEROFFENSE_API UClass* Z_Construct_UClass_APawnTank_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AOffenseGameModeBase::execUpdateEndGameTanks)
	{
		P_GET_OBJECT(APawnTank,Z_Param_Tank);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateEndGameTanks(Z_Param_Tank);
		P_NATIVE_END;
	}
	void AOffenseGameModeBase::StaticRegisterNativesAOffenseGameModeBase()
	{
		UClass* Class = AOffenseGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateEndGameTanks", &AOffenseGameModeBase::execUpdateEndGameTanks },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOffenseGameModeBase_UpdateEndGameTanks_Statics
	{
		struct OffenseGameModeBase_eventUpdateEndGameTanks_Parms
		{
			APawnTank* Tank;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tank;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOffenseGameModeBase_UpdateEndGameTanks_Statics::NewProp_Tank = { "Tank", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OffenseGameModeBase_eventUpdateEndGameTanks_Parms, Tank), Z_Construct_UClass_APawnTank_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOffenseGameModeBase_UpdateEndGameTanks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOffenseGameModeBase_UpdateEndGameTanks_Statics::NewProp_Tank,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOffenseGameModeBase_UpdateEndGameTanks_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameModes/OffenseGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOffenseGameModeBase_UpdateEndGameTanks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOffenseGameModeBase, nullptr, "UpdateEndGameTanks", nullptr, nullptr, sizeof(OffenseGameModeBase_eventUpdateEndGameTanks_Parms), Z_Construct_UFunction_AOffenseGameModeBase_UpdateEndGameTanks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOffenseGameModeBase_UpdateEndGameTanks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOffenseGameModeBase_UpdateEndGameTanks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOffenseGameModeBase_UpdateEndGameTanks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOffenseGameModeBase_UpdateEndGameTanks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOffenseGameModeBase_UpdateEndGameTanks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOffenseGameModeBase_NoRegister()
	{
		return AOffenseGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AOffenseGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOffenseGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerOffense,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOffenseGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOffenseGameModeBase_UpdateEndGameTanks, "UpdateEndGameTanks" }, // 4038366566
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOffenseGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameModes/OffenseGameModeBase.h" },
		{ "ModuleRelativePath", "GameModes/OffenseGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOffenseGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOffenseGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOffenseGameModeBase_Statics::ClassParams = {
		&AOffenseGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AOffenseGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOffenseGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOffenseGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOffenseGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOffenseGameModeBase, 3169042619);
	template<> TOWEROFFENSE_API UClass* StaticClass<AOffenseGameModeBase>()
	{
		return AOffenseGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOffenseGameModeBase(Z_Construct_UClass_AOffenseGameModeBase, &AOffenseGameModeBase::StaticClass, TEXT("/Script/TowerOffense"), TEXT("AOffenseGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOffenseGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
