// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Character/Enemy/Zombie/Zombie.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombie() {}
// Cross Module References
	RESIDENTEVIL_API UClass* Z_Construct_UClass_AZombie_NoRegister();
	RESIDENTEVIL_API UClass* Z_Construct_UClass_AZombie();
	RESIDENTEVIL_API UClass* Z_Construct_UClass_AEnemyBase();
	UPackage* Z_Construct_UPackage__Script_ResidentEvil();
	RESIDENTEVIL_API UFunction* Z_Construct_UFunction_AZombie_OnSenseActors();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	RESIDENTEVIL_API UFunction* Z_Construct_UFunction_AZombie_OnUpdatedSenseActor();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
// End Cross Module References
	void AZombie::StaticRegisterNativesAZombie()
	{
		UClass* Class = AZombie::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSenseActors", &AZombie::execOnSenseActors },
			{ "OnUpdatedSenseActor", &AZombie::execOnUpdatedSenseActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AZombie_OnSenseActors()
	{
		struct Zombie_eventOnSenseActors_Parms
		{
			TArray<AActor*> TestActors;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestActors_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TestActors = { UE4CodeGen_Private::EPropertyClass::Array, "TestActors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(Zombie_eventOnSenseActors_Parms, TestActors), METADATA_PARAMS(NewProp_TestActors_MetaData, ARRAY_COUNT(NewProp_TestActors_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TestActors_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "TestActors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TestActors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TestActors_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Character/Enemy/Zombie/Zombie.h" },
				{ "ToolTip", "Delaget events, called when see actor and called again when lose sigh of it too" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombie, "OnSenseActors", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00480400, sizeof(Zombie_eventOnSenseActors_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AZombie_OnUpdatedSenseActor()
	{
		struct Zombie_eventOnUpdatedSenseActor_Parms
		{
			AActor* UpdatedActor;
			FAIStimulus Stimulus;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stimulus = { UE4CodeGen_Private::EPropertyClass::Struct, "Stimulus", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Zombie_eventOnUpdatedSenseActor_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpdatedActor = { UE4CodeGen_Private::EPropertyClass::Object, "UpdatedActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Zombie_eventOnUpdatedSenseActor_Parms, UpdatedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Stimulus,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UpdatedActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Character/Enemy/Zombie/Zombie.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombie, "OnUpdatedSenseActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080400, sizeof(Zombie_eventOnUpdatedSenseActor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AZombie_NoRegister()
	{
		return AZombie::StaticClass();
	}
	UClass* Z_Construct_UClass_AZombie()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AEnemyBase,
				(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvil,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AZombie_OnSenseActors, "OnSenseActors" }, // 615254761
				{ &Z_Construct_UFunction_AZombie_OnUpdatedSenseActor, "OnUpdatedSenseActor" }, // 317817266
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "Character/Enemy/Zombie/Zombie.h" },
				{ "ModuleRelativePath", "Character/Enemy/Zombie/Zombie.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AZombie>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AZombie::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AZombie, 3900634957);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombie(Z_Construct_UClass_AZombie, &AZombie::StaticClass, TEXT("/Script/ResidentEvil"), TEXT("AZombie"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombie);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
