// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOWEROFFENSE_PawnTank_generated_h
#error "PawnTank.generated.h already included, missing '#pragma once' in PawnTank.h"
#endif
#define TOWEROFFENSE_PawnTank_generated_h

#define TowerOffense_Source_TowerOffense_Pawns_PawnTank_h_14_SPARSE_DATA
#define TowerOffense_Source_TowerOffense_Pawns_PawnTank_h_14_RPC_WRAPPERS
#define TowerOffense_Source_TowerOffense_Pawns_PawnTank_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define TowerOffense_Source_TowerOffense_Pawns_PawnTank_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPawnTank(); \
	friend struct Z_Construct_UClass_APawnTank_Statics; \
public: \
	DECLARE_CLASS(APawnTank, APawnBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerOffense"), NO_API) \
	DECLARE_SERIALIZER(APawnTank)


#define TowerOffense_Source_TowerOffense_Pawns_PawnTank_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPawnTank(); \
	friend struct Z_Construct_UClass_APawnTank_Statics; \
public: \
	DECLARE_CLASS(APawnTank, APawnBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerOffense"), NO_API) \
	DECLARE_SERIALIZER(APawnTank)


#define TowerOffense_Source_TowerOffense_Pawns_PawnTank_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APawnTank(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APawnTank) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APawnTank); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APawnTank); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APawnTank(APawnTank&&); \
	NO_API APawnTank(const APawnTank&); \
public:


#define TowerOffense_Source_TowerOffense_Pawns_PawnTank_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APawnTank() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APawnTank(APawnTank&&); \
	NO_API APawnTank(const APawnTank&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APawnTank); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APawnTank); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APawnTank)


#define TowerOffense_Source_TowerOffense_Pawns_PawnTank_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MoveSpeed() { return STRUCT_OFFSET(APawnTank, MoveSpeed); }


#define TowerOffense_Source_TowerOffense_Pawns_PawnTank_h_11_PROLOG
#define TowerOffense_Source_TowerOffense_Pawns_PawnTank_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerOffense_Source_TowerOffense_Pawns_PawnTank_h_14_PRIVATE_PROPERTY_OFFSET \
	TowerOffense_Source_TowerOffense_Pawns_PawnTank_h_14_SPARSE_DATA \
	TowerOffense_Source_TowerOffense_Pawns_PawnTank_h_14_RPC_WRAPPERS \
	TowerOffense_Source_TowerOffense_Pawns_PawnTank_h_14_INCLASS \
	TowerOffense_Source_TowerOffense_Pawns_PawnTank_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TowerOffense_Source_TowerOffense_Pawns_PawnTank_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerOffense_Source_TowerOffense_Pawns_PawnTank_h_14_PRIVATE_PROPERTY_OFFSET \
	TowerOffense_Source_TowerOffense_Pawns_PawnTank_h_14_SPARSE_DATA \
	TowerOffense_Source_TowerOffense_Pawns_PawnTank_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TowerOffense_Source_TowerOffense_Pawns_PawnTank_h_14_INCLASS_NO_PURE_DECLS \
	TowerOffense_Source_TowerOffense_Pawns_PawnTank_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWEROFFENSE_API UClass* StaticClass<class APawnTank>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TowerOffense_Source_TowerOffense_Pawns_PawnTank_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
