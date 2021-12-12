// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOWEROFFENSE_PawnCamera_generated_h
#error "PawnCamera.generated.h already included, missing '#pragma once' in PawnCamera.h"
#endif
#define TOWEROFFENSE_PawnCamera_generated_h

#define TowerOffense_Source_TowerOffense_Pawns_PawnCamera_h_12_SPARSE_DATA
#define TowerOffense_Source_TowerOffense_Pawns_PawnCamera_h_12_RPC_WRAPPERS
#define TowerOffense_Source_TowerOffense_Pawns_PawnCamera_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TowerOffense_Source_TowerOffense_Pawns_PawnCamera_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPawnCamera(); \
	friend struct Z_Construct_UClass_APawnCamera_Statics; \
public: \
	DECLARE_CLASS(APawnCamera, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerOffense"), NO_API) \
	DECLARE_SERIALIZER(APawnCamera)


#define TowerOffense_Source_TowerOffense_Pawns_PawnCamera_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPawnCamera(); \
	friend struct Z_Construct_UClass_APawnCamera_Statics; \
public: \
	DECLARE_CLASS(APawnCamera, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerOffense"), NO_API) \
	DECLARE_SERIALIZER(APawnCamera)


#define TowerOffense_Source_TowerOffense_Pawns_PawnCamera_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APawnCamera(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APawnCamera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APawnCamera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APawnCamera); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APawnCamera(APawnCamera&&); \
	NO_API APawnCamera(const APawnCamera&); \
public:


#define TowerOffense_Source_TowerOffense_Pawns_PawnCamera_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APawnCamera(APawnCamera&&); \
	NO_API APawnCamera(const APawnCamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APawnCamera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APawnCamera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APawnCamera)


#define TowerOffense_Source_TowerOffense_Pawns_PawnCamera_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArmComp() { return STRUCT_OFFSET(APawnCamera, SpringArmComp); } \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(APawnCamera, CameraComp); } \
	FORCEINLINE static uint32 __PPO__StaticMeshComp() { return STRUCT_OFFSET(APawnCamera, StaticMeshComp); }


#define TowerOffense_Source_TowerOffense_Pawns_PawnCamera_h_9_PROLOG
#define TowerOffense_Source_TowerOffense_Pawns_PawnCamera_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerOffense_Source_TowerOffense_Pawns_PawnCamera_h_12_PRIVATE_PROPERTY_OFFSET \
	TowerOffense_Source_TowerOffense_Pawns_PawnCamera_h_12_SPARSE_DATA \
	TowerOffense_Source_TowerOffense_Pawns_PawnCamera_h_12_RPC_WRAPPERS \
	TowerOffense_Source_TowerOffense_Pawns_PawnCamera_h_12_INCLASS \
	TowerOffense_Source_TowerOffense_Pawns_PawnCamera_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TowerOffense_Source_TowerOffense_Pawns_PawnCamera_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerOffense_Source_TowerOffense_Pawns_PawnCamera_h_12_PRIVATE_PROPERTY_OFFSET \
	TowerOffense_Source_TowerOffense_Pawns_PawnCamera_h_12_SPARSE_DATA \
	TowerOffense_Source_TowerOffense_Pawns_PawnCamera_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TowerOffense_Source_TowerOffense_Pawns_PawnCamera_h_12_INCLASS_NO_PURE_DECLS \
	TowerOffense_Source_TowerOffense_Pawns_PawnCamera_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWEROFFENSE_API UClass* StaticClass<class APawnCamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TowerOffense_Source_TowerOffense_Pawns_PawnCamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
