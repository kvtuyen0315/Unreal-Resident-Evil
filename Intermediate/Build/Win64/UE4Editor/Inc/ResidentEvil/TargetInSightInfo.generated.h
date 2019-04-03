// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef RESIDENTEVIL_TargetInSightInfo_generated_h
#error "TargetInSightInfo.generated.h already included, missing '#pragma once' in TargetInSightInfo.h"
#endif
#define RESIDENTEVIL_TargetInSightInfo_generated_h

#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetInSightInfo_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execShouldChaseTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldChaseTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShouldChaseTarget) \
	{ \
		P_GET_UBOOL(Z_Param_Flag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShouldChaseTarget(Z_Param_Flag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastKnownLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetLastKnownLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLastKnowLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLastKnowLocation(Z_Param_Out_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsTargetInSight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsTargetInSight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsTargetInSight) \
	{ \
		P_GET_UBOOL(Z_Param_Flag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsTargetInSight(Z_Param_Flag); \
		P_NATIVE_END; \
	}


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetInSightInfo_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execShouldChaseTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldChaseTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShouldChaseTarget) \
	{ \
		P_GET_UBOOL(Z_Param_Flag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShouldChaseTarget(Z_Param_Flag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastKnownLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetLastKnownLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLastKnowLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLastKnowLocation(Z_Param_Out_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsTargetInSight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsTargetInSight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsTargetInSight) \
	{ \
		P_GET_UBOOL(Z_Param_Flag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsTargetInSight(Z_Param_Flag); \
		P_NATIVE_END; \
	}


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetInSightInfo_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTargetInSightInfo(); \
	friend RESIDENTEVIL_API class UClass* Z_Construct_UClass_UTargetInSightInfo(); \
public: \
	DECLARE_CLASS(UTargetInSightInfo, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ResidentEvil"), NO_API) \
	DECLARE_SERIALIZER(UTargetInSightInfo) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetInSightInfo_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUTargetInSightInfo(); \
	friend RESIDENTEVIL_API class UClass* Z_Construct_UClass_UTargetInSightInfo(); \
public: \
	DECLARE_CLASS(UTargetInSightInfo, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ResidentEvil"), NO_API) \
	DECLARE_SERIALIZER(UTargetInSightInfo) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetInSightInfo_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTargetInSightInfo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTargetInSightInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTargetInSightInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetInSightInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTargetInSightInfo(UTargetInSightInfo&&); \
	NO_API UTargetInSightInfo(const UTargetInSightInfo&); \
public:


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetInSightInfo_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTargetInSightInfo(UTargetInSightInfo&&); \
	NO_API UTargetInSightInfo(const UTargetInSightInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTargetInSightInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetInSightInfo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTargetInSightInfo)


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetInSightInfo_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsTargetInSight() { return STRUCT_OFFSET(UTargetInSightInfo, bIsTargetInSight); } \
	FORCEINLINE static uint32 __PPO__LastKnowLocation() { return STRUCT_OFFSET(UTargetInSightInfo, LastKnowLocation); } \
	FORCEINLINE static uint32 __PPO__bShouldChaseTarget() { return STRUCT_OFFSET(UTargetInSightInfo, bShouldChaseTarget); }


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetInSightInfo_h_12_PROLOG
#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetInSightInfo_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetInSightInfo_h_15_PRIVATE_PROPERTY_OFFSET \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetInSightInfo_h_15_RPC_WRAPPERS \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetInSightInfo_h_15_INCLASS \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetInSightInfo_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetInSightInfo_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetInSightInfo_h_15_PRIVATE_PROPERTY_OFFSET \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetInSightInfo_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetInSightInfo_h_15_INCLASS_NO_PURE_DECLS \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetInSightInfo_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetInSightInfo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
