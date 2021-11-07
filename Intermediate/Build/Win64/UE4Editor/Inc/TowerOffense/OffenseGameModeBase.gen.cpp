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
	static FName NAME_AOffenseGameModeBase_GameOver = FName(TEXT("GameOver"));
	void AOffenseGameModeBase::GameOver(bool PlayerWon)
	{
		OffenseGameModeBase_eventGameOver_Parms Parms;
		Parms.PlayerWon=PlayerWon ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AOffenseGameModeBase_GameOver),&Parms);
	}
	static FName NAME_AOffenseGameModeBase_GameStart = FName(TEXT("GameStart"));
	void AOffenseGameModeBase::GameStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_AOffenseGameModeBase_GameStart),NULL);
	}
	void AOffenseGameModeBase::StaticRegisterNativesAOffenseGameModeBase()
	{
	}
	struct Z_Construct_UFunction_AOffenseGameModeBase_GameOver_Statics
	{
		static void NewProp_PlayerWon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PlayerWon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AOffenseGameModeBase_GameOver_Statics::NewProp_PlayerWon_SetBit(void* Obj)
	{
		((OffenseGameModeBase_eventGameOver_Parms*)Obj)->PlayerWon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOffenseGameModeBase_GameOver_Statics::NewProp_PlayerWon = { "PlayerWon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OffenseGameModeBase_eventGameOver_Parms), &Z_Construct_UFunction_AOffenseGameModeBase_GameOver_Statics::NewProp_PlayerWon_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOffenseGameModeBase_GameOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOffenseGameModeBase_GameOver_Statics::NewProp_PlayerWon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOffenseGameModeBase_GameOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameModes/OffenseGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOffenseGameModeBase_GameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOffenseGameModeBase, nullptr, "GameOver", nullptr, nullptr, sizeof(OffenseGameModeBase_eventGameOver_Parms), Z_Construct_UFunction_AOffenseGameModeBase_GameOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOffenseGameModeBase_GameOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOffenseGameModeBase_GameOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOffenseGameModeBase_GameOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOffenseGameModeBase_GameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOffenseGameModeBase_GameOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOffenseGameModeBase_GameStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOffenseGameModeBase_GameStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameModes/OffenseGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOffenseGameModeBase_GameStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOffenseGameModeBase, nullptr, "GameStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOffenseGameModeBase_GameStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOffenseGameModeBase_GameStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOffenseGameModeBase_GameStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOffenseGameModeBase_GameStart_Statics::FuncParams);
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOffenseGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerOffense,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOffenseGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOffenseGameModeBase_GameOver, "GameOver" }, // 1731910947
		{ &Z_Construct_UFunction_AOffenseGameModeBase_GameStart, "GameStart" }, // 1163959797
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOffenseGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameModes/OffenseGameModeBase.h" },
		{ "ModuleRelativePath", "GameModes/OffenseGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOffenseGameModeBase_Statics::NewProp_StartDelay_MetaData[] = {
		{ "Category", "Game Loop" },
		{ "ModuleRelativePath", "GameModes/OffenseGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOffenseGameModeBase_Statics::NewProp_StartDelay = { "StartDelay", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOffenseGameModeBase, StartDelay), METADATA_PARAMS(Z_Construct_UClass_AOffenseGameModeBase_Statics::NewProp_StartDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOffenseGameModeBase_Statics::NewProp_StartDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOffenseGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOffenseGameModeBase_Statics::NewProp_StartDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOffenseGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOffenseGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOffenseGameModeBase_Statics::ClassParams = {
		&AOffenseGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOffenseGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AOffenseGameModeBase_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AOffenseGameModeBase, 2261554353);
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
