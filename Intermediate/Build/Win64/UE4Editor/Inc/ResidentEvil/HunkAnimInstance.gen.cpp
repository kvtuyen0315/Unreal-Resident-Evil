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
	RESIDENTEVIL_API UEnum* Z_Construct_UEnum_ResidentEvil_EWeaponts();
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
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eWeaponts_MetaData[] = {
				{ "Category", "Enum Weaponts" },
				{ "ModuleRelativePath", "HunkAnimation/HunkAnimInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eWeaponts = { UE4CodeGen_Private::EPropertyClass::Enum, "eWeaponts", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020015, 1, nullptr, STRUCT_OFFSET(UHunkAnimInstance, eWeaponts), Z_Construct_UEnum_ResidentEvil_EWeaponts, METADATA_PARAMS(NewProp_eWeaponts_MetaData, ARRAY_COUNT(NewProp_eWeaponts_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_eWeaponts_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsReload_MetaData[] = {
				{ "Category", "Is Reload" },
				{ "ModuleRelativePath", "HunkAnimation/HunkAnimInstance.h" },
			};
#endif
			auto NewProp_IsReload_SetBit = [](void* Obj){ ((UHunkAnimInstance*)Obj)->IsReload = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsReload = { UE4CodeGen_Private::EPropertyClass::Bool, "IsReload", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHunkAnimInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsReload_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsReload_MetaData, ARRAY_COUNT(NewProp_IsReload_MetaData)) };
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
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFalling_MetaData[] = {
				{ "Category", "Is Falling" },
				{ "ModuleRelativePath", "HunkAnimation/HunkAnimInstance.h" },
			};
#endif
			auto NewProp_IsFalling_SetBit = [](void* Obj){ ((UHunkAnimInstance*)Obj)->IsFalling = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFalling = { UE4CodeGen_Private::EPropertyClass::Bool, "IsFalling", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHunkAnimInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsFalling_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsFalling_MetaData, ARRAY_COUNT(NewProp_IsFalling_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSprint_MetaData[] = {
				{ "Category", "Is Sprint" },
				{ "ModuleRelativePath", "HunkAnimation/HunkAnimInstance.h" },
			};
#endif
			auto NewProp_IsSprint_SetBit = [](void* Obj){ ((UHunkAnimInstance*)Obj)->IsSprint = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSprint = { UE4CodeGen_Private::EPropertyClass::Bool, "IsSprint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHunkAnimInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsSprint_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsSprint_MetaData, ARRAY_COUNT(NewProp_IsSprint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[] = {
				{ "Category", "Pitch" },
				{ "ModuleRelativePath", "HunkAnimation/HunkAnimInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Pitch = { UE4CodeGen_Private::EPropertyClass::Float, "Pitch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020015, 1, nullptr, STRUCT_OFFSET(UHunkAnimInstance, Pitch), METADATA_PARAMS(NewProp_Pitch_MetaData, ARRAY_COUNT(NewProp_Pitch_MetaData)) };
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
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_eWeaponts,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_eWeaponts_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsReload,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsFiring,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsAim,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsFalling,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsSprint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Pitch,
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
	IMPLEMENT_CLASS(UHunkAnimInstance, 4204461340);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHunkAnimInstance(Z_Construct_UClass_UHunkAnimInstance, &UHunkAnimInstance::StaticClass, TEXT("/Script/ResidentEvil"), TEXT("UHunkAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHunkAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
