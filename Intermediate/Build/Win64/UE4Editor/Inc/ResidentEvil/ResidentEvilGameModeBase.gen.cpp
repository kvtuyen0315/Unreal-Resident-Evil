// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ResidentEvilGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResidentEvilGameModeBase() {}
// Cross Module References
	RESIDENTEVIL_API UClass* Z_Construct_UClass_AResidentEvilGameModeBase_NoRegister();
	RESIDENTEVIL_API UClass* Z_Construct_UClass_AResidentEvilGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ResidentEvil();
// End Cross Module References
	void AResidentEvilGameModeBase::StaticRegisterNativesAResidentEvilGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AResidentEvilGameModeBase_NoRegister()
	{
		return AResidentEvilGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AResidentEvilGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvil,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "ResidentEvilGameModeBase.h" },
				{ "ModuleRelativePath", "ResidentEvilGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AResidentEvilGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AResidentEvilGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
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
	IMPLEMENT_CLASS(AResidentEvilGameModeBase, 3984534025);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AResidentEvilGameModeBase(Z_Construct_UClass_AResidentEvilGameModeBase, &AResidentEvilGameModeBase::StaticClass, TEXT("/Script/ResidentEvil"), TEXT("AResidentEvilGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AResidentEvilGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
