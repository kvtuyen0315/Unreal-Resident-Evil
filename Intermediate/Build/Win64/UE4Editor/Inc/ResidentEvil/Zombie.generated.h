// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAIStimulus;
#ifdef RESIDENTEVIL_Zombie_generated_h
#error "Zombie.generated.h already included, missing '#pragma once' in Zombie.h"
#endif
#define RESIDENTEVIL_Zombie_generated_h

#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_Zombie_Zombie_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnUpdatedSenseActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_UpdatedActor); \
		P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnUpdatedSenseActor(Z_Param_UpdatedActor,Z_Param_Stimulus); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSenseActors) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_TestActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSenseActors(Z_Param_Out_TestActors); \
		P_NATIVE_END; \
	}


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_Zombie_Zombie_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnUpdatedSenseActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_UpdatedActor); \
		P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnUpdatedSenseActor(Z_Param_UpdatedActor,Z_Param_Stimulus); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSenseActors) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_TestActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSenseActors(Z_Param_Out_TestActors); \
		P_NATIVE_END; \
	}


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_Zombie_Zombie_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZombie(); \
	friend RESIDENTEVIL_API class UClass* Z_Construct_UClass_AZombie(); \
public: \
	DECLARE_CLASS(AZombie, AEnemyBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ResidentEvil"), NO_API) \
	DECLARE_SERIALIZER(AZombie) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_Zombie_Zombie_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAZombie(); \
	friend RESIDENTEVIL_API class UClass* Z_Construct_UClass_AZombie(); \
public: \
	DECLARE_CLASS(AZombie, AEnemyBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ResidentEvil"), NO_API) \
	DECLARE_SERIALIZER(AZombie) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_Zombie_Zombie_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AZombie(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AZombie) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombie); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombie); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombie(AZombie&&); \
	NO_API AZombie(const AZombie&); \
public:


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_Zombie_Zombie_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombie(AZombie&&); \
	NO_API AZombie(const AZombie&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombie); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombie); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AZombie)


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_Zombie_Zombie_h_19_PRIVATE_PROPERTY_OFFSET
#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_Zombie_Zombie_h_16_PROLOG
#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_Zombie_Zombie_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_Zombie_Zombie_h_19_PRIVATE_PROPERTY_OFFSET \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_Zombie_Zombie_h_19_RPC_WRAPPERS \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_Zombie_Zombie_h_19_INCLASS \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_Zombie_Zombie_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_Zombie_Zombie_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_Zombie_Zombie_h_19_PRIVATE_PROPERTY_OFFSET \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_Zombie_Zombie_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_Zombie_Zombie_h_19_INCLASS_NO_PURE_DECLS \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_Zombie_Zombie_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_Zombie_Zombie_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
