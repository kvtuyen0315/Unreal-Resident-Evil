// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Character/Enemy/BTDecoratorIsTargetInSight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecoratorIsTargetInSight() {}
// Cross Module References
	RESIDENTEVIL_API UClass* Z_Construct_UClass_UBTDecoratorIsTargetInSight_NoRegister();
	RESIDENTEVIL_API UClass* Z_Construct_UClass_UBTDecoratorIsTargetInSight();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_ResidentEvil();
	RESIDENTEVIL_API UClass* Z_Construct_UClass_UTargetInSightInfo_NoRegister();
	RESIDENTEVIL_API UClass* Z_Construct_UClass_AEnemyAIController_NoRegister();
// End Cross Module References
	void UBTDecoratorIsTargetInSight::StaticRegisterNativesUBTDecoratorIsTargetInSight()
	{
	}
	UClass* Z_Construct_UClass_UBTDecoratorIsTargetInSight_NoRegister()
	{
		return UBTDecoratorIsTargetInSight::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTDecoratorIsTargetInSight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTDecorator,
				(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvil,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Character/Enemy/BTDecoratorIsTargetInSight.h" },
				{ "ModuleRelativePath", "Character/Enemy/BTDecoratorIsTargetInSight.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightInfo_MetaData[] = {
				{ "ModuleRelativePath", "Character/Enemy/BTDecoratorIsTargetInSight.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SightInfo = { UE4CodeGen_Private::EPropertyClass::Object, "SightInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBTDecoratorIsTargetInSight, SightInfo), Z_Construct_UClass_UTargetInSightInfo_NoRegister, METADATA_PARAMS(NewProp_SightInfo_MetaData, ARRAY_COUNT(NewProp_SightInfo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIController_MetaData[] = {
				{ "ModuleRelativePath", "Character/Enemy/BTDecoratorIsTargetInSight.h" },
				{ "ToolTip", "Caching" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIController = { UE4CodeGen_Private::EPropertyClass::Object, "AIController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBTDecoratorIsTargetInSight, AIController), Z_Construct_UClass_AEnemyAIController_NoRegister, METADATA_PARAMS(NewProp_AIController_MetaData, ARRAY_COUNT(NewProp_AIController_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SightInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AIController,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTDecoratorIsTargetInSight>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTDecoratorIsTargetInSight::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UBTDecoratorIsTargetInSight, 2158253917);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecoratorIsTargetInSight(Z_Construct_UClass_UBTDecoratorIsTargetInSight, &UBTDecoratorIsTargetInSight::StaticClass, TEXT("/Script/ResidentEvil"), TEXT("UBTDecoratorIsTargetInSight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecoratorIsTargetInSight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
