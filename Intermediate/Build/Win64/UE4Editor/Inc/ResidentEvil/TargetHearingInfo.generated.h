// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef RESIDENTEVIL_TargetHearingInfo_generated_h
#error "TargetHearingInfo.generated.h already included, missing '#pragma once' in TargetHearingInfo.h"
#endif
#define RESIDENTEVIL_TargetHearingInfo_generated_h

#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetHearingInfo_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTimeHeardSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTimeHeardSound(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTimeHeardSound) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Timestamp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTimeHeardSound(Z_Param_Timestamp); \
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
	DECLARE_FUNCTION(execIsHearingTargetSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsHearingTargetSound(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsHearingTargetSound) \
	{ \
		P_GET_UBOOL(Z_Param_Flag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsHearingTargetSound(Z_Param_Flag); \
		P_NATIVE_END; \
	}


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetHearingInfo_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTimeHeardSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTimeHeardSound(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTimeHeardSound) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Timestamp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTimeHeardSound(Z_Param_Timestamp); \
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
	DECLARE_FUNCTION(execIsHearingTargetSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsHearingTargetSound(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsHearingTargetSound) \
	{ \
		P_GET_UBOOL(Z_Param_Flag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsHearingTargetSound(Z_Param_Flag); \
		P_NATIVE_END; \
	}


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetHearingInfo_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTargetHearingInfo(); \
	friend RESIDENTEVIL_API class UClass* Z_Construct_UClass_UTargetHearingInfo(); \
public: \
	DECLARE_CLASS(UTargetHearingInfo, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ResidentEvil"), NO_API) \
	DECLARE_SERIALIZER(UTargetHearingInfo) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetHearingInfo_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUTargetHearingInfo(); \
	friend RESIDENTEVIL_API class UClass* Z_Construct_UClass_UTargetHearingInfo(); \
public: \
	DECLARE_CLASS(UTargetHearingInfo, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ResidentEvil"), NO_API) \
	DECLARE_SERIALIZER(UTargetHearingInfo) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetHearingInfo_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTargetHearingInfo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTargetHearingInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTargetHearingInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetHearingInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTargetHearingInfo(UTargetHearingInfo&&); \
	NO_API UTargetHearingInfo(const UTargetHearingInfo&); \
public:


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetHearingInfo_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTargetHearingInfo(UTargetHearingInfo&&); \
	NO_API UTargetHearingInfo(const UTargetHearingInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTargetHearingInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetHearingInfo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTargetHearingInfo)


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetHearingInfo_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsHearingTargetSound() { return STRUCT_OFFSET(UTargetHearingInfo, bIsHearingTargetSound); } \
	FORCEINLINE static uint32 __PPO__LastKnowLocation() { return STRUCT_OFFSET(UTargetHearingInfo, LastKnowLocation); } \
	FORCEINLINE static uint32 __PPO__TimeHeardSound() { return STRUCT_OFFSET(UTargetHearingInfo, TimeHeardSound); }


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetHearingInfo_h_12_PROLOG
#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetHearingInfo_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetHearingInfo_h_15_PRIVATE_PROPERTY_OFFSET \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetHearingInfo_h_15_RPC_WRAPPERS \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetHearingInfo_h_15_INCLASS \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetHearingInfo_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetHearingInfo_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetHearingInfo_h_15_PRIVATE_PROPERTY_OFFSET \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetHearingInfo_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetHearingInfo_h_15_INCLASS_NO_PURE_DECLS \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetHearingInfo_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_TargetHearingInfo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
