// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Character/Hero/Hunk.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHunk() {}
// Cross Module References
	RESIDENTEVIL_API UClass* Z_Construct_UClass_AHunk_NoRegister();
	RESIDENTEVIL_API UClass* Z_Construct_UClass_AHunk();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ResidentEvil();
// End Cross Module References
	void AHunk::StaticRegisterNativesAHunk()
	{
	}
	UClass* Z_Construct_UClass_AHunk_NoRegister()
	{
		return AHunk::StaticClass();
	}
	UClass* Z_Construct_UClass_AHunk()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvil,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "Character/Hero/Hunk.h" },
				{ "ModuleRelativePath", "Character/Hero/Hunk.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AHunk>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AHunk::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(AHunk, 3549029109);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHunk(Z_Construct_UClass_AHunk, &AHunk::StaticClass, TEXT("/Script/ResidentEvil"), TEXT("AHunk"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHunk);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
