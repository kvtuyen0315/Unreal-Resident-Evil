// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GameConstValue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameConstValue() {}
// Cross Module References
	RESIDENTEVIL_API UEnum* Z_Construct_UEnum_ResidentEvil_EWeaponts();
	UPackage* Z_Construct_UPackage__Script_ResidentEvil();
// End Cross Module References
	static UEnum* EWeaponts_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ResidentEvil_EWeaponts, Z_Construct_UPackage__Script_ResidentEvil(), TEXT("EWeaponts"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWeaponts(EWeaponts_StaticEnum, TEXT("/Script/ResidentEvil"), TEXT("EWeaponts"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ResidentEvil_EWeaponts_CRC() { return 2468251198U; }
	UEnum* Z_Construct_UEnum_ResidentEvil_EWeaponts()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ResidentEvil();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWeaponts"), 0, Get_Z_Construct_UEnum_ResidentEvil_EWeaponts_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWeaponts::PISTOL", (int64)EWeaponts::PISTOL },
				{ "EWeaponts::RIFLE", (int64)EWeaponts::RIFLE },
				{ "EWeaponts::SHOTGUN", (int64)EWeaponts::SHOTGUN },
				{ "EWeaponts::NONE", (int64)EWeaponts::NONE },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "GameConstValue.h" },
				{ "ToolTip", "Weaponts" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ResidentEvil,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EWeaponts",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EWeaponts",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
