// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Character/Enemy/BTComposite_RandomSelector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTComposite_RandomSelector() {}
// Cross Module References
	RESIDENTEVIL_API UClass* Z_Construct_UClass_UBTComposite_RandomSelector_NoRegister();
	RESIDENTEVIL_API UClass* Z_Construct_UClass_UBTComposite_RandomSelector();
	AIMODULE_API UClass* Z_Construct_UClass_UBTCompositeNode();
	UPackage* Z_Construct_UPackage__Script_ResidentEvil();
	RESIDENTEVIL_API UFunction* Z_Construct_UFunction_UBTComposite_RandomSelector_RandomNextChildIndex();
// End Cross Module References
	void UBTComposite_RandomSelector::StaticRegisterNativesUBTComposite_RandomSelector()
	{
		UClass* Class = UBTComposite_RandomSelector::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RandomNextChildIndex", &UBTComposite_RandomSelector::execRandomNextChildIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UBTComposite_RandomSelector_RandomNextChildIndex()
	{
		struct BTComposite_RandomSelector_eventRandomNextChildIndex_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BTComposite_RandomSelector_eventRandomNextChildIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Character/Enemy/BTComposite_RandomSelector.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTComposite_RandomSelector, "RandomNextChildIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(BTComposite_RandomSelector_eventRandomNextChildIndex_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBTComposite_RandomSelector_NoRegister()
	{
		return UBTComposite_RandomSelector::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTComposite_RandomSelector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTCompositeNode,
				(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvil,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UBTComposite_RandomSelector_RandomNextChildIndex, "RandomNextChildIndex" }, // 954251071
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Character/Enemy/BTComposite_RandomSelector.h" },
				{ "ModuleRelativePath", "Character/Enemy/BTComposite_RandomSelector.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapChildChanceTemp_MetaData[] = {
				{ "ModuleRelativePath", "Character/Enemy/BTComposite_RandomSelector.h" },
				{ "ToolTip", "The temp array that used to calculate percentage" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_MapChildChanceTemp = { UE4CodeGen_Private::EPropertyClass::Map, "MapChildChanceTemp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UBTComposite_RandomSelector, MapChildChanceTemp), METADATA_PARAMS(NewProp_MapChildChanceTemp_MetaData, ARRAY_COUNT(NewProp_MapChildChanceTemp_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MapChildChanceTemp_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Int, "MapChildChanceTemp_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MapChildChanceTemp_ValueProp = { UE4CodeGen_Private::EPropertyClass::Float, "MapChildChanceTemp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextChildIdx_MetaData[] = {
				{ "ModuleRelativePath", "Character/Enemy/BTComposite_RandomSelector.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NextChildIdx = { UE4CodeGen_Private::EPropertyClass::Int, "NextChildIdx", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UBTComposite_RandomSelector, NextChildIdx), METADATA_PARAMS(NewProp_NextChildIdx_MetaData, ARRAY_COUNT(NewProp_NextChildIdx_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInitialArrayChildIndex_MetaData[] = {
				{ "ModuleRelativePath", "Character/Enemy/BTComposite_RandomSelector.h" },
			};
#endif
			auto NewProp_bIsInitialArrayChildIndex_SetBit = [](void* Obj){ ((UBTComposite_RandomSelector*)Obj)->bIsInitialArrayChildIndex = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInitialArrayChildIndex = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsInitialArrayChildIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBTComposite_RandomSelector), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsInitialArrayChildIndex_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsInitialArrayChildIndex_MetaData, ARRAY_COUNT(NewProp_bIsInitialArrayChildIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEqualChance_MetaData[] = {
				{ "Category", "BTComposite_RandomSelector" },
				{ "ModuleRelativePath", "Character/Enemy/BTComposite_RandomSelector.h" },
				{ "ToolTip", "if true, all child have equal chance to activate" },
			};
#endif
			auto NewProp_bIsEqualChance_SetBit = [](void* Obj){ ((UBTComposite_RandomSelector*)Obj)->bIsEqualChance = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEqualChance = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsEqualChance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBTComposite_RandomSelector), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsEqualChance_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsEqualChance_MetaData, ARRAY_COUNT(NewProp_bIsEqualChance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrayChildIndex_MetaData[] = {
				{ "ModuleRelativePath", "Character/Enemy/BTComposite_RandomSelector.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArrayChildIndex = { UE4CodeGen_Private::EPropertyClass::Array, "ArrayChildIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBTComposite_RandomSelector, ArrayChildIndex), METADATA_PARAMS(NewProp_ArrayChildIndex_MetaData, ARRAY_COUNT(NewProp_ArrayChildIndex_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArrayChildIndex_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "ArrayChildIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrayChance_MetaData[] = {
				{ "Category", "BTComposite_RandomSelector" },
				{ "ModuleRelativePath", "Character/Enemy/BTComposite_RandomSelector.h" },
				{ "ToolTip", "if you want to have 3 tasks that have 50%, 20%, 30% each, you should set 50, 20, 30\nThe chance of each element order is from left to right" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArrayChance = { UE4CodeGen_Private::EPropertyClass::Array, "ArrayChance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBTComposite_RandomSelector, ArrayChance), METADATA_PARAMS(NewProp_ArrayChance_MetaData, ARRAY_COUNT(NewProp_ArrayChance_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArrayChance_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "ArrayChance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MapChildChanceTemp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MapChildChanceTemp_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MapChildChanceTemp_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NextChildIdx,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsInitialArrayChildIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsEqualChance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ArrayChildIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ArrayChildIndex_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ArrayChance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ArrayChance_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTComposite_RandomSelector>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTComposite_RandomSelector::StaticClass,
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
	IMPLEMENT_CLASS(UBTComposite_RandomSelector, 3671093822);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTComposite_RandomSelector(Z_Construct_UClass_UBTComposite_RandomSelector, &UBTComposite_RandomSelector::StaticClass, TEXT("/Script/ResidentEvil"), TEXT("UBTComposite_RandomSelector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTComposite_RandomSelector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
