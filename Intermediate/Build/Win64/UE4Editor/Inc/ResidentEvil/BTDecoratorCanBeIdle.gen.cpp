// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Character/Enemy/BTDecoratorCanBeIdle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecoratorCanBeIdle() {}
// Cross Module References
	RESIDENTEVIL_API UClass* Z_Construct_UClass_UBTDecoratorCanBeIdle_NoRegister();
	RESIDENTEVIL_API UClass* Z_Construct_UClass_UBTDecoratorCanBeIdle();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_ResidentEvil();
	RESIDENTEVIL_API UClass* Z_Construct_UClass_UTargetHearingInfo_NoRegister();
	RESIDENTEVIL_API UClass* Z_Construct_UClass_UTargetInSightInfo_NoRegister();
	RESIDENTEVIL_API UClass* Z_Construct_UClass_AEnemyAIController_NoRegister();
// End Cross Module References
	void UBTDecoratorCanBeIdle::StaticRegisterNativesUBTDecoratorCanBeIdle()
	{
	}
	UClass* Z_Construct_UClass_UBTDecoratorCanBeIdle_NoRegister()
	{
		return UBTDecoratorCanBeIdle::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTDecoratorCanBeIdle()
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
				{ "IncludePath", "Character/Enemy/BTDecoratorCanBeIdle.h" },
				{ "ModuleRelativePath", "Character/Enemy/BTDecoratorCanBeIdle.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HearingInfo_MetaData[] = {
				{ "ModuleRelativePath", "Character/Enemy/BTDecoratorCanBeIdle.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HearingInfo = { UE4CodeGen_Private::EPropertyClass::Object, "HearingInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBTDecoratorCanBeIdle, HearingInfo), Z_Construct_UClass_UTargetHearingInfo_NoRegister, METADATA_PARAMS(NewProp_HearingInfo_MetaData, ARRAY_COUNT(NewProp_HearingInfo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightInfo_MetaData[] = {
				{ "ModuleRelativePath", "Character/Enemy/BTDecoratorCanBeIdle.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SightInfo = { UE4CodeGen_Private::EPropertyClass::Object, "SightInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBTDecoratorCanBeIdle, SightInfo), Z_Construct_UClass_UTargetInSightInfo_NoRegister, METADATA_PARAMS(NewProp_SightInfo_MetaData, ARRAY_COUNT(NewProp_SightInfo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIController_MetaData[] = {
				{ "ModuleRelativePath", "Character/Enemy/BTDecoratorCanBeIdle.h" },
				{ "ToolTip", "Caching" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIController = { UE4CodeGen_Private::EPropertyClass::Object, "AIController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBTDecoratorCanBeIdle, AIController), Z_Construct_UClass_AEnemyAIController_NoRegister, METADATA_PARAMS(NewProp_AIController_MetaData, ARRAY_COUNT(NewProp_AIController_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HearingInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SightInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AIController,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTDecoratorCanBeIdle>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTDecoratorCanBeIdle::StaticClass,
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
	IMPLEMENT_CLASS(UBTDecoratorCanBeIdle, 350324746);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecoratorCanBeIdle(Z_Construct_UClass_UBTDecoratorCanBeIdle, &UBTDecoratorCanBeIdle::StaticClass, TEXT("/Script/ResidentEvil"), TEXT("UBTDecoratorCanBeIdle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecoratorCanBeIdle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
