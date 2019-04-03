// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Weaponts/Rifle/Assault_Rifle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssault_Rifle() {}
// Cross Module References
	RESIDENTEVIL_API UClass* Z_Construct_UClass_AAssault_Rifle_NoRegister();
	RESIDENTEVIL_API UClass* Z_Construct_UClass_AAssault_Rifle();
	RESIDENTEVIL_API UClass* Z_Construct_UClass_AWeaponts();
	UPackage* Z_Construct_UPackage__Script_ResidentEvil();
// End Cross Module References
	void AAssault_Rifle::StaticRegisterNativesAAssault_Rifle()
	{
	}
	UClass* Z_Construct_UClass_AAssault_Rifle_NoRegister()
	{
		return AAssault_Rifle::StaticClass();
	}
	UClass* Z_Construct_UClass_AAssault_Rifle()
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
				{ "IncludePath", "Weaponts/Rifle/Assault_Rifle.h" },
				{ "ModuleRelativePath", "Weaponts/Rifle/Assault_Rifle.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAssault_Rifle>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAssault_Rifle::StaticClass,
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
	IMPLEMENT_CLASS(AAssault_Rifle, 2330839178);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAssault_Rifle(Z_Construct_UClass_AAssault_Rifle, &AAssault_Rifle::StaticClass, TEXT("/Script/ResidentEvil"), TEXT("AAssault_Rifle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAssault_Rifle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
