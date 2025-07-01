// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameUtils/Public/Scanner/ScannerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScannerComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAMEUTILS_API UClass* Z_Construct_UClass_UScannerComponent();
GAMEUTILS_API UClass* Z_Construct_UClass_UScannerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameUtils();
// End Cross Module References

// Begin Class UScannerComponent Function CanScan
struct Z_Construct_UFunction_UScannerComponent_CanScan_Statics
{
	struct ScannerComponent_eventCanScan_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Scanner" },
		{ "ModuleRelativePath", "Public/Scanner/ScannerComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UScannerComponent_CanScan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ScannerComponent_eventCanScan_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScannerComponent_CanScan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ScannerComponent_eventCanScan_Parms), &Z_Construct_UFunction_UScannerComponent_CanScan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScannerComponent_CanScan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScannerComponent_CanScan_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScannerComponent_CanScan_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScannerComponent_CanScan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScannerComponent, nullptr, "CanScan", nullptr, nullptr, Z_Construct_UFunction_UScannerComponent_CanScan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScannerComponent_CanScan_Statics::PropPointers), sizeof(Z_Construct_UFunction_UScannerComponent_CanScan_Statics::ScannerComponent_eventCanScan_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScannerComponent_CanScan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScannerComponent_CanScan_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UScannerComponent_CanScan_Statics::ScannerComponent_eventCanScan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScannerComponent_CanScan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScannerComponent_CanScan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScannerComponent::execCanScan)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanScan();
	P_NATIVE_END;
}
// End Class UScannerComponent Function CanScan

// Begin Class UScannerComponent Function GetScannedActorsBP
struct Z_Construct_UFunction_UScannerComponent_GetScannedActorsBP_Statics
{
	struct ScannerComponent_eventGetScannedActorsBP_Parms
	{
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Scanner" },
		{ "ModuleRelativePath", "Public/Scanner/ScannerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScannerComponent_GetScannedActorsBP_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UScannerComponent_GetScannedActorsBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScannerComponent_eventGetScannedActorsBP_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScannerComponent_GetScannedActorsBP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScannerComponent_GetScannedActorsBP_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScannerComponent_GetScannedActorsBP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScannerComponent_GetScannedActorsBP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScannerComponent_GetScannedActorsBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScannerComponent, nullptr, "GetScannedActorsBP", nullptr, nullptr, Z_Construct_UFunction_UScannerComponent_GetScannedActorsBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScannerComponent_GetScannedActorsBP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UScannerComponent_GetScannedActorsBP_Statics::ScannerComponent_eventGetScannedActorsBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScannerComponent_GetScannedActorsBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScannerComponent_GetScannedActorsBP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UScannerComponent_GetScannedActorsBP_Statics::ScannerComponent_eventGetScannedActorsBP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScannerComponent_GetScannedActorsBP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScannerComponent_GetScannedActorsBP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScannerComponent::execGetScannedActorsBP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetScannedActorsBP();
	P_NATIVE_END;
}
// End Class UScannerComponent Function GetScannedActorsBP

// Begin Class UScannerComponent Function Scan
struct Z_Construct_UFunction_UScannerComponent_Scan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Scanner" },
		{ "ModuleRelativePath", "Public/Scanner/ScannerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScannerComponent_Scan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScannerComponent, nullptr, "Scan", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScannerComponent_Scan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScannerComponent_Scan_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UScannerComponent_Scan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScannerComponent_Scan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScannerComponent::execScan)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Scan();
	P_NATIVE_END;
}
// End Class UScannerComponent Function Scan

// Begin Class UScannerComponent Function SetScannedActors
struct Z_Construct_UFunction_UScannerComponent_SetScannedActors_Statics
{
	struct ScannerComponent_eventSetScannedActors_Parms
	{
		TArray<AActor*> DetectedActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Scanner" },
		{ "ModuleRelativePath", "Public/Scanner/ScannerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectedActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DetectedActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DetectedActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScannerComponent_SetScannedActors_Statics::NewProp_DetectedActors_Inner = { "DetectedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UScannerComponent_SetScannedActors_Statics::NewProp_DetectedActors = { "DetectedActors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScannerComponent_eventSetScannedActors_Parms, DetectedActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectedActors_MetaData), NewProp_DetectedActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScannerComponent_SetScannedActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScannerComponent_SetScannedActors_Statics::NewProp_DetectedActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScannerComponent_SetScannedActors_Statics::NewProp_DetectedActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScannerComponent_SetScannedActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScannerComponent_SetScannedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScannerComponent, nullptr, "SetScannedActors", nullptr, nullptr, Z_Construct_UFunction_UScannerComponent_SetScannedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScannerComponent_SetScannedActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UScannerComponent_SetScannedActors_Statics::ScannerComponent_eventSetScannedActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScannerComponent_SetScannedActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScannerComponent_SetScannedActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UScannerComponent_SetScannedActors_Statics::ScannerComponent_eventSetScannedActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScannerComponent_SetScannedActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScannerComponent_SetScannedActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScannerComponent::execSetScannedActors)
{
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_DetectedActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetScannedActors(Z_Param_Out_DetectedActors);
	P_NATIVE_END;
}
// End Class UScannerComponent Function SetScannedActors

// Begin Class UScannerComponent Function TryScan
struct Z_Construct_UFunction_UScannerComponent_TryScan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Scanner" },
		{ "ModuleRelativePath", "Public/Scanner/ScannerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScannerComponent_TryScan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScannerComponent, nullptr, "TryScan", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScannerComponent_TryScan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScannerComponent_TryScan_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UScannerComponent_TryScan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScannerComponent_TryScan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScannerComponent::execTryScan)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryScan();
	P_NATIVE_END;
}
// End Class UScannerComponent Function TryScan

// Begin Class UScannerComponent
void UScannerComponent::StaticRegisterNativesUScannerComponent()
{
	UClass* Class = UScannerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanScan", &UScannerComponent::execCanScan },
		{ "GetScannedActorsBP", &UScannerComponent::execGetScannedActorsBP },
		{ "Scan", &UScannerComponent::execScan },
		{ "SetScannedActors", &UScannerComponent::execSetScannedActors },
		{ "TryScan", &UScannerComponent::execTryScan },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScannerComponent);
UClass* Z_Construct_UClass_UScannerComponent_NoRegister()
{
	return UScannerComponent::StaticClass();
}
struct Z_Construct_UClass_UScannerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Scanner/ScannerComponent.h" },
		{ "ModuleRelativePath", "Public/Scanner/ScannerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScanRadius_MetaData[] = {
		{ "Category", "Scanner" },
		{ "ModuleRelativePath", "Public/Scanner/ScannerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectedActors_MetaData[] = {
		{ "Category", "Scanner" },
		{ "ModuleRelativePath", "Public/Scanner/ScannerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScanRadius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DetectedActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DetectedActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UScannerComponent_CanScan, "CanScan" }, // 2890066748
		{ &Z_Construct_UFunction_UScannerComponent_GetScannedActorsBP, "GetScannedActorsBP" }, // 390486866
		{ &Z_Construct_UFunction_UScannerComponent_Scan, "Scan" }, // 1210173245
		{ &Z_Construct_UFunction_UScannerComponent_SetScannedActors, "SetScannedActors" }, // 2169260121
		{ &Z_Construct_UFunction_UScannerComponent_TryScan, "TryScan" }, // 4037747102
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScannerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScannerComponent_Statics::NewProp_ScanRadius = { "ScanRadius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScannerComponent, ScanRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScanRadius_MetaData), NewProp_ScanRadius_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScannerComponent_Statics::NewProp_DetectedActors_Inner = { "DetectedActors", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UScannerComponent_Statics::NewProp_DetectedActors = { "DetectedActors", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScannerComponent, DetectedActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectedActors_MetaData), NewProp_DetectedActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScannerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScannerComponent_Statics::NewProp_ScanRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScannerComponent_Statics::NewProp_DetectedActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScannerComponent_Statics::NewProp_DetectedActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScannerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UScannerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GameUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScannerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UScannerComponent_Statics::ClassParams = {
	&UScannerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UScannerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UScannerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UScannerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UScannerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UScannerComponent()
{
	if (!Z_Registration_Info_UClass_UScannerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScannerComponent.OuterSingleton, Z_Construct_UClass_UScannerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UScannerComponent.OuterSingleton;
}
template<> GAMEUTILS_API UClass* StaticClass<UScannerComponent>()
{
	return UScannerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UScannerComponent);
UScannerComponent::~UScannerComponent() {}
// End Class UScannerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Scanner_ScannerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UScannerComponent, UScannerComponent::StaticClass, TEXT("UScannerComponent"), &Z_Registration_Info_UClass_UScannerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScannerComponent), 2344578467U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Scanner_ScannerComponent_h_2260168676(TEXT("/Script/GameUtils"),
	Z_CompiledInDeferFile_FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Scanner_ScannerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Scanner_ScannerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
