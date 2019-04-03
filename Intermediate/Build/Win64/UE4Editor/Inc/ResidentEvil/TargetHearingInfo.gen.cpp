// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Character/Enemy/TargetHearingInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetHearingInfo() {}
// Cross Module References
	RESIDENTEVIL_API UClass* Z_Construct_UClass_UTargetHearingInfo_NoRegister();
	RESIDENTEVIL_API UClass* Z_Construct_UClass_UTargetHearingInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ResidentEvil();
	RESIDENTEVIL_API UFunction* Z_Construct_UFunction_UTargetHearingInfo_GetLastKnownLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	RESIDENTEVIL_API UFunction* Z_Construct_UFunction_UTargetHearingInfo_GetTimeHeardSound();
	RESIDENTEVIL_API UFunction* Z_Construct_UFunction_UTargetHearingInfo_IsHearingTargetSound();
	RESIDENTEVIL_API UFunction* Z_Construct_UFunction_UTargetHearingInfo_SetIsHearingTargetSound();
	RESIDENTEVIL_API UFunction* Z_Construct_UFunction_UTargetHearingInfo_SetLastKnowLocation();
	RESIDENTEVIL_API UFunction* Z_Construct_UFunction_UTargetHearingInfo_SetTimeHeardSound();
// End Cross Module References
	void UTargetHearingInfo::StaticRegisterNativesUTargetHearingInfo()
	{
		UClass* Class = UTargetHearingInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLastKnownLocation", &UTargetHearingInfo::execGetLastKnownLocation },
			{ "GetTimeHeardSound", &UTargetHearingInfo::execGetTimeHeardSound },
			{ "IsHearingTargetSound", &UTargetHearingInfo::execIsHearingTargetSound },
			{ "SetIsHearingTargetSound", &UTargetHearingInfo::execSetIsHearingTargetSound },
			{ "SetLastKnowLocation", &UTargetHearingInfo::execSetLastKnowLocation },
			{ "SetTimeHeardSound", &UTargetHearingInfo::execSetTimeHeardSound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UTargetHearingInfo_GetLastKnownLocation()
	{
		struct TargetHearingInfo_eventGetLastKnownLocation_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TargetHearingInfo_eventGetLastKnownLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Character/Enemy/TargetHearingInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetHearingInfo, "GetLastKnownLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x40820401, sizeof(TargetHearingInfo_eventGetLastKnownLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTargetHearingInfo_GetTimeHeardSound()
	{
		struct TargetHearingInfo_eventGetTimeHeardSound_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TargetHearingInfo_eventGetTimeHeardSound_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Character/Enemy/TargetHearingInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetHearingInfo, "GetTimeHeardSound", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x40020401, sizeof(TargetHearingInfo_eventGetTimeHeardSound_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTargetHearingInfo_IsHearingTargetSound()
	{
		struct TargetHearingInfo_eventIsHearingTargetSound_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((TargetHearingInfo_eventIsHearingTargetSound_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TargetHearingInfo_eventIsHearingTargetSound_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Character/Enemy/TargetHearingInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetHearingInfo, "IsHearingTargetSound", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x40020401, sizeof(TargetHearingInfo_eventIsHearingTargetSound_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTargetHearingInfo_SetIsHearingTargetSound()
	{
		struct TargetHearingInfo_eventSetIsHearingTargetSound_Parms
		{
			bool Flag;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_Flag_SetBit = [](void* Obj){ ((TargetHearingInfo_eventSetIsHearingTargetSound_Parms*)Obj)->Flag = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Flag = { UE4CodeGen_Private::EPropertyClass::Bool, "Flag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TargetHearingInfo_eventSetIsHearingTargetSound_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Flag_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Flag,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Character/Enemy/TargetHearingInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetHearingInfo, "SetIsHearingTargetSound", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(TargetHearingInfo_eventSetIsHearingTargetSound_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTargetHearingInfo_SetLastKnowLocation()
	{
		struct TargetHearingInfo_eventSetLastKnowLocation_Parms
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
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(TargetHearingInfo_eventSetLastKnowLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Location_MetaData, ARRAY_COUNT(NewProp_Location_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Character/Enemy/TargetHearingInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetHearingInfo, "SetLastKnowLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00C20401, sizeof(TargetHearingInfo_eventSetLastKnowLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTargetHearingInfo_SetTimeHeardSound()
	{
		struct TargetHearingInfo_eventSetTimeHeardSound_Parms
		{
			float Timestamp;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timestamp = { UE4CodeGen_Private::EPropertyClass::Float, "Timestamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TargetHearingInfo_eventSetTimeHeardSound_Parms, Timestamp), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Timestamp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Character/Enemy/TargetHearingInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetHearingInfo, "SetTimeHeardSound", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(TargetHearingInfo_eventSetTimeHeardSound_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTargetHearingInfo_NoRegister()
	{
		return UTargetHearingInfo::StaticClass();
	}
	UClass* Z_Construct_UClass_UTargetHearingInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_ResidentEvil,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UTargetHearingInfo_GetLastKnownLocation, "GetLastKnownLocation" }, // 2462540402
				{ &Z_Construct_UFunction_UTargetHearingInfo_GetTimeHeardSound, "GetTimeHeardSound" }, // 3157021760
				{ &Z_Construct_UFunction_UTargetHearingInfo_IsHearingTargetSound, "IsHearingTargetSound" }, // 1233005928
				{ &Z_Construct_UFunction_UTargetHearingInfo_SetIsHearingTargetSound, "SetIsHearingTargetSound" }, // 3671481682
				{ &Z_Construct_UFunction_UTargetHearingInfo_SetLastKnowLocation, "SetLastKnowLocation" }, // 2829361849
				{ &Z_Construct_UFunction_UTargetHearingInfo_SetTimeHeardSound, "SetTimeHeardSound" }, // 1710287962
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Character/Enemy/TargetHearingInfo.h" },
				{ "ModuleRelativePath", "Character/Enemy/TargetHearingInfo.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeHeardSound_MetaData[] = {
				{ "Category", "TargetHearingInfo" },
				{ "ModuleRelativePath", "Character/Enemy/TargetHearingInfo.h" },
				{ "ToolTip", "The time that AI heard sound, when heard the sound, reset to 0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeHeardSound = { UE4CodeGen_Private::EPropertyClass::Float, "TimeHeardSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000020001, 1, nullptr, STRUCT_OFFSET(UTargetHearingInfo, TimeHeardSound), METADATA_PARAMS(NewProp_TimeHeardSound_MetaData, ARRAY_COUNT(NewProp_TimeHeardSound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastKnowLocation_MetaData[] = {
				{ "Category", "TargetHearingInfo" },
				{ "ModuleRelativePath", "Character/Enemy/TargetHearingInfo.h" },
				{ "ToolTip", "The location last saw the target" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastKnowLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "LastKnowLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000020001, 1, nullptr, STRUCT_OFFSET(UTargetHearingInfo, LastKnowLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_LastKnowLocation_MetaData, ARRAY_COUNT(NewProp_LastKnowLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHearingTargetSound_MetaData[] = {
				{ "Category", "TargetHearingInfo" },
				{ "ModuleRelativePath", "Character/Enemy/TargetHearingInfo.h" },
				{ "ToolTip", "Is seeing target?" },
			};
#endif
			auto NewProp_bIsHearingTargetSound_SetBit = [](void* Obj){ ((UTargetHearingInfo*)Obj)->bIsHearingTargetSound = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHearingTargetSound = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsHearingTargetSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000020001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UTargetHearingInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsHearingTargetSound_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsHearingTargetSound_MetaData, ARRAY_COUNT(NewProp_bIsHearingTargetSound_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeHeardSound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastKnowLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsHearingTargetSound,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTargetHearingInfo>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTargetHearingInfo::StaticClass,
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
	IMPLEMENT_CLASS(UTargetHearingInfo, 2219306035);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTargetHearingInfo(Z_Construct_UClass_UTargetHearingInfo, &UTargetHearingInfo::StaticClass, TEXT("/Script/ResidentEvil"), TEXT("UTargetHearingInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetHearingInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
