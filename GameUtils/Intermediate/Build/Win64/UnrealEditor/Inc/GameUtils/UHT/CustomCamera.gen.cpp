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
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
GAMEUTILS_API UClass* Z_Construct_UClass_ACustomCamera();
GAMEUTILS_API UClass* Z_Construct_UClass_ACustomCamera_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameUtils();
// End Cross Module References

// Begin Class ACustomCamera Function GetCamera
struct Z_Construct_UFunction_ACustomCamera_GetCamera_Statics
{
	struct CustomCamera_eventGetCamera_Parms
	{
		UCameraComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerController/CustomCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACustomCamera_GetCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomCamera_eventGetCamera_Parms, ReturnValue), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACustomCamera_GetCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomCamera_GetCamera_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomCamera_GetCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomCamera_GetCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomCamera, nullptr, "GetCamera", nullptr, nullptr, Z_Construct_UFunction_ACustomCamera_GetCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomCamera_GetCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACustomCamera_GetCamera_Statics::CustomCamera_eventGetCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomCamera_GetCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACustomCamera_GetCamera_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACustomCamera_GetCamera_Statics::CustomCamera_eventGetCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACustomCamera_GetCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACustomCamera_GetCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACustomCamera::execGetCamera)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCameraComponent**)Z_Param__Result=P_THIS->GetCamera();
	P_NATIVE_END;
}
// End Class ACustomCamera Function GetCamera

// Begin Class ACustomCamera Function GetSpringArmComponent
struct Z_Construct_UFunction_ACustomCamera_GetSpringArmComponent_Statics
{
	struct CustomCamera_eventGetSpringArmComponent_Parms
	{
		USpringArmComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerController/CustomCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACustomCamera_GetSpringArmComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomCamera_eventGetSpringArmComponent_Parms, ReturnValue), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACustomCamera_GetSpringArmComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomCamera_GetSpringArmComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomCamera_GetSpringArmComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomCamera_GetSpringArmComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomCamera, nullptr, "GetSpringArmComponent", nullptr, nullptr, Z_Construct_UFunction_ACustomCamera_GetSpringArmComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomCamera_GetSpringArmComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACustomCamera_GetSpringArmComponent_Statics::CustomCamera_eventGetSpringArmComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomCamera_GetSpringArmComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACustomCamera_GetSpringArmComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACustomCamera_GetSpringArmComponent_Statics::CustomCamera_eventGetSpringArmComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACustomCamera_GetSpringArmComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACustomCamera_GetSpringArmComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACustomCamera::execGetSpringArmComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USpringArmComponent**)Z_Param__Result=P_THIS->GetSpringArmComponent();
	P_NATIVE_END;
}
// End Class ACustomCamera Function GetSpringArmComponent

// Begin Class ACustomCamera Function UpdateCamera
struct Z_Construct_UFunction_ACustomCamera_UpdateCamera_Statics
{
	struct CustomCamera_eventUpdateCamera_Parms
	{
		FVector2D Direction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerController/CustomCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACustomCamera_UpdateCamera_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomCamera_eventUpdateCamera_Parms, Direction), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACustomCamera_UpdateCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomCamera_UpdateCamera_Statics::NewProp_Direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomCamera_UpdateCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomCamera_UpdateCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomCamera, nullptr, "UpdateCamera", nullptr, nullptr, Z_Construct_UFunction_ACustomCamera_UpdateCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomCamera_UpdateCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACustomCamera_UpdateCamera_Statics::CustomCamera_eventUpdateCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomCamera_UpdateCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACustomCamera_UpdateCamera_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACustomCamera_UpdateCamera_Statics::CustomCamera_eventUpdateCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACustomCamera_UpdateCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACustomCamera_UpdateCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACustomCamera::execUpdateCamera)
{
	P_GET_STRUCT(FVector2D,Z_Param_Direction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCamera(Z_Param_Direction);
	P_NATIVE_END;
}
// End Class ACustomCamera Function UpdateCamera

// Begin Class ACustomCamera
void ACustomCamera::StaticRegisterNativesACustomCamera()
{
	UClass* Class = ACustomCamera::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCamera", &ACustomCamera::execGetCamera },
		{ "GetSpringArmComponent", &ACustomCamera::execGetSpringArmComponent },
		{ "UpdateCamera", &ACustomCamera::execUpdateCamera },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPitch_MetaData[] = {
		{ "Category", "CustomCamera" },
		{ "ModuleRelativePath", "Public/PlayerController/CustomCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinPitch_MetaData[] = {
		{ "Category", "CustomCamera" },
		{ "ModuleRelativePath", "Public/PlayerController/CustomCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinPitch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACustomCamera_GetCamera, "GetCamera" }, // 1340030591
		{ &Z_Construct_UFunction_ACustomCamera_GetSpringArmComponent, "GetSpringArmComponent" }, // 850470330
		{ &Z_Construct_UFunction_ACustomCamera_UpdateCamera, "UpdateCamera" }, // 2735736105
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustomCamera>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomCamera_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomCamera, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomCamera_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomCamera, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomCamera_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomCamera, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACustomCamera_Statics::NewProp_MaxPitch = { "MaxPitch", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomCamera, MaxPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPitch_MetaData), NewProp_MaxPitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACustomCamera_Statics::NewProp_MinPitch = { "MinPitch", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomCamera, MinPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinPitch_MetaData), NewProp_MinPitch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACustomCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomCamera_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomCamera_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomCamera_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomCamera_Statics::NewProp_MaxPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomCamera_Statics::NewProp_MinPitch,
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
	FuncInfo,
	Z_Construct_UClass_ACustomCamera_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_ACustomCamera, ACustomCamera::StaticClass, TEXT("ACustomCamera"), &Z_Registration_Info_UClass_ACustomCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACustomCamera), 2699895748U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_CustomCamera_h_2093174065(TEXT("/Script/GameUtils"),
	Z_CompiledInDeferFile_FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_CustomCamera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_CustomCamera_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
