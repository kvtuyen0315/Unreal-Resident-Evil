// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Character/Enemy/EnemyBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyBase() {}
// Cross Module References
	RESIDENTEVIL_API UClass* Z_Construct_UClass_AEnemyBase_NoRegister();
	RESIDENTEVIL_API UClass* Z_Construct_UClass_AEnemyBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ResidentEvil();
	RESIDENTEVIL_API UClass* Z_Construct_UClass_UEnemyAnimInstance_NoRegister();
	RESIDENTEVIL_API UClass* Z_Construct_UClass_UTargetHearingInfo_NoRegister();
	RESIDENTEVIL_API UClass* Z_Construct_UClass_UTargetInSightInfo_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Hearing_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	void AEnemyBase::StaticRegisterNativesAEnemyBase()
	{
	}
	UClass* Z_Construct_UClass_AEnemyBase_NoRegister()
	{
		return AEnemyBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AEnemyBase()
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
				{ "IncludePath", "Character/Enemy/EnemyBase.h" },
				{ "ModuleRelativePath", "Character/Enemy/EnemyBase.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimInstance_MetaData[] = {
				{ "Category", "EnemyBase" },
				{ "ModuleRelativePath", "Character/Enemy/EnemyBase.h" },
				{ "ToolTip", "The custom class derived from AnimInstance" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimInstance = { UE4CodeGen_Private::EPropertyClass::Object, "AnimInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000030001, 1, nullptr, STRUCT_OFFSET(AEnemyBase, AnimInstance), Z_Construct_UClass_UEnemyAnimInstance_NoRegister, METADATA_PARAMS(NewProp_AnimInstance_MetaData, ARRAY_COUNT(NewProp_AnimInstance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[] = {
				{ "Category", "EnemyBase" },
				{ "ModuleRelativePath", "Character/Enemy/EnemyBase.h" },
				{ "ToolTip", "The Attack Range, in this range AI can attack" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackRange = { UE4CodeGen_Private::EPropertyClass::Float, "AttackRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(AEnemyBase, AttackRange), METADATA_PARAMS(NewProp_AttackRange_MetaData, ARRAY_COUNT(NewProp_AttackRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeFollowLastSound_MetaData[] = {
				{ "Category", "EnemyBase" },
				{ "ModuleRelativePath", "Character/Enemy/EnemyBase.h" },
				{ "ToolTip", "Time follow the sound, after this time, the AI won't go to the location of the last known sound." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeFollowLastSound = { UE4CodeGen_Private::EPropertyClass::Float, "TimeFollowLastSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(AEnemyBase, TimeFollowLastSound), METADATA_PARAMS(NewProp_TimeFollowLastSound_MetaData, ARRAY_COUNT(NewProp_TimeFollowLastSound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetHearingInfo_MetaData[] = {
				{ "Category", "EnemyBase" },
				{ "ModuleRelativePath", "Character/Enemy/EnemyBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetHearingInfo = { UE4CodeGen_Private::EPropertyClass::Object, "TargetHearingInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000030001, 1, nullptr, STRUCT_OFFSET(AEnemyBase, TargetHearingInfo), Z_Construct_UClass_UTargetHearingInfo_NoRegister, METADATA_PARAMS(NewProp_TargetHearingInfo_MetaData, ARRAY_COUNT(NewProp_TargetHearingInfo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetInSightInfo_MetaData[] = {
				{ "Category", "EnemyBase" },
				{ "ModuleRelativePath", "Character/Enemy/EnemyBase.h" },
				{ "ToolTip", "The custom classes store the sense information" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetInSightInfo = { UE4CodeGen_Private::EPropertyClass::Object, "TargetInSightInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000030001, 1, nullptr, STRUCT_OFFSET(AEnemyBase, TargetInSightInfo), Z_Construct_UClass_UTargetInSightInfo_NoRegister, METADATA_PARAMS(NewProp_TargetInSightInfo_MetaData, ARRAY_COUNT(NewProp_TargetInSightInfo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIHearingConfig_MetaData[] = {
				{ "Category", "EnemyBase" },
				{ "ModuleRelativePath", "Character/Enemy/EnemyBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIHearingConfig = { UE4CodeGen_Private::EPropertyClass::Object, "AIHearingConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(AEnemyBase, AIHearingConfig), Z_Construct_UClass_UAISenseConfig_Hearing_NoRegister, METADATA_PARAMS(NewProp_AIHearingConfig_MetaData, ARRAY_COUNT(NewProp_AIHearingConfig_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AISightConfig_MetaData[] = {
				{ "Category", "EnemyBase" },
				{ "ModuleRelativePath", "Character/Enemy/EnemyBase.h" },
				{ "ToolTip", "The config fpr the specific Senses" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AISightConfig = { UE4CodeGen_Private::EPropertyClass::Object, "AISightConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(AEnemyBase, AISightConfig), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(NewProp_AISightConfig_MetaData, ARRAY_COUNT(NewProp_AISightConfig_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIPereptionComp_MetaData[] = {
				{ "Category", "EnemyBase" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Character/Enemy/EnemyBase.h" },
				{ "ToolTip", "The Component help AI can sense player around" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIPereptionComp = { UE4CodeGen_Private::EPropertyClass::Object, "AIPereptionComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080009, 1, nullptr, STRUCT_OFFSET(AEnemyBase, AIPereptionComp), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(NewProp_AIPereptionComp_MetaData, ARRAY_COUNT(NewProp_AIPereptionComp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIBehaviorTree_MetaData[] = {
				{ "Category", "Behavior" },
				{ "ModuleRelativePath", "Character/Enemy/EnemyBase.h" },
				{ "ToolTip", "The Behavior Tree for AI's decision" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIBehaviorTree = { UE4CodeGen_Private::EPropertyClass::Object, "AIBehaviorTree", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(AEnemyBase, AIBehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(NewProp_AIBehaviorTree_MetaData, ARRAY_COUNT(NewProp_AIBehaviorTree_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimInstance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttackRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeFollowLastSound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetHearingInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetInSightInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AIHearingConfig,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AISightConfig,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AIPereptionComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AIBehaviorTree,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AEnemyBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AEnemyBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(AEnemyBase, 8719346);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyBase(Z_Construct_UClass_AEnemyBase, &AEnemyBase::StaticClass, TEXT("/Script/ResidentEvil"), TEXT("AEnemyBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
