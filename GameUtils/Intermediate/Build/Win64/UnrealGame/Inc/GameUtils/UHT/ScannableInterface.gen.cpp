// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameUtils/Public/Scanner/ScannableInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScannableInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GAMEUTILS_API UClass* Z_Construct_UClass_UScannableInterface();
GAMEUTILS_API UClass* Z_Construct_UClass_UScannableInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameUtils();
// End Cross Module References

// Begin Interface UScannableInterface
void UScannableInterface::StaticRegisterNativesUScannableInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScannableInterface);
UClass* Z_Construct_UClass_UScannableInterface_NoRegister()
{
	return UScannableInterface::StaticClass();
}
struct Z_Construct_UClass_UScannableInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Scanner/ScannableInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IScannableInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UScannableInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_GameUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScannableInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UScannableInterface_Statics::ClassParams = {
	&UScannableInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UScannableInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UScannableInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UScannableInterface()
{
	if (!Z_Registration_Info_UClass_UScannableInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScannableInterface.OuterSingleton, Z_Construct_UClass_UScannableInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UScannableInterface.OuterSingleton;
}
template<> GAMEUTILS_API UClass* StaticClass<UScannableInterface>()
{
	return UScannableInterface::StaticClass();
}
UScannableInterface::UScannableInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UScannableInterface);
UScannableInterface::~UScannableInterface() {}
// End Interface UScannableInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Scanner_ScannableInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UScannableInterface, UScannableInterface::StaticClass, TEXT("UScannableInterface"), &Z_Registration_Info_UClass_UScannableInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScannableInterface), 2223739767U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Scanner_ScannableInterface_h_4274496433(TEXT("/Script/GameUtils"),
	Z_CompiledInDeferFile_FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Scanner_ScannableInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Scanner_ScannableInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
