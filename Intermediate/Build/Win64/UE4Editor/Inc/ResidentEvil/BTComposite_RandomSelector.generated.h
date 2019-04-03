// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RESIDENTEVIL_BTComposite_RandomSelector_generated_h
#error "BTComposite_RandomSelector.generated.h already included, missing '#pragma once' in BTComposite_RandomSelector.h"
#endif
#define RESIDENTEVIL_BTComposite_RandomSelector_generated_h

#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTComposite_RandomSelector_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRandomNextChildIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->RandomNextChildIndex(); \
		P_NATIVE_END; \
	}


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTComposite_RandomSelector_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRandomNextChildIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->RandomNextChildIndex(); \
		P_NATIVE_END; \
	}


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTComposite_RandomSelector_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTComposite_RandomSelector(); \
	friend RESIDENTEVIL_API class UClass* Z_Construct_UClass_UBTComposite_RandomSelector(); \
public: \
	DECLARE_CLASS(UBTComposite_RandomSelector, UBTCompositeNode, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ResidentEvil"), NO_API) \
	DECLARE_SERIALIZER(UBTComposite_RandomSelector) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTComposite_RandomSelector_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUBTComposite_RandomSelector(); \
	friend RESIDENTEVIL_API class UClass* Z_Construct_UClass_UBTComposite_RandomSelector(); \
public: \
	DECLARE_CLASS(UBTComposite_RandomSelector, UBTCompositeNode, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ResidentEvil"), NO_API) \
	DECLARE_SERIALIZER(UBTComposite_RandomSelector) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTComposite_RandomSelector_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTComposite_RandomSelector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTComposite_RandomSelector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTComposite_RandomSelector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTComposite_RandomSelector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTComposite_RandomSelector(UBTComposite_RandomSelector&&); \
	NO_API UBTComposite_RandomSelector(const UBTComposite_RandomSelector&); \
public:


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTComposite_RandomSelector_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTComposite_RandomSelector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTComposite_RandomSelector(UBTComposite_RandomSelector&&); \
	NO_API UBTComposite_RandomSelector(const UBTComposite_RandomSelector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTComposite_RandomSelector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTComposite_RandomSelector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTComposite_RandomSelector)


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTComposite_RandomSelector_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsInitialArrayChildIndex() { return STRUCT_OFFSET(UBTComposite_RandomSelector, bIsInitialArrayChildIndex); } \
	FORCEINLINE static uint32 __PPO__NextChildIdx() { return STRUCT_OFFSET(UBTComposite_RandomSelector, NextChildIdx); } \
	FORCEINLINE static uint32 __PPO__MapChildChanceTemp() { return STRUCT_OFFSET(UBTComposite_RandomSelector, MapChildChanceTemp); }


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTComposite_RandomSelector_h_12_PROLOG
#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTComposite_RandomSelector_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTComposite_RandomSelector_h_15_PRIVATE_PROPERTY_OFFSET \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTComposite_RandomSelector_h_15_RPC_WRAPPERS \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTComposite_RandomSelector_h_15_INCLASS \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTComposite_RandomSelector_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTComposite_RandomSelector_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTComposite_RandomSelector_h_15_PRIVATE_PROPERTY_OFFSET \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTComposite_RandomSelector_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTComposite_RandomSelector_h_15_INCLASS_NO_PURE_DECLS \
	Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTComposite_RandomSelector_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BTComposite_RandomSelector."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Unreal_Resident_Evil_Source_ResidentEvil_Character_Enemy_BTComposite_RandomSelector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
