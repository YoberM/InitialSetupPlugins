// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameUtils/Public/ComponentMediator/CoordinatorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoordinatorComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAMEUTILS_API UClass* Z_Construct_UClass_UCoordinatorComponent();
GAMEUTILS_API UClass* Z_Construct_UClass_UCoordinatorComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameUtils();
// End Cross Module References

// Begin Class UCoordinatorComponent
void UCoordinatorComponent::StaticRegisterNativesUCoordinatorComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoordinatorComponent);
UClass* Z_Construct_UClass_UCoordinatorComponent_NoRegister()
{
	return UCoordinatorComponent::StaticClass();
}
struct Z_Construct_UClass_UCoordinatorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ComponentMediator/CoordinatorComponent.h" },
		{ "ModuleRelativePath", "Public/ComponentMediator/CoordinatorComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoordinatorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCoordinatorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GameUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoordinatorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoordinatorComponent_Statics::ClassParams = {
	&UCoordinatorComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCoordinatorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCoordinatorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCoordinatorComponent()
{
	if (!Z_Registration_Info_UClass_UCoordinatorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoordinatorComponent.OuterSingleton, Z_Construct_UClass_UCoordinatorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCoordinatorComponent.OuterSingleton;
}
template<> GAMEUTILS_API UClass* StaticClass<UCoordinatorComponent>()
{
	return UCoordinatorComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCoordinatorComponent);
UCoordinatorComponent::~UCoordinatorComponent() {}
// End Class UCoordinatorComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_ComponentMediator_CoordinatorComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCoordinatorComponent, UCoordinatorComponent::StaticClass, TEXT("UCoordinatorComponent"), &Z_Registration_Info_UClass_UCoordinatorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoordinatorComponent), 2468527284U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_ComponentMediator_CoordinatorComponent_h_778653960(TEXT("/Script/GameUtils"),
	Z_CompiledInDeferFile_FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_ComponentMediator_CoordinatorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_ComponentMediator_CoordinatorComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
