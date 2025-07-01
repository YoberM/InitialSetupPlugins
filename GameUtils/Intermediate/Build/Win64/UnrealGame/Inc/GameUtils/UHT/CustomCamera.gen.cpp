// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameUtils/Public/PlayerController/CustomCamera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomCamera() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
GAMEUTILS_API UClass* Z_Construct_UClass_ACustomCamera();
GAMEUTILS_API UClass* Z_Construct_UClass_ACustomCamera_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameUtils();
// End Cross Module References

// Begin Class ACustomCamera
void ACustomCamera::StaticRegisterNativesACustomCamera()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACustomCamera);
UClass* Z_Construct_UClass_ACustomCamera_NoRegister()
{
	return ACustomCamera::StaticClass();
}
struct Z_Construct_UClass_ACustomCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerController/CustomCamera.h" },
		{ "ModuleRelativePath", "Public/PlayerController/CustomCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "CustomCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerController/CustomCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "CustomCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerController/CustomCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "CustomCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerController/CustomCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustomCamera>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomCamera_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomCamera, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomCamera_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomCamera, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomCamera_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomCamera, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACustomCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomCamera_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomCamera_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomCamera_Statics::NewProp_Camera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomCamera_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACustomCamera_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GameUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomCamera_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACustomCamera_Statics::ClassParams = {
	&ACustomCamera::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACustomCamera_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACustomCamera_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomCamera_Statics::Class_MetaDataParams), Z_Construct_UClass_ACustomCamera_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACustomCamera()
{
	if (!Z_Registration_Info_UClass_ACustomCamera.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACustomCamera.OuterSingleton, Z_Construct_UClass_ACustomCamera_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACustomCamera.OuterSingleton;
}
template<> GAMEUTILS_API UClass* StaticClass<ACustomCamera>()
{
	return ACustomCamera::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACustomCamera);
ACustomCamera::~ACustomCamera() {}
// End Class ACustomCamera

// Begin Registration
struct Z_CompiledInDeferFile_FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_CustomCamera_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACustomCamera, ACustomCamera::StaticClass, TEXT("ACustomCamera"), &Z_Registration_Info_UClass_ACustomCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACustomCamera), 902198705U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_CustomCamera_h_1092478606(TEXT("/Script/GameUtils"),
	Z_CompiledInDeferFile_FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_CustomCamera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_CustomCamera_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
