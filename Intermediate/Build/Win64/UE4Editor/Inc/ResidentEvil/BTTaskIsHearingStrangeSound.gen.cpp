// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Character/Enemy/BTTaskIsHearingStrangeSound.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTaskIsHearingStrangeSound() {}
// Cross Module References
	RESIDENTEVIL_API UClass* Z_Construct_UClass_UBTTaskIsHearingStrangeSound_NoRegister();
	RESIDENTEVIL_API UClass* Z_Construct_UClass_UBTTaskIsHearingStrangeSound();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_ResidentEvil();
// End Cross Module References
	void UBTTaskIsHearingStrangeSound::StaticRegisterNativesUBTTaskIsHearingStrangeSound()
	{
	}
	UClass* Z_Construct_UClass_UBTTaskIsHearingStrangeSound_NoRegister()
	{
		return UBTTaskIsHearingStrangeSound::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTTaskIsHearingStrangeSound()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
				(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvil,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Character/Enemy/BTTaskIsHearingStrangeSound.h" },
				{ "ModuleRelativePath", "Character/Enemy/BTTaskIsHearingStrangeSound.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTTaskIsHearingStrangeSound>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTTaskIsHearingStrangeSound::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UBTTaskIsHearingStrangeSound, 1869828376);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTaskIsHearingStrangeSound(Z_Construct_UClass_UBTTaskIsHearingStrangeSound, &UBTTaskIsHearingStrangeSound::StaticClass, TEXT("/Script/ResidentEvil"), TEXT("UBTTaskIsHearingStrangeSound"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTaskIsHearingStrangeSound);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
