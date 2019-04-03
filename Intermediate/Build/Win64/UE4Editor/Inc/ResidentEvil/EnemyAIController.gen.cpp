// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Character/Enemy/EnemyAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyAIController() {}
// Cross Module References
	RESIDENTEVIL_API UClass* Z_Construct_UClass_AEnemyAIController_NoRegister();
	RESIDENTEVIL_API UClass* Z_Construct_UClass_AEnemyAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_ResidentEvil();
	RESIDENTEVIL_API UClass* Z_Construct_UClass_AEnemyBase_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
// End Cross Module References
	void AEnemyAIController::StaticRegisterNativesAEnemyAIController()
	{
	}
	UClass* Z_Construct_UClass_AEnemyAIController_NoRegister()
	{
		return AEnemyAIController::StaticClass();
	}
	UClass* Z_Construct_UClass_AEnemyAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AAIController,
				(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvil,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "Character/Enemy/EnemyAIController.h" },
				{ "ModuleRelativePath", "Character/Enemy/EnemyAIController.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyPawn_MetaData[] = {
				{ "Category", "EnemyAIController" },
				{ "ModuleRelativePath", "Character/Enemy/EnemyAIController.h" },
				{ "ToolTip", "Reference to the pawn possesses the controller" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnemyPawn = { UE4CodeGen_Private::EPropertyClass::Object, "EnemyPawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000030001, 1, nullptr, STRUCT_OFFSET(AEnemyAIController, EnemyPawn), Z_Construct_UClass_AEnemyBase_NoRegister, METADATA_PARAMS(NewProp_EnemyPawn_MetaData, ARRAY_COUNT(NewProp_EnemyPawn_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorComp_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Character/Enemy/EnemyAIController.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorComp = { UE4CodeGen_Private::EPropertyClass::Object, "BehaviorComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000082008, 1, nullptr, STRUCT_OFFSET(AEnemyAIController, BehaviorComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(NewProp_BehaviorComp_MetaData, ARRAY_COUNT(NewProp_BehaviorComp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardComp_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Character/Enemy/EnemyAIController.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlackboardComp = { UE4CodeGen_Private::EPropertyClass::Object, "BlackboardComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000082008, 1, nullptr, STRUCT_OFFSET(AEnemyAIController, BlackboardComp), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(NewProp_BlackboardComp_MetaData, ARRAY_COUNT(NewProp_BlackboardComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnemyPawn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BehaviorComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlackboardComp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AEnemyAIController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AEnemyAIController::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900280u,
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
	IMPLEMENT_CLASS(AEnemyAIController, 1892218515);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyAIController(Z_Construct_UClass_AEnemyAIController, &AEnemyAIController::StaticClass, TEXT("/Script/ResidentEvil"), TEXT("AEnemyAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
