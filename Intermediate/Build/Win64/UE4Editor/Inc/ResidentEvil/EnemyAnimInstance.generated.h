// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RESIDENTEVIL_EnemyAnimInstance_generated_h
#error "EnemyAnimInstance.generated.h already included, missing '#pragma once' in EnemyAnimInstance.h"
#endif
#define RESIDENTEVIL_EnemyAnimInstance_generated_h

#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyAnimInstance_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDirection) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDirection(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSpeed(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyAnimInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDirection) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDirection(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSpeed(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyAnimInstance_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnemyAnimInstance(); \
	friend RESIDENTEVIL_API class UClass* Z_Construct_UClass_UEnemyAnimInstance(); \
public: \
	DECLARE_CLASS(UEnemyAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/ResidentEvil"), NO_API) \
	DECLARE_SERIALIZER(UEnemyAnimInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyAnimInstance_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUEnemyAnimInstance(); \
	friend RESIDENTEVIL_API class UClass* Z_Construct_UClass_UEnemyAnimInstance(); \
public: \
	DECLARE_CLASS(UEnemyAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/ResidentEvil"), NO_API) \
	DECLARE_SERIALIZER(UEnemyAnimInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyAnimInstance_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnemyAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnemyAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnemyAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemyAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnemyAnimInstance(UEnemyAnimInstance&&); \
	NO_API UEnemyAnimInstance(const UEnemyAnimInstance&); \
public:


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyAnimInstance_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnemyAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnemyAnimInstance(UEnemyAnimInstance&&); \
	NO_API UEnemyAnimInstance(const UEnemyAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnemyAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemyAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnemyAnimInstance)


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyAnimInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(UEnemyAnimInstance, Speed); } \
	FORCEINLINE static uint32 __PPO__Direction() { return STRUCT_OFFSET(UEnemyAnimInstance, Direction); }


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyAnimInstance_h_14_PROLOG
#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyAnimInstance_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyAnimInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyAnimInstance_h_17_RPC_WRAPPERS \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyAnimInstance_h_17_INCLASS \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyAnimInstance_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyAnimInstance_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyAnimInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyAnimInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyAnimInstance_h_17_INCLASS_NO_PURE_DECLS \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyAnimInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_EnemyAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
