// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameUtils_init() {}
	GAMEUTILS_API UFunction* Z_Construct_UDelegateFunction_GameUtils_OnDeath__DelegateSignature();
	GAMEUTILS_API UFunction* Z_Construct_UDelegateFunction_GameUtils_OnItemChangeDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GameUtils;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GameUtils()
	{
		if (!Z_Registration_Info_UPackage__Script_GameUtils.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GameUtils_OnDeath__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GameUtils_OnItemChangeDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GameUtils",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x255A817C,
				0xAE7070DA,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GameUtils.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GameUtils.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GameUtils(Z_Construct_UPackage__Script_GameUtils, TEXT("/Script/GameUtils"), Z_Registration_Info_UPackage__Script_GameUtils, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x255A817C, 0xAE7070DA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
