// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOWEROFFENSE_PawnBase_generated_h
#error "PawnBase.generated.h already included, missing '#pragma once' in PawnBase.h"
#endif
#define TOWEROFFENSE_PawnBase_generated_h

#define TowerOffense_Source_TowerOffense_Pawns_PawnBase_h_15_SPARSE_DATA
#define TowerOffense_Source_TowerOffense_Pawns_PawnBase_h_15_RPC_WRAPPERS
#define TowerOffense_Source_TowerOffense_Pawns_PawnBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define TowerOffense_Source_TowerOffense_Pawns_PawnBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPawnBase(); \
	friend struct Z_Construct_UClass_APawnBase_Statics; \
public: \
	DECLARE_CLASS(APawnBase, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerOffense"), NO_API) \
	DECLARE_SERIALIZER(APawnBase)


#define TowerOffense_Source_TowerOffense_Pawns_PawnBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPawnBase(); \
	friend struct Z_Construct_UClass_APawnBase_Statics; \
public: \
	DECLARE_CLASS(APawnBase, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerOffense"), NO_API) \
	DECLARE_SERIALIZER(APawnBase)


#define TowerOffense_Source_TowerOffense_Pawns_PawnBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APawnBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APawnBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APawnBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APawnBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APawnBase(APawnBase&&); \
	NO_API APawnBase(const APawnBase&); \
public:


#define TowerOffense_Source_TowerOffense_Pawns_PawnBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APawnBase(APawnBase&&); \
	NO_API APawnBase(const APawnBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APawnBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APawnBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APawnBase)


#define TowerOffense_Source_TowerOffense_Pawns_PawnBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoxComp() { return STRUCT_OFFSET(APawnBase, BoxComp); } \
	FORCEINLINE static uint32 __PPO__BaseMesh() { return STRUCT_OFFSET(APawnBase, BaseMesh); } \
	FORCEINLINE static uint32 __PPO__TracksMesh() { return STRUCT_OFFSET(APawnBase, TracksMesh); } \
	FORCEINLINE static uint32 __PPO__WheelsMesh() { return STRUCT_OFFSET(APawnBase, WheelsMesh); } \
	FORCEINLINE static uint32 __PPO__TurretMesh() { return STRUCT_OFFSET(APawnBase, TurretMesh); } \
	FORCEINLINE static uint32 __PPO__GunMesh() { return STRUCT_OFFSET(APawnBase, GunMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileSpawnPoint() { return STRUCT_OFFSET(APawnBase, ProjectileSpawnPoint); } \
	FORCEINLINE static uint32 __PPO__ProjectileClass() { return STRUCT_OFFSET(APawnBase, ProjectileClass); }


#define TowerOffense_Source_TowerOffense_Pawns_PawnBase_h_12_PROLOG
#define TowerOffense_Source_TowerOffense_Pawns_PawnBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerOffense_Source_TowerOffense_Pawns_PawnBase_h_15_PRIVATE_PROPERTY_OFFSET \
	TowerOffense_Source_TowerOffense_Pawns_PawnBase_h_15_SPARSE_DATA \
	TowerOffense_Source_TowerOffense_Pawns_PawnBase_h_15_RPC_WRAPPERS \
	TowerOffense_Source_TowerOffense_Pawns_PawnBase_h_15_INCLASS \
	TowerOffense_Source_TowerOffense_Pawns_PawnBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TowerOffense_Source_TowerOffense_Pawns_PawnBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerOffense_Source_TowerOffense_Pawns_PawnBase_h_15_PRIVATE_PROPERTY_OFFSET \
	TowerOffense_Source_TowerOffense_Pawns_PawnBase_h_15_SPARSE_DATA \
	TowerOffense_Source_TowerOffense_Pawns_PawnBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TowerOffense_Source_TowerOffense_Pawns_PawnBase_h_15_INCLASS_NO_PURE_DECLS \
	TowerOffense_Source_TowerOffense_Pawns_PawnBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWEROFFENSE_API UClass* StaticClass<class APawnBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TowerOffense_Source_TowerOffense_Pawns_PawnBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
