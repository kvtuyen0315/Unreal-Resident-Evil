// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RESIDENTEVIL_HunkAnimInstance_generated_h
#error "HunkAnimInstance.generated.h already included, missing '#pragma once' in HunkAnimInstance.h"
#endif
#define RESIDENTEVIL_HunkAnimInstance_generated_h

#define ResidentEvil_Source_ResidentEvil_HunkAnimation_HunkAnimInstance_h_15_RPC_WRAPPERS
#define ResidentEvil_Source_ResidentEvil_HunkAnimation_HunkAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ResidentEvil_Source_ResidentEvil_HunkAnimation_HunkAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHunkAnimInstance(); \
	friend RESIDENTEVIL_API class UClass* Z_Construct_UClass_UHunkAnimInstance(); \
public: \
	DECLARE_CLASS(UHunkAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/ResidentEvil"), NO_API) \
	DECLARE_SERIALIZER(UHunkAnimInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ResidentEvil_Source_ResidentEvil_HunkAnimation_HunkAnimInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUHunkAnimInstance(); \
	friend RESIDENTEVIL_API class UClass* Z_Construct_UClass_UHunkAnimInstance(); \
public: \
	DECLARE_CLASS(UHunkAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/ResidentEvil"), NO_API) \
	DECLARE_SERIALIZER(UHunkAnimInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ResidentEvil_Source_ResidentEvil_HunkAnimation_HunkAnimInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHunkAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHunkAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHunkAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHunkAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHunkAnimInstance(UHunkAnimInstance&&); \
	NO_API UHunkAnimInstance(const UHunkAnimInstance&); \
public:


#define ResidentEvil_Source_ResidentEvil_HunkAnimation_HunkAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHunkAnimInstance(UHunkAnimInstance&&); \
	NO_API UHunkAnimInstance(const UHunkAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHunkAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHunkAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHunkAnimInstance)


#define ResidentEvil_Source_ResidentEvil_HunkAnimation_HunkAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___speed() { return STRUCT_OFFSET(UHunkAnimInstance, _speed); } \
	FORCEINLINE static uint32 __PPO___direction() { return STRUCT_OFFSET(UHunkAnimInstance, _direction); } \
	FORCEINLINE static uint32 __PPO___isSprint() { return STRUCT_OFFSET(UHunkAnimInstance, _isSprint); } \
	FORCEINLINE static uint32 __PPO___isCrouch() { return STRUCT_OFFSET(UHunkAnimInstance, _isCrouch); } \
	FORCEINLINE static uint32 __PPO___isFalling() { return STRUCT_OFFSET(UHunkAnimInstance, _isFalling); }


#define ResidentEvil_Source_ResidentEvil_HunkAnimation_HunkAnimInstance_h_12_PROLOG
#define ResidentEvil_Source_ResidentEvil_HunkAnimation_HunkAnimInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ResidentEvil_Source_ResidentEvil_HunkAnimation_HunkAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	ResidentEvil_Source_ResidentEvil_HunkAnimation_HunkAnimInstance_h_15_RPC_WRAPPERS \
	ResidentEvil_Source_ResidentEvil_HunkAnimation_HunkAnimInstance_h_15_INCLASS \
	ResidentEvil_Source_ResidentEvil_HunkAnimation_HunkAnimInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ResidentEvil_Source_ResidentEvil_HunkAnimation_HunkAnimInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ResidentEvil_Source_ResidentEvil_HunkAnimation_HunkAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	ResidentEvil_Source_ResidentEvil_HunkAnimation_HunkAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ResidentEvil_Source_ResidentEvil_HunkAnimation_HunkAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
	ResidentEvil_Source_ResidentEvil_HunkAnimation_HunkAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ResidentEvil_Source_ResidentEvil_HunkAnimation_HunkAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS