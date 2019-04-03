// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Character/Enemy/BTTaskMoveToRandomLocation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTaskMoveToRandomLocation() {}
// Cross Module References
	RESIDENTEVIL_API UClass* Z_Construct_UClass_UBTTaskMoveToRandomLocation_NoRegister();
	RESIDENTEVIL_API UClass* Z_Construct_UClass_UBTTaskMoveToRandomLocation();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_ResidentEvil();
	RESIDENTEVIL_API UFunction* Z_Construct_UFunction_UBTTaskMoveToRandomLocation_OnHit();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UBTTaskMoveToRandomLocation::StaticRegisterNativesUBTTaskMoveToRandomLocation()
	{
		UClass* Class = UBTTaskMoveToRandomLocation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHit", &UBTTaskMoveToRandomLocation::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UBTTaskMoveToRandomLocation_OnHit()
	{
		struct BTTaskMoveToRandomLocation_eventOnHit_Parms
		{
			AActor* SelfActor;
			AActor* OtherActor;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit = { UE4CodeGen_Private::EPropertyClass::Struct, "Hit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(BTTaskMoveToRandomLocation_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_Hit_MetaData, ARRAY_COUNT(NewProp_Hit_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse = { UE4CodeGen_Private::EPropertyClass::Struct, "NormalImpulse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTTaskMoveToRandomLocation_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTTaskMoveToRandomLocation_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelfActor = { UE4CodeGen_Private::EPropertyClass::Object, "SelfActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTTaskMoveToRandomLocation_eventOnHit_Parms, SelfActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NormalImpulse,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelfActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Character/Enemy/BTTaskMoveToRandomLocation.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTaskMoveToRandomLocation, "OnHit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00C80400, sizeof(BTTaskMoveToRandomLocation_eventOnHit_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBTTaskMoveToRandomLocation_NoRegister()
	{
		return UBTTaskMoveToRandomLocation::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTTaskMoveToRandomLocation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
				(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvil,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UBTTaskMoveToRandomLocation_OnHit, "OnHit" }, // 3044733204
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Character/Enemy/BTTaskMoveToRandomLocation.h" },
				{ "ModuleRelativePath", "Character/Enemy/BTTaskMoveToRandomLocation.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFailAtNextTick_MetaData[] = {
				{ "Category", "BTTaskMoveToRandomLocation" },
				{ "ModuleRelativePath", "Character/Enemy/BTTaskMoveToRandomLocation.h" },
				{ "ToolTip", "For some reason we cannot call FinishTaskLatent in onhit event" },
			};
#endif
			auto NewProp_bFailAtNextTick_SetBit = [](void* Obj){ ((UBTTaskMoveToRandomLocation*)Obj)->bFailAtNextTick = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFailAtNextTick = { UE4CodeGen_Private::EPropertyClass::Bool, "bFailAtNextTick", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBTTaskMoveToRandomLocation), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFailAtNextTick_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bFailAtNextTick_MetaData, ARRAY_COUNT(NewProp_bFailAtNextTick_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesinationLocation_MetaData[] = {
				{ "Category", "BTTaskMoveToRandomLocation" },
				{ "ModuleRelativePath", "Character/Enemy/BTTaskMoveToRandomLocation.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DesinationLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "DesinationLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020001, 1, nullptr, STRUCT_OFFSET(UBTTaskMoveToRandomLocation, DesinationLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_DesinationLocation_MetaData, ARRAY_COUNT(NewProp_DesinationLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
				{ "Category", "BTTaskMoveToRandomLocation" },
				{ "ModuleRelativePath", "Character/Enemy/BTTaskMoveToRandomLocation.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000020001, 1, nullptr, STRUCT_OFFSET(UBTTaskMoveToRandomLocation, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_Actor_MetaData, ARRAY_COUNT(NewProp_Actor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptanceRadius_MetaData[] = {
				{ "Category", "BTTaskMoveToRandomLocation" },
				{ "ModuleRelativePath", "Character/Enemy/BTTaskMoveToRandomLocation.h" },
				{ "ToolTip", "To check if player move close enough to finish task" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius = { UE4CodeGen_Private::EPropertyClass::Float, "AcceptanceRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UBTTaskMoveToRandomLocation, AcceptanceRadius), METADATA_PARAMS(NewProp_AcceptanceRadius_MetaData, ARRAY_COUNT(NewProp_AcceptanceRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRadiusY_MetaData[] = {
				{ "Category", "BTTaskMoveToRandomLocation" },
				{ "ModuleRelativePath", "Character/Enemy/BTTaskMoveToRandomLocation.h" },
				{ "ToolTip", "Dont set negative value" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRadiusY = { UE4CodeGen_Private::EPropertyClass::Float, "MaxRadiusY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBTTaskMoveToRandomLocation, MaxRadiusY), METADATA_PARAMS(NewProp_MaxRadiusY_MetaData, ARRAY_COUNT(NewProp_MaxRadiusY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinRadiusY_MetaData[] = {
				{ "Category", "BTTaskMoveToRandomLocation" },
				{ "ModuleRelativePath", "Character/Enemy/BTTaskMoveToRandomLocation.h" },
				{ "ToolTip", "Dont set negative value" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinRadiusY = { UE4CodeGen_Private::EPropertyClass::Float, "MinRadiusY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBTTaskMoveToRandomLocation, MinRadiusY), METADATA_PARAMS(NewProp_MinRadiusY_MetaData, ARRAY_COUNT(NewProp_MinRadiusY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRadiusX_MetaData[] = {
				{ "Category", "BTTaskMoveToRandomLocation" },
				{ "ModuleRelativePath", "Character/Enemy/BTTaskMoveToRandomLocation.h" },
				{ "ToolTip", "Dont set negative value" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRadiusX = { UE4CodeGen_Private::EPropertyClass::Float, "MaxRadiusX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBTTaskMoveToRandomLocation, MaxRadiusX), METADATA_PARAMS(NewProp_MaxRadiusX_MetaData, ARRAY_COUNT(NewProp_MaxRadiusX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinRadiusX_MetaData[] = {
				{ "Category", "BTTaskMoveToRandomLocation" },
				{ "ModuleRelativePath", "Character/Enemy/BTTaskMoveToRandomLocation.h" },
				{ "ToolTip", "Dont set negative value" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinRadiusX = { UE4CodeGen_Private::EPropertyClass::Float, "MinRadiusX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBTTaskMoveToRandomLocation, MinRadiusX), METADATA_PARAMS(NewProp_MinRadiusX_MetaData, ARRAY_COUNT(NewProp_MinRadiusX_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFailAtNextTick,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DesinationLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Actor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AcceptanceRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxRadiusY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinRadiusY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxRadiusX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinRadiusX,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTTaskMoveToRandomLocation>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTTaskMoveToRandomLocation::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UBTTaskMoveToRandomLocation, 738863270);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTaskMoveToRandomLocation(Z_Construct_UClass_UBTTaskMoveToRandomLocation, &UBTTaskMoveToRandomLocation::StaticClass, TEXT("/Script/ResidentEvil"), TEXT("UBTTaskMoveToRandomLocation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTaskMoveToRandomLocation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
