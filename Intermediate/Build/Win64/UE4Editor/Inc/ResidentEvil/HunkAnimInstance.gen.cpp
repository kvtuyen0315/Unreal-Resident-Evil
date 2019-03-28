// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "HunkAnimation/HunkAnimInstance.h"
#include "Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHunkAnimInstance() {}
// Cross Module References
	RESIDENTEVIL_API UClass* Z_Construct_UClass_UHunkAnimInstance_NoRegister();
	RESIDENTEVIL_API UClass* Z_Construct_UClass_UHunkAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_ResidentEvil();
// End Cross Module References
	void UHunkAnimInstance::StaticRegisterNativesUHunkAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UHunkAnimInstance_NoRegister()
	{
		return UHunkAnimInstance::StaticClass();
	}
	UClass* Z_Construct_UClass_UHunkAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAnimInstance,
				(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvil,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "AnimInstance" },
				{ "IncludePath", "HunkAnimation/HunkAnimInstance.h" },
				{ "ModuleRelativePath", "HunkAnimation/HunkAnimInstance.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFiring_MetaData[] = {
				{ "Category", "Is Aim" },
				{ "ModuleRelativePath", "HunkAnimation/HunkAnimInstance.h" },
			};
#endif
			auto NewProp_IsFiring_SetBit = [](void* Obj){ ((UHunkAnimInstance*)Obj)->IsFiring = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFiring = { UE4CodeGen_Private::EPropertyClass::Bool, "IsFiring", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHunkAnimInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsFiring_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsFiring_MetaData, ARRAY_COUNT(NewProp_IsFiring_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAim_MetaData[] = {
				{ "Category", "Is Aim" },
				{ "ModuleRelativePath", "HunkAnimation/HunkAnimInstance.h" },
			};
#endif
			auto NewProp_IsAim_SetBit = [](void* Obj){ ((UHunkAnimInstance*)Obj)->IsAim = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAim = { UE4CodeGen_Private::EPropertyClass::Bool, "IsAim", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHunkAnimInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsAim_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsAim_MetaData, ARRAY_COUNT(NewProp_IsAim_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsRifle_MetaData[] = {
				{ "Category", "Is Rifle" },
				{ "ModuleRelativePath", "HunkAnimation/HunkAnimInstance.h" },
			};
#endif
			auto NewProp_IsRifle_SetBit = [](void* Obj){ ((UHunkAnimInstance*)Obj)->IsRifle = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRifle = { UE4CodeGen_Private::EPropertyClass::Bool, "IsRifle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHunkAnimInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsRifle_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsRifle_MetaData, ARRAY_COUNT(NewProp_IsRifle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFalling_MetaData[] = {
				{ "Category", "Is Falling" },
				{ "ModuleRelativePath", "HunkAnimation/HunkAnimInstance.h" },
			};
#endif
			auto NewProp_IsFalling_SetBit = [](void* Obj){ ((UHunkAnimInstance*)Obj)->IsFalling = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFalling = { UE4CodeGen_Private::EPropertyClass::Bool, "IsFalling", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHunkAnimInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsFalling_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsFalling_MetaData, ARRAY_COUNT(NewProp_IsFalling_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCrouch_MetaData[] = {
				{ "Category", "Is Crouch" },
				{ "ModuleRelativePath", "HunkAnimation/HunkAnimInstance.h" },
			};
#endif
			auto NewProp_IsCrouch_SetBit = [](void* Obj){ ((UHunkAnimInstance*)Obj)->IsCrouch = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCrouch = { UE4CodeGen_Private::EPropertyClass::Bool, "IsCrouch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHunkAnimInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsCrouch_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsCrouch_MetaData, ARRAY_COUNT(NewProp_IsCrouch_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSprint_MetaData[] = {
				{ "Category", "Is Sprint" },
				{ "ModuleRelativePath", "HunkAnimation/HunkAnimInstance.h" },
			};
#endif
			auto NewProp_IsSprint_SetBit = [](void* Obj){ ((UHunkAnimInstance*)Obj)->IsSprint = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSprint = { UE4CodeGen_Private::EPropertyClass::Bool, "IsSprint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHunkAnimInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsSprint_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsSprint_MetaData, ARRAY_COUNT(NewProp_IsSprint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
				{ "Category", "Direction" },
				{ "ModuleRelativePath", "HunkAnimation/HunkAnimInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Direction = { UE4CodeGen_Private::EPropertyClass::Float, "Direction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020015, 1, nullptr, STRUCT_OFFSET(UHunkAnimInstance, Direction), METADATA_PARAMS(NewProp_Direction_MetaData, ARRAY_COUNT(NewProp_Direction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
				{ "Category", "Speed" },
				{ "ModuleRelativePath", "HunkAnimation/HunkAnimInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed = { UE4CodeGen_Private::EPropertyClass::Float, "Speed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020015, 1, nullptr, STRUCT_OFFSET(UHunkAnimInstance, Speed), METADATA_PARAMS(NewProp_Speed_MetaData, ARRAY_COUNT(NewProp_Speed_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsFiring,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsAim,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsRifle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsFalling,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsCrouch,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsSprint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Direction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Speed,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UHunkAnimInstance>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UHunkAnimInstance::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900088u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHunkAnimInstance, 4108971296);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHunkAnimInstance(Z_Construct_UClass_UHunkAnimInstance, &UHunkAnimInstance::StaticClass, TEXT("/Script/ResidentEvil"), TEXT("UHunkAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHunkAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
