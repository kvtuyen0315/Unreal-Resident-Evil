// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Weaponts/Shotgun/Shotgun.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShotgun() {}
// Cross Module References
	RESIDENTEVIL_API UClass* Z_Construct_UClass_AShotgun_NoRegister();
	RESIDENTEVIL_API UClass* Z_Construct_UClass_AShotgun();
	RESIDENTEVIL_API UClass* Z_Construct_UClass_AWeaponts();
	UPackage* Z_Construct_UPackage__Script_ResidentEvil();
// End Cross Module References
	void AShotgun::StaticRegisterNativesAShotgun()
	{
	}
	UClass* Z_Construct_UClass_AShotgun_NoRegister()
	{
		return AShotgun::StaticClass();
	}
	UClass* Z_Construct_UClass_AShotgun()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AWeaponts,
				(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvil,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Weaponts/Shotgun/Shotgun.h" },
				{ "ModuleRelativePath", "Weaponts/Shotgun/Shotgun.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AShotgun>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AShotgun::StaticClass,
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
	IMPLEMENT_CLASS(AShotgun, 3737323418);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShotgun(Z_Construct_UClass_AShotgun, &AShotgun::StaticClass, TEXT("/Script/ResidentEvil"), TEXT("AShotgun"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShotgun);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
