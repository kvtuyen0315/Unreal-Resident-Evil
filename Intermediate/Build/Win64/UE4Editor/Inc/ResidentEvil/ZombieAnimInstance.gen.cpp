// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Character/Enemy/Zombie/ZombieAnimInstance.h"
#include "Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieAnimInstance() {}
// Cross Module References
	RESIDENTEVIL_API UClass* Z_Construct_UClass_UZombieAnimInstance_NoRegister();
	RESIDENTEVIL_API UClass* Z_Construct_UClass_UZombieAnimInstance();
	RESIDENTEVIL_API UClass* Z_Construct_UClass_UEnemyAnimInstance();
	UPackage* Z_Construct_UPackage__Script_ResidentEvil();
// End Cross Module References
	void UZombieAnimInstance::StaticRegisterNativesUZombieAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UZombieAnimInstance_NoRegister()
	{
		return UZombieAnimInstance::StaticClass();
	}
	UClass* Z_Construct_UClass_UZombieAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UEnemyAnimInstance,
				(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvil,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "AnimInstance" },
				{ "IncludePath", "Character/Enemy/Zombie/ZombieAnimInstance.h" },
				{ "ModuleRelativePath", "Character/Enemy/Zombie/ZombieAnimInstance.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UZombieAnimInstance>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UZombieAnimInstance::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900088u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UZombieAnimInstance, 2949358293);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UZombieAnimInstance(Z_Construct_UClass_UZombieAnimInstance, &UZombieAnimInstance::StaticClass, TEXT("/Script/ResidentEvil"), TEXT("UZombieAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZombieAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
