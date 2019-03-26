// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GameModeBase/MyGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameModeBase() {}
// Cross Module References
	RESIDENTEVIL_API UClass* Z_Construct_UClass_AMyGameModeBase_NoRegister();
	RESIDENTEVIL_API UClass* Z_Construct_UClass_AMyGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ResidentEvil();
// End Cross Module References
	void AMyGameModeBase::StaticRegisterNativesAMyGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AMyGameModeBase_NoRegister()
	{
		return AMyGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyGameModeBase()
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
				{ "IncludePath", "GameModeBase/MyGameModeBase.h" },
				{ "ModuleRelativePath", "GameModeBase/MyGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMyGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMyGameModeBase::StaticClass,
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
	IMPLEMENT_CLASS(AMyGameModeBase, 2934212654);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyGameModeBase(Z_Construct_UClass_AMyGameModeBase, &AMyGameModeBase::StaticClass, TEXT("/Script/ResidentEvil"), TEXT("AMyGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
