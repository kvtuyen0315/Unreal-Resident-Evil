// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Character/Enemy/TargetInSightInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetInSightInfo() {}
// Cross Module References
	RESIDENTEVIL_API UClass* Z_Construct_UClass_UTargetInSightInfo_NoRegister();
	RESIDENTEVIL_API UClass* Z_Construct_UClass_UTargetInSightInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ResidentEvil();
	RESIDENTEVIL_API UFunction* Z_Construct_UFunction_UTargetInSightInfo_GetLastKnownLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	RESIDENTEVIL_API UFunction* Z_Construct_UFunction_UTargetInSightInfo_IsTargetInSight();
	RESIDENTEVIL_API UFunction* Z_Construct_UFunction_UTargetInSightInfo_SetIsTargetInSight();
	RESIDENTEVIL_API UFunction* Z_Construct_UFunction_UTargetInSightInfo_SetLastKnowLocation();
	RESIDENTEVIL_API UFunction* Z_Construct_UFunction_UTargetInSightInfo_SetShouldChaseTarget();
	RESIDENTEVIL_API UFunction* Z_Construct_UFunction_UTargetInSightInfo_ShouldChaseTarget();
// End Cross Module References
	void UTargetInSightInfo::StaticRegisterNativesUTargetInSightInfo()
	{
		UClass* Class = UTargetInSightInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLastKnownLocation", &UTargetInSightInfo::execGetLastKnownLocation },
			{ "IsTargetInSight", &UTargetInSightInfo::execIsTargetInSight },
			{ "SetIsTargetInSight", &UTargetInSightInfo::execSetIsTargetInSight },
			{ "SetLastKnowLocation", &UTargetInSightInfo::execSetLastKnowLocation },
			{ "SetShouldChaseTarget", &UTargetInSightInfo::execSetShouldChaseTarget },
			{ "ShouldChaseTarget", &UTargetInSightInfo::execShouldChaseTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UTargetInSightInfo_GetLastKnownLocation()
	{
		struct TargetInSightInfo_eventGetLastKnownLocation_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TargetInSightInfo_eventGetLastKnownLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Character/Enemy/TargetInSightInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetInSightInfo, "GetLastKnownLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x40820401, sizeof(TargetInSightInfo_eventGetLastKnownLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTargetInSightInfo_IsTargetInSight()
	{
		struct TargetInSightInfo_eventIsTargetInSight_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((TargetInSightInfo_eventIsTargetInSight_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TargetInSightInfo_eventIsTargetInSight_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Character/Enemy/TargetInSightInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetInSightInfo, "IsTargetInSight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x40020401, sizeof(TargetInSightInfo_eventIsTargetInSight_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTargetInSightInfo_SetIsTargetInSight()
	{
		struct TargetInSightInfo_eventSetIsTargetInSight_Parms
		{
			bool Flag;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_Flag_SetBit = [](void* Obj){ ((TargetInSightInfo_eventSetIsTargetInSight_Parms*)Obj)->Flag = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Flag = { UE4CodeGen_Private::EPropertyClass::Bool, "Flag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TargetInSightInfo_eventSetIsTargetInSight_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Flag_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Flag,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Character/Enemy/TargetInSightInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetInSightInfo, "SetIsTargetInSight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(TargetInSightInfo_eventSetIsTargetInSight_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTargetInSightInfo_SetLastKnowLocation()
	{
		struct TargetInSightInfo_eventSetLastKnowLocation_Parms
		{
			FVector Location;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(TargetInSightInfo_eventSetLastKnowLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Location_MetaData, ARRAY_COUNT(NewProp_Location_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Character/Enemy/TargetInSightInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetInSightInfo, "SetLastKnowLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00C20401, sizeof(TargetInSightInfo_eventSetLastKnowLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTargetInSightInfo_SetShouldChaseTarget()
	{
		struct TargetInSightInfo_eventSetShouldChaseTarget_Parms
		{
			bool Flag;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_Flag_SetBit = [](void* Obj){ ((TargetInSightInfo_eventSetShouldChaseTarget_Parms*)Obj)->Flag = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Flag = { UE4CodeGen_Private::EPropertyClass::Bool, "Flag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TargetInSightInfo_eventSetShouldChaseTarget_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Flag_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Flag,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Character/Enemy/TargetInSightInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetInSightInfo, "SetShouldChaseTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(TargetInSightInfo_eventSetShouldChaseTarget_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTargetInSightInfo_ShouldChaseTarget()
	{
		struct TargetInSightInfo_eventShouldChaseTarget_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((TargetInSightInfo_eventShouldChaseTarget_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TargetInSightInfo_eventShouldChaseTarget_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Character/Enemy/TargetInSightInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetInSightInfo, "ShouldChaseTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x40020401, sizeof(TargetInSightInfo_eventShouldChaseTarget_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTargetInSightInfo_NoRegister()
	{
		return UTargetInSightInfo::StaticClass();
	}
	UClass* Z_Construct_UClass_UTargetInSightInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvil,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UTargetInSightInfo_GetLastKnownLocation, "GetLastKnownLocation" }, // 515686988
				{ &Z_Construct_UFunction_UTargetInSightInfo_IsTargetInSight, "IsTargetInSight" }, // 1787477251
				{ &Z_Construct_UFunction_UTargetInSightInfo_SetIsTargetInSight, "SetIsTargetInSight" }, // 230945106
				{ &Z_Construct_UFunction_UTargetInSightInfo_SetLastKnowLocation, "SetLastKnowLocation" }, // 3060352817
				{ &Z_Construct_UFunction_UTargetInSightInfo_SetShouldChaseTarget, "SetShouldChaseTarget" }, // 1717604100
				{ &Z_Construct_UFunction_UTargetInSightInfo_ShouldChaseTarget, "ShouldChaseTarget" }, // 2292346152
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Character/Enemy/TargetInSightInfo.h" },
				{ "ModuleRelativePath", "Character/Enemy/TargetInSightInfo.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldChaseTarget_MetaData[] = {
				{ "Category", "TargetInSightInfo" },
				{ "ModuleRelativePath", "Character/Enemy/TargetInSightInfo.h" },
				{ "ToolTip", "Flag to chase the target, is lost sight, should check at last seen location" },
			};
#endif
			auto NewProp_bShouldChaseTarget_SetBit = [](void* Obj){ ((UTargetInSightInfo*)Obj)->bShouldChaseTarget = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldChaseTarget = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldChaseTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000020001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UTargetInSightInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShouldChaseTarget_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShouldChaseTarget_MetaData, ARRAY_COUNT(NewProp_bShouldChaseTarget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastKnowLocation_MetaData[] = {
				{ "Category", "TargetInSightInfo" },
				{ "ModuleRelativePath", "Character/Enemy/TargetInSightInfo.h" },
				{ "ToolTip", "The location last saw the target" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastKnowLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "LastKnowLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000020001, 1, nullptr, STRUCT_OFFSET(UTargetInSightInfo, LastKnowLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_LastKnowLocation_MetaData, ARRAY_COUNT(NewProp_LastKnowLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTargetInSight_MetaData[] = {
				{ "Category", "TargetInSightInfo" },
				{ "ModuleRelativePath", "Character/Enemy/TargetInSightInfo.h" },
				{ "ToolTip", "Is seeing target?" },
			};
#endif
			auto NewProp_bIsTargetInSight_SetBit = [](void* Obj){ ((UTargetInSightInfo*)Obj)->bIsTargetInSight = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTargetInSight = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsTargetInSight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000020001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UTargetInSightInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsTargetInSight_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsTargetInSight_MetaData, ARRAY_COUNT(NewProp_bIsTargetInSight_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShouldChaseTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastKnowLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsTargetInSight,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTargetInSightInfo>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTargetInSightInfo::StaticClass,
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
	IMPLEMENT_CLASS(UTargetInSightInfo, 1994621760);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTargetInSightInfo(Z_Construct_UClass_UTargetInSightInfo, &UTargetInSightInfo::StaticClass, TEXT("/Script/ResidentEvil"), TEXT("UTargetInSightInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetInSightInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
