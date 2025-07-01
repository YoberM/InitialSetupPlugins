// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameUtils/Public/Managers/Event/EventManagerSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventManagerSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
GAMEUTILS_API UClass* Z_Construct_UClass_UEventManagerSubsystem();
GAMEUTILS_API UClass* Z_Construct_UClass_UEventManagerSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameUtils();
// End Cross Module References

// Begin Class UEventManagerSubsystem
void UEventManagerSubsystem::StaticRegisterNativesUEventManagerSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEventManagerSubsystem);
UClass* Z_Construct_UClass_UEventManagerSubsystem_NoRegister()
{
	return UEventManagerSubsystem::StaticClass();
}
struct Z_Construct_UClass_UEventManagerSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Managers/Event/EventManagerSubsystem.h" },
		{ "ModuleRelativePath", "Public/Managers/Event/EventManagerSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventManagerSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEventManagerSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_GameUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEventManagerSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEventManagerSubsystem_Statics::ClassParams = {
	&UEventManagerSubsystem::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEventManagerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UEventManagerSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEventManagerSubsystem()
{
	if (!Z_Registration_Info_UClass_UEventManagerSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEventManagerSubsystem.OuterSingleton, Z_Construct_UClass_UEventManagerSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEventManagerSubsystem.OuterSingleton;
}
template<> GAMEUTILS_API UClass* StaticClass<UEventManagerSubsystem>()
{
	return UEventManagerSubsystem::StaticClass();
}
UEventManagerSubsystem::UEventManagerSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEventManagerSubsystem);
UEventManagerSubsystem::~UEventManagerSubsystem() {}
// End Class UEventManagerSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Managers_Event_EventManagerSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEventManagerSubsystem, UEventManagerSubsystem::StaticClass, TEXT("UEventManagerSubsystem"), &Z_Registration_Info_UClass_UEventManagerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEventManagerSubsystem), 4113476152U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Managers_Event_EventManagerSubsystem_h_403777709(TEXT("/Script/GameUtils"),
	Z_CompiledInDeferFile_FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Managers_Event_EventManagerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Managers_Event_EventManagerSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
