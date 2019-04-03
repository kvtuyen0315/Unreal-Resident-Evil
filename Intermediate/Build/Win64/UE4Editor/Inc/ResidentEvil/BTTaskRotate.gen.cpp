// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Character/Enemy/BTTaskRotate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTaskRotate() {}
// Cross Module References
	RESIDENTEVIL_API UClass* Z_Construct_UClass_UBTTaskRotate_NoRegister();
	RESIDENTEVIL_API UClass* Z_Construct_UClass_UBTTaskRotate();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_ResidentEvil();
// End Cross Module References
	void UBTTaskRotate::StaticRegisterNativesUBTTaskRotate()
	{
	}
	UClass* Z_Construct_UClass_UBTTaskRotate_NoRegister()
	{
		return UBTTaskRotate::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTTaskRotate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
				(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvil,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Character/Enemy/BTTaskRotate.h" },
				{ "ModuleRelativePath", "Character/Enemy/BTTaskRotate.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeRotate_MetaData[] = {
				{ "ModuleRelativePath", "Character/Enemy/BTTaskRotate.h" },
				{ "ToolTip", "The time need to rotate in second" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeRotate = { UE4CodeGen_Private::EPropertyClass::Float, "TimeRotate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UBTTaskRotate, TimeRotate), METADATA_PARAMS(NewProp_TimeRotate_MetaData, ARRAY_COUNT(NewProp_TimeRotate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTimeRotate_MetaData[] = {
				{ "Category", "BTTaskRotate" },
				{ "ModuleRelativePath", "Character/Enemy/BTTaskRotate.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTimeRotate = { UE4CodeGen_Private::EPropertyClass::Float, "MaxTimeRotate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UBTTaskRotate, MaxTimeRotate), METADATA_PARAMS(NewProp_MaxTimeRotate_MetaData, ARRAY_COUNT(NewProp_MaxTimeRotate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinTimeRotate_MetaData[] = {
				{ "Category", "BTTaskRotate" },
				{ "ModuleRelativePath", "Character/Enemy/BTTaskRotate.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinTimeRotate = { UE4CodeGen_Private::EPropertyClass::Float, "MinTimeRotate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UBTTaskRotate, MinTimeRotate), METADATA_PARAMS(NewProp_MinTimeRotate_MetaData, ARRAY_COUNT(NewProp_MinTimeRotate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxOffsetY_MetaData[] = {
				{ "Category", "BTTaskRotate" },
				{ "ModuleRelativePath", "Character/Enemy/BTTaskRotate.h" },
				{ "ToolTip", "The Min Y-axis Offset Direction you want actor rotate to" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxOffsetY = { UE4CodeGen_Private::EPropertyClass::Float, "MaxOffsetY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UBTTaskRotate, MaxOffsetY), METADATA_PARAMS(NewProp_MaxOffsetY_MetaData, ARRAY_COUNT(NewProp_MaxOffsetY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinOffsetY_MetaData[] = {
				{ "Category", "BTTaskRotate" },
				{ "ModuleRelativePath", "Character/Enemy/BTTaskRotate.h" },
				{ "ToolTip", "The Min Y-axis Offset Direction you want actor rotate to" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinOffsetY = { UE4CodeGen_Private::EPropertyClass::Float, "MinOffsetY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UBTTaskRotate, MinOffsetY), METADATA_PARAMS(NewProp_MinOffsetY_MetaData, ARRAY_COUNT(NewProp_MinOffsetY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxOffsetX_MetaData[] = {
				{ "Category", "BTTaskRotate" },
				{ "ModuleRelativePath", "Character/Enemy/BTTaskRotate.h" },
				{ "ToolTip", "The Max X-axis Offset Direction you want actor rotate to" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxOffsetX = { UE4CodeGen_Private::EPropertyClass::Float, "MaxOffsetX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UBTTaskRotate, MaxOffsetX), METADATA_PARAMS(NewProp_MaxOffsetX_MetaData, ARRAY_COUNT(NewProp_MaxOffsetX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinOffsetX_MetaData[] = {
				{ "Category", "BTTaskRotate" },
				{ "ModuleRelativePath", "Character/Enemy/BTTaskRotate.h" },
				{ "ToolTip", "The Min X-axis Offset Direction you want actor rotate to" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinOffsetX = { UE4CodeGen_Private::EPropertyClass::Float, "MinOffsetX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UBTTaskRotate, MinOffsetX), METADATA_PARAMS(NewProp_MinOffsetX_MetaData, ARRAY_COUNT(NewProp_MinOffsetX_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeRotate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxTimeRotate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinTimeRotate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxOffsetY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinOffsetY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxOffsetX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinOffsetX,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTTaskRotate>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTTaskRotate::StaticClass,
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
	IMPLEMENT_CLASS(UBTTaskRotate, 2928215390);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTaskRotate(Z_Construct_UClass_UBTTaskRotate, &UBTTaskRotate::StaticClass, TEXT("/Script/ResidentEvil"), TEXT("UBTTaskRotate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTaskRotate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
