// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameUtils/Public/PlayerController/PlayerCameraController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCameraController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
GAMEUTILS_API UClass* Z_Construct_UClass_ACustomCamera_NoRegister();
GAMEUTILS_API UClass* Z_Construct_UClass_APlayerCameraController();
GAMEUTILS_API UClass* Z_Construct_UClass_APlayerCameraController_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameUtils();
// End Cross Module References

// Begin Class APlayerCameraController Function AddDirectionalMovementInput
struct Z_Construct_UFunction_APlayerCameraController_AddDirectionalMovementInput_Statics
{
	struct PlayerCameraController_eventAddDirectionalMovementInput_Parms
	{
		FVector2D Direction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Temporal Movements\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerController/PlayerCameraController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Temporal Movements" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCameraController_AddDirectionalMovementInput_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCameraController_eventAddDirectionalMovementInput_Parms, Direction), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraController_AddDirectionalMovementInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraController_AddDirectionalMovementInput_Statics::NewProp_Direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraController_AddDirectionalMovementInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraController_AddDirectionalMovementInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraController, nullptr, "AddDirectionalMovementInput", nullptr, nullptr, Z_Construct_UFunction_APlayerCameraController_AddDirectionalMovementInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraController_AddDirectionalMovementInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCameraController_AddDirectionalMovementInput_Statics::PlayerCameraController_eventAddDirectionalMovementInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraController_AddDirectionalMovementInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCameraController_AddDirectionalMovementInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerCameraController_AddDirectionalMovementInput_Statics::PlayerCameraController_eventAddDirectionalMovementInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCameraController_AddDirectionalMovementInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraController_AddDirectionalMovementInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCameraController::execAddDirectionalMovementInput)
{
	P_GET_STRUCT(FVector2D,Z_Param_Direction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddDirectionalMovementInput(Z_Param_Direction);
	P_NATIVE_END;
}
// End Class APlayerCameraController Function AddDirectionalMovementInput

// Begin Class APlayerCameraController Function MoveCamera
struct Z_Construct_UFunction_APlayerCameraController_MoveCamera_Statics
{
	struct PlayerCameraController_eventMoveCamera_Parms
	{
		FVector2D Direction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerController/PlayerCameraController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCameraController_MoveCamera_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCameraController_eventMoveCamera_Parms, Direction), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraController_MoveCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraController_MoveCamera_Statics::NewProp_Direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraController_MoveCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraController_MoveCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraController, nullptr, "MoveCamera", nullptr, nullptr, Z_Construct_UFunction_APlayerCameraController_MoveCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraController_MoveCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCameraController_MoveCamera_Statics::PlayerCameraController_eventMoveCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraController_MoveCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCameraController_MoveCamera_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerCameraController_MoveCamera_Statics::PlayerCameraController_eventMoveCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCameraController_MoveCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraController_MoveCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCameraController::execMoveCamera)
{
	P_GET_STRUCT(FVector2D,Z_Param_Direction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveCamera(Z_Param_Direction);
	P_NATIVE_END;
}
// End Class APlayerCameraController Function MoveCamera

// Begin Class APlayerCameraController Function SetupCamera
struct Z_Construct_UFunction_APlayerCameraController_SetupCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerController/PlayerCameraController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraController_SetupCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraController, nullptr, "SetupCamera", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraController_SetupCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCameraController_SetupCamera_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerCameraController_SetupCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraController_SetupCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCameraController::execSetupCamera)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupCamera();
	P_NATIVE_END;
}
// End Class APlayerCameraController Function SetupCamera

// Begin Class APlayerCameraController Function SetupPawn
struct Z_Construct_UFunction_APlayerCameraController_SetupPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerController/PlayerCameraController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraController_SetupPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCameraController, nullptr, "SetupPawn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraController_SetupPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCameraController_SetupPawn_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerCameraController_SetupPawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraController_SetupPawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCameraController::execSetupPawn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupPawn();
	P_NATIVE_END;
}
// End Class APlayerCameraController Function SetupPawn

// Begin Class APlayerCameraController
void APlayerCameraController::StaticRegisterNativesAPlayerCameraController()
{
	UClass* Class = APlayerCameraController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddDirectionalMovementInput", &APlayerCameraController::execAddDirectionalMovementInput },
		{ "MoveCamera", &APlayerCameraController::execMoveCamera },
		{ "SetupCamera", &APlayerCameraController::execSetupCamera },
		{ "SetupPawn", &APlayerCameraController::execSetupPawn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerCameraController);
UClass* Z_Construct_UClass_APlayerCameraController_NoRegister()
{
	return APlayerCameraController::StaticClass();
}
struct Z_Construct_UClass_APlayerCameraController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PlayerController/PlayerCameraController.h" },
		{ "ModuleRelativePath", "Public/PlayerController/PlayerCameraController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraToSpawn_MetaData[] = {
		{ "Category", "PlayerCameraController" },
		{ "ModuleRelativePath", "Public/PlayerController/PlayerCameraController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomCamera_MetaData[] = {
		{ "Category", "PlayerCameraController" },
		{ "ModuleRelativePath", "Public/PlayerController/PlayerCameraController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CameraToSpawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomCamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerCameraController_AddDirectionalMovementInput, "AddDirectionalMovementInput" }, // 456987746
		{ &Z_Construct_UFunction_APlayerCameraController_MoveCamera, "MoveCamera" }, // 4273951612
		{ &Z_Construct_UFunction_APlayerCameraController_SetupCamera, "SetupCamera" }, // 486439717
		{ &Z_Construct_UFunction_APlayerCameraController_SetupPawn, "SetupPawn" }, // 1802580317
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCameraController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerCameraController_Statics::NewProp_CameraToSpawn = { "CameraToSpawn", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCameraController, CameraToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_ACustomCamera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraToSpawn_MetaData), NewProp_CameraToSpawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCameraController_Statics::NewProp_CustomCamera = { "CustomCamera", nullptr, (EPropertyFlags)0x0020080000020805, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCameraController, CustomCamera), Z_Construct_UClass_ACustomCamera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomCamera_MetaData), NewProp_CustomCamera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerCameraController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraController_Statics::NewProp_CameraToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraController_Statics::NewProp_CustomCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerCameraController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_GameUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCameraController_Statics::ClassParams = {
	&APlayerCameraController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APlayerCameraController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraController_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerCameraController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerCameraController()
{
	if (!Z_Registration_Info_UClass_APlayerCameraController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCameraController.OuterSingleton, Z_Construct_UClass_APlayerCameraController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerCameraController.OuterSingleton;
}
template<> GAMEUTILS_API UClass* StaticClass<APlayerCameraController>()
{
	return APlayerCameraController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCameraController);
APlayerCameraController::~APlayerCameraController() {}
// End Class APlayerCameraController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_PlayerCameraController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCameraController, APlayerCameraController::StaticClass, TEXT("APlayerCameraController"), &Z_Registration_Info_UClass_APlayerCameraController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCameraController), 3452924830U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_PlayerCameraController_h_2656283686(TEXT("/Script/GameUtils"),
	Z_CompiledInDeferFile_FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_PlayerCameraController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_PlayerCameraController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
