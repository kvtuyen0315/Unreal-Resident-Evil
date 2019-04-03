// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Weaponts/Pistol/Pistol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePistol() {}
// Cross Module References
	RESIDENTEVIL_API UClass* Z_Construct_UClass_APistol_NoRegister();
	RESIDENTEVIL_API UClass* Z_Construct_UClass_APistol();
	RESIDENTEVIL_API UClass* Z_Construct_UClass_AWeaponts();
	UPackage* Z_Construct_UPackage__Script_ResidentEvil();
// End Cross Module References
	void APistol::StaticRegisterNativesAPistol()
	{
	}
	UClass* Z_Construct_UClass_APistol_NoRegister()
	{
		return APistol::StaticClass();
	}
	UClass* Z_Construct_UClass_APistol()
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
				{ "IncludePath", "Weaponts/Pistol/Pistol.h" },
				{ "ModuleRelativePath", "Weaponts/Pistol/Pistol.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APistol>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APistol::StaticClass,
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
	IMPLEMENT_CLASS(APistol, 1958300243);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APistol(Z_Construct_UClass_APistol, &APistol::StaticClass, TEXT("/Script/ResidentEvil"), TEXT("APistol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APistol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
