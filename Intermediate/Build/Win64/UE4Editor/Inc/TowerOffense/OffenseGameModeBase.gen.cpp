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
// End Cross Module References
	DEFINE_FUNCTION(AOffenseGameModeBase::execGetCurrentEndGameTanksCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentEndGameTanksCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOffenseGameModeBase::execGetCurrentTurretsCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentTurretsCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOffenseGameModeBase::execGetCurrentTanksCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentTanksCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOffenseGameModeBase::execGetInitialTurretsCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetInitialTurretsCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOffenseGameModeBase::execGetInitialTanksCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetInitialTanksCount();
		P_NATIVE_END;
	}
	static FName NAME_AOffenseGameModeBase_HandleGameOver = FName(TEXT("HandleGameOver"));
	void AOffenseGameModeBase::HandleGameOver()
	{
		ProcessEvent(FindFunctionChecked(NAME_AOffenseGameModeBase_HandleGameOver),NULL);
	}
	void AOffenseGameModeBase::StaticRegisterNativesAOffenseGameModeBase()
	{
		UClass* Class = AOffenseGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentEndGameTanksCount", &AOffenseGameModeBase::execGetCurrentEndGameTanksCount },
			{ "GetCurrentTanksCount", &AOffenseGameModeBase::execGetCurrentTanksCount },
			{ "GetCurrentTurretsCount", &AOffenseGameModeBase::execGetCurrentTurretsCount },
			{ "GetInitialTanksCount", &AOffenseGameModeBase::execGetInitialTanksCount },
			{ "GetInitialTurretsCount", &AOffenseGameModeBase::execGetInitialTurretsCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentEndGameTanksCount_Statics
	{
		struct OffenseGameModeBase_eventGetCurrentEndGameTanksCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentEndGameTanksCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OffenseGameModeBase_eventGetCurrentEndGameTanksCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentEndGameTanksCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentEndGameTanksCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentEndGameTanksCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "GameModes/OffenseGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentEndGameTanksCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOffenseGameModeBase, nullptr, "GetCurrentEndGameTanksCount", nullptr, nullptr, sizeof(OffenseGameModeBase_eventGetCurrentEndGameTanksCount_Parms), Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentEndGameTanksCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentEndGameTanksCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentEndGameTanksCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentEndGameTanksCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentEndGameTanksCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentEndGameTanksCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentTanksCount_Statics
	{
		struct OffenseGameModeBase_eventGetCurrentTanksCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentTanksCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OffenseGameModeBase_eventGetCurrentTanksCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentTanksCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentTanksCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentTanksCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "GameModes/OffenseGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentTanksCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOffenseGameModeBase, nullptr, "GetCurrentTanksCount", nullptr, nullptr, sizeof(OffenseGameModeBase_eventGetCurrentTanksCount_Parms), Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentTanksCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentTanksCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentTanksCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentTanksCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentTanksCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentTanksCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentTurretsCount_Statics
	{
		struct OffenseGameModeBase_eventGetCurrentTurretsCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentTurretsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OffenseGameModeBase_eventGetCurrentTurretsCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentTurretsCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentTurretsCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentTurretsCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "GameModes/OffenseGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentTurretsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOffenseGameModeBase, nullptr, "GetCurrentTurretsCount", nullptr, nullptr, sizeof(OffenseGameModeBase_eventGetCurrentTurretsCount_Parms), Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentTurretsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentTurretsCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentTurretsCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentTurretsCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentTurretsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentTurretsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOffenseGameModeBase_GetInitialTanksCount_Statics
	{
		struct OffenseGameModeBase_eventGetInitialTanksCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOffenseGameModeBase_GetInitialTanksCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OffenseGameModeBase_eventGetInitialTanksCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOffenseGameModeBase_GetInitialTanksCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOffenseGameModeBase_GetInitialTanksCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOffenseGameModeBase_GetInitialTanksCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "GameModes/OffenseGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOffenseGameModeBase_GetInitialTanksCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOffenseGameModeBase, nullptr, "GetInitialTanksCount", nullptr, nullptr, sizeof(OffenseGameModeBase_eventGetInitialTanksCount_Parms), Z_Construct_UFunction_AOffenseGameModeBase_GetInitialTanksCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOffenseGameModeBase_GetInitialTanksCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOffenseGameModeBase_GetInitialTanksCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOffenseGameModeBase_GetInitialTanksCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOffenseGameModeBase_GetInitialTanksCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOffenseGameModeBase_GetInitialTanksCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOffenseGameModeBase_GetInitialTurretsCount_Statics
	{
		struct OffenseGameModeBase_eventGetInitialTurretsCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOffenseGameModeBase_GetInitialTurretsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OffenseGameModeBase_eventGetInitialTurretsCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOffenseGameModeBase_GetInitialTurretsCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOffenseGameModeBase_GetInitialTurretsCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOffenseGameModeBase_GetInitialTurretsCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "GameModes/OffenseGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOffenseGameModeBase_GetInitialTurretsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOffenseGameModeBase, nullptr, "GetInitialTurretsCount", nullptr, nullptr, sizeof(OffenseGameModeBase_eventGetInitialTurretsCount_Parms), Z_Construct_UFunction_AOffenseGameModeBase_GetInitialTurretsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOffenseGameModeBase_GetInitialTurretsCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOffenseGameModeBase_GetInitialTurretsCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOffenseGameModeBase_GetInitialTurretsCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOffenseGameModeBase_GetInitialTurretsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOffenseGameModeBase_GetInitialTurretsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOffenseGameModeBase_HandleGameOver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOffenseGameModeBase_HandleGameOver_Statics::Function_MetaDataParams[] = {
		{ "Category", "GlobalEvents" },
		{ "ModuleRelativePath", "GameModes/OffenseGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOffenseGameModeBase_HandleGameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOffenseGameModeBase, nullptr, "HandleGameOver", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOffenseGameModeBase_HandleGameOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOffenseGameModeBase_HandleGameOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOffenseGameModeBase_HandleGameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOffenseGameModeBase_HandleGameOver_Statics::FuncParams);
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
		{ &Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentEndGameTanksCount, "GetCurrentEndGameTanksCount" }, // 3534693167
		{ &Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentTanksCount, "GetCurrentTanksCount" }, // 1041140436
		{ &Z_Construct_UFunction_AOffenseGameModeBase_GetCurrentTurretsCount, "GetCurrentTurretsCount" }, // 289177808
		{ &Z_Construct_UFunction_AOffenseGameModeBase_GetInitialTanksCount, "GetInitialTanksCount" }, // 849392778
		{ &Z_Construct_UFunction_AOffenseGameModeBase_GetInitialTurretsCount, "GetInitialTurretsCount" }, // 4090056940
		{ &Z_Construct_UFunction_AOffenseGameModeBase_HandleGameOver, "HandleGameOver" }, // 1883048532
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
	IMPLEMENT_CLASS(AOffenseGameModeBase, 2179107064);
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
