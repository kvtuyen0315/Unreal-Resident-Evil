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
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isFalling_MetaData[] = {
				{ "Category", "Is Falling" },
				{ "ModuleRelativePath", "HunkAnimation/HunkAnimInstance.h" },
			};
#endif
			auto NewProp__isFalling_SetBit = [](void* Obj){ ((UHunkAnimInstance*)Obj)->_isFalling = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isFalling = { UE4CodeGen_Private::EPropertyClass::Bool, "_isFalling", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHunkAnimInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp__isFalling_SetBit)>::SetBit, METADATA_PARAMS(NewProp__isFalling_MetaData, ARRAY_COUNT(NewProp__isFalling_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isCrouch_MetaData[] = {
				{ "Category", "Is Crouch" },
				{ "ModuleRelativePath", "HunkAnimation/HunkAnimInstance.h" },
			};
#endif
			auto NewProp__isCrouch_SetBit = [](void* Obj){ ((UHunkAnimInstance*)Obj)->_isCrouch = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isCrouch = { UE4CodeGen_Private::EPropertyClass::Bool, "_isCrouch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHunkAnimInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp__isCrouch_SetBit)>::SetBit, METADATA_PARAMS(NewProp__isCrouch_MetaData, ARRAY_COUNT(NewProp__isCrouch_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isSprint_MetaData[] = {
				{ "Category", "Is Sprint" },
				{ "ModuleRelativePath", "HunkAnimation/HunkAnimInstance.h" },
				{ "ToolTip", "Bool." },
			};
#endif
			auto NewProp__isSprint_SetBit = [](void* Obj){ ((UHunkAnimInstance*)Obj)->_isSprint = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isSprint = { UE4CodeGen_Private::EPropertyClass::Bool, "_isSprint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHunkAnimInstance), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp__isSprint_SetBit)>::SetBit, METADATA_PARAMS(NewProp__isSprint_MetaData, ARRAY_COUNT(NewProp__isSprint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp__direction_MetaData[] = {
				{ "Category", "Direction" },
				{ "ModuleRelativePath", "HunkAnimation/HunkAnimInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp__direction = { UE4CodeGen_Private::EPropertyClass::Float, "_direction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020015, 1, nullptr, STRUCT_OFFSET(UHunkAnimInstance, _direction), METADATA_PARAMS(NewProp__direction_MetaData, ARRAY_COUNT(NewProp__direction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp__speed_MetaData[] = {
				{ "Category", "Speed" },
				{ "ModuleRelativePath", "HunkAnimation/HunkAnimInstance.h" },
				{ "ToolTip", "Float." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp__speed = { UE4CodeGen_Private::EPropertyClass::Float, "_speed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020015, 1, nullptr, STRUCT_OFFSET(UHunkAnimInstance, _speed), METADATA_PARAMS(NewProp__speed_MetaData, ARRAY_COUNT(NewProp__speed_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp__isFalling,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp__isCrouch,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp__isSprint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp__direction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp__speed,
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
	IMPLEMENT_CLASS(UHunkAnimInstance, 2732555568);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHunkAnimInstance(Z_Construct_UClass_UHunkAnimInstance, &UHunkAnimInstance::StaticClass, TEXT("/Script/ResidentEvil"), TEXT("UHunkAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHunkAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif