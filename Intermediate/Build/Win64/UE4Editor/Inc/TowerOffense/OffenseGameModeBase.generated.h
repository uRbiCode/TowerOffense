// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOWEROFFENSE_OffenseGameModeBase_generated_h
#error "OffenseGameModeBase.generated.h already included, missing '#pragma once' in OffenseGameModeBase.h"
#endif
#define TOWEROFFENSE_OffenseGameModeBase_generated_h

#define TowerOffense_Source_TowerOffense_GameModes_OffenseGameModeBase_h_13_SPARSE_DATA
#define TowerOffense_Source_TowerOffense_GameModes_OffenseGameModeBase_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentEndGameTanksCount); \
	DECLARE_FUNCTION(execGetCurrentTurretsCount); \
	DECLARE_FUNCTION(execGetCurrentTanksCount); \
	DECLARE_FUNCTION(execGetInitialTurretsCount); \
	DECLARE_FUNCTION(execGetInitialTanksCount);


#define TowerOffense_Source_TowerOffense_GameModes_OffenseGameModeBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentEndGameTanksCount); \
	DECLARE_FUNCTION(execGetCurrentTurretsCount); \
	DECLARE_FUNCTION(execGetCurrentTanksCount); \
	DECLARE_FUNCTION(execGetInitialTurretsCount); \
	DECLARE_FUNCTION(execGetInitialTanksCount);


#define TowerOffense_Source_TowerOffense_GameModes_OffenseGameModeBase_h_13_EVENT_PARMS
#define TowerOffense_Source_TowerOffense_GameModes_OffenseGameModeBase_h_13_CALLBACK_WRAPPERS
#define TowerOffense_Source_TowerOffense_GameModes_OffenseGameModeBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOffenseGameModeBase(); \
	friend struct Z_Construct_UClass_AOffenseGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AOffenseGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerOffense"), NO_API) \
	DECLARE_SERIALIZER(AOffenseGameModeBase)


#define TowerOffense_Source_TowerOffense_GameModes_OffenseGameModeBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAOffenseGameModeBase(); \
	friend struct Z_Construct_UClass_AOffenseGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AOffenseGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerOffense"), NO_API) \
	DECLARE_SERIALIZER(AOffenseGameModeBase)


#define TowerOffense_Source_TowerOffense_GameModes_OffenseGameModeBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOffenseGameModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOffenseGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOffenseGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOffenseGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOffenseGameModeBase(AOffenseGameModeBase&&); \
	NO_API AOffenseGameModeBase(const AOffenseGameModeBase&); \
public:


#define TowerOffense_Source_TowerOffense_GameModes_OffenseGameModeBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOffenseGameModeBase(AOffenseGameModeBase&&); \
	NO_API AOffenseGameModeBase(const AOffenseGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOffenseGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOffenseGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOffenseGameModeBase)


#define TowerOffense_Source_TowerOffense_GameModes_OffenseGameModeBase_h_13_PRIVATE_PROPERTY_OFFSET
#define TowerOffense_Source_TowerOffense_GameModes_OffenseGameModeBase_h_10_PROLOG \
	TowerOffense_Source_TowerOffense_GameModes_OffenseGameModeBase_h_13_EVENT_PARMS


#define TowerOffense_Source_TowerOffense_GameModes_OffenseGameModeBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerOffense_Source_TowerOffense_GameModes_OffenseGameModeBase_h_13_PRIVATE_PROPERTY_OFFSET \
	TowerOffense_Source_TowerOffense_GameModes_OffenseGameModeBase_h_13_SPARSE_DATA \
	TowerOffense_Source_TowerOffense_GameModes_OffenseGameModeBase_h_13_RPC_WRAPPERS \
	TowerOffense_Source_TowerOffense_GameModes_OffenseGameModeBase_h_13_CALLBACK_WRAPPERS \
	TowerOffense_Source_TowerOffense_GameModes_OffenseGameModeBase_h_13_INCLASS \
	TowerOffense_Source_TowerOffense_GameModes_OffenseGameModeBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TowerOffense_Source_TowerOffense_GameModes_OffenseGameModeBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerOffense_Source_TowerOffense_GameModes_OffenseGameModeBase_h_13_PRIVATE_PROPERTY_OFFSET \
	TowerOffense_Source_TowerOffense_GameModes_OffenseGameModeBase_h_13_SPARSE_DATA \
	TowerOffense_Source_TowerOffense_GameModes_OffenseGameModeBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TowerOffense_Source_TowerOffense_GameModes_OffenseGameModeBase_h_13_CALLBACK_WRAPPERS \
	TowerOffense_Source_TowerOffense_GameModes_OffenseGameModeBase_h_13_INCLASS_NO_PURE_DECLS \
	TowerOffense_Source_TowerOffense_GameModes_OffenseGameModeBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWEROFFENSE_API UClass* StaticClass<class AOffenseGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TowerOffense_Source_TowerOffense_GameModes_OffenseGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
