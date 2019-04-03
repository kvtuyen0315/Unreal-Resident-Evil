// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RESIDENTEVIL_EnemyBase_generated_h
#error "EnemyBase.generated.h already included, missing '#pragma once' in EnemyBase.h"
#endif
#define RESIDENTEVIL_EnemyBase_generated_h

#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyBase_h_13_RPC_WRAPPERS
#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyBase(); \
	friend RESIDENTEVIL_API class UClass* Z_Construct_UClass_AEnemyBase(); \
public: \
	DECLARE_CLASS(AEnemyBase, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ResidentEvil"), NO_API) \
	DECLARE_SERIALIZER(AEnemyBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyBase(); \
	friend RESIDENTEVIL_API class UClass* Z_Construct_UClass_AEnemyBase(); \
public: \
	DECLARE_CLASS(AEnemyBase, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ResidentEvil"), NO_API) \
	DECLARE_SERIALIZER(AEnemyBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyBase(AEnemyBase&&); \
	NO_API AEnemyBase(const AEnemyBase&); \
public:


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyBase(AEnemyBase&&); \
	NO_API AEnemyBase(const AEnemyBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyBase)


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyBase_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AIBehaviorTree() { return STRUCT_OFFSET(AEnemyBase, AIBehaviorTree); } \
	FORCEINLINE static uint32 __PPO__AIPereptionComp() { return STRUCT_OFFSET(AEnemyBase, AIPereptionComp); } \
	FORCEINLINE static uint32 __PPO__AISightConfig() { return STRUCT_OFFSET(AEnemyBase, AISightConfig); } \
	FORCEINLINE static uint32 __PPO__AIHearingConfig() { return STRUCT_OFFSET(AEnemyBase, AIHearingConfig); } \
	FORCEINLINE static uint32 __PPO__TargetInSightInfo() { return STRUCT_OFFSET(AEnemyBase, TargetInSightInfo); } \
	FORCEINLINE static uint32 __PPO__TargetHearingInfo() { return STRUCT_OFFSET(AEnemyBase, TargetHearingInfo); } \
	FORCEINLINE static uint32 __PPO__TimeFollowLastSound() { return STRUCT_OFFSET(AEnemyBase, TimeFollowLastSound); } \
	FORCEINLINE static uint32 __PPO__AttackRange() { return STRUCT_OFFSET(AEnemyBase, AttackRange); } \
	FORCEINLINE static uint32 __PPO__AnimInstance() { return STRUCT_OFFSET(AEnemyBase, AnimInstance); }


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyBase_h_10_PROLOG
#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyBase_h_13_PRIVATE_PROPERTY_OFFSET \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyBase_h_13_RPC_WRAPPERS \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyBase_h_13_INCLASS \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyBase_h_13_PRIVATE_PROPERTY_OFFSET \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyBase_h_13_INCLASS_NO_PURE_DECLS \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
