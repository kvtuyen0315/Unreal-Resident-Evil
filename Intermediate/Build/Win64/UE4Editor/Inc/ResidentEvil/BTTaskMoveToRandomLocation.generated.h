// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
struct FHitResult;
#ifdef RESIDENTEVIL_BTTaskMoveToRandomLocation_generated_h
#error "BTTaskMoveToRandomLocation.generated.h already included, missing '#pragma once' in BTTaskMoveToRandomLocation.h"
#endif
#define RESIDENTEVIL_BTTaskMoveToRandomLocation_generated_h

#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTTaskMoveToRandomLocation_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_SelfActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_SelfActor,Z_Param_OtherActor,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTTaskMoveToRandomLocation_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_SelfActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_SelfActor,Z_Param_OtherActor,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTTaskMoveToRandomLocation_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTTaskMoveToRandomLocation(); \
	friend RESIDENTEVIL_API class UClass* Z_Construct_UClass_UBTTaskMoveToRandomLocation(); \
public: \
	DECLARE_CLASS(UBTTaskMoveToRandomLocation, UBTTask_BlackboardBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ResidentEvil"), NO_API) \
	DECLARE_SERIALIZER(UBTTaskMoveToRandomLocation) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTTaskMoveToRandomLocation_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUBTTaskMoveToRandomLocation(); \
	friend RESIDENTEVIL_API class UClass* Z_Construct_UClass_UBTTaskMoveToRandomLocation(); \
public: \
	DECLARE_CLASS(UBTTaskMoveToRandomLocation, UBTTask_BlackboardBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ResidentEvil"), NO_API) \
	DECLARE_SERIALIZER(UBTTaskMoveToRandomLocation) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTTaskMoveToRandomLocation_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTTaskMoveToRandomLocation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTaskMoveToRandomLocation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTTaskMoveToRandomLocation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTaskMoveToRandomLocation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTTaskMoveToRandomLocation(UBTTaskMoveToRandomLocation&&); \
	NO_API UBTTaskMoveToRandomLocation(const UBTTaskMoveToRandomLocation&); \
public:


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTTaskMoveToRandomLocation_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTTaskMoveToRandomLocation(UBTTaskMoveToRandomLocation&&); \
	NO_API UBTTaskMoveToRandomLocation(const UBTTaskMoveToRandomLocation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTTaskMoveToRandomLocation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTaskMoveToRandomLocation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTaskMoveToRandomLocation)


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTTaskMoveToRandomLocation_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Actor() { return STRUCT_OFFSET(UBTTaskMoveToRandomLocation, Actor); } \
	FORCEINLINE static uint32 __PPO__DesinationLocation() { return STRUCT_OFFSET(UBTTaskMoveToRandomLocation, DesinationLocation); } \
	FORCEINLINE static uint32 __PPO__bFailAtNextTick() { return STRUCT_OFFSET(UBTTaskMoveToRandomLocation, bFailAtNextTick); }


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTTaskMoveToRandomLocation_h_12_PROLOG
#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTTaskMoveToRandomLocation_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTTaskMoveToRandomLocation_h_15_PRIVATE_PROPERTY_OFFSET \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTTaskMoveToRandomLocation_h_15_RPC_WRAPPERS \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTTaskMoveToRandomLocation_h_15_INCLASS \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTTaskMoveToRandomLocation_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTTaskMoveToRandomLocation_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTTaskMoveToRandomLocation_h_15_PRIVATE_PROPERTY_OFFSET \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTTaskMoveToRandomLocation_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTTaskMoveToRandomLocation_h_15_INCLASS_NO_PURE_DECLS \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTTaskMoveToRandomLocation_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTTaskMoveToRandomLocation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
