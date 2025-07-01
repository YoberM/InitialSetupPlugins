// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameUtils/Public/PlayerController/PointerFeedback.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointerFeedback() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
GAMEUTILS_API UClass* Z_Construct_UClass_APointerFeedback();
GAMEUTILS_API UClass* Z_Construct_UClass_APointerFeedback_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameUtils();
// End Cross Module References

// Begin Class APointerFeedback Function UpdatePointer
struct Z_Construct_UFunction_APointerFeedback_UpdatePointer_Statics
{
	struct PointerFeedback_eventUpdatePointer_Parms
	{
		FVector WorldLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerController/PointerFeedback.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APointerFeedback_UpdatePointer_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointerFeedback_eventUpdatePointer_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APointerFeedback_UpdatePointer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APointerFeedback_UpdatePointer_Statics::NewProp_WorldLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APointerFeedback_UpdatePointer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APointerFeedback_UpdatePointer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APointerFeedback, nullptr, "UpdatePointer", nullptr, nullptr, Z_Construct_UFunction_APointerFeedback_UpdatePointer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APointerFeedback_UpdatePointer_Statics::PropPointers), sizeof(Z_Construct_UFunction_APointerFeedback_UpdatePointer_Statics::PointerFeedback_eventUpdatePointer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APointerFeedback_UpdatePointer_Statics::Function_MetaDataParams), Z_Construct_UFunction_APointerFeedback_UpdatePointer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APointerFeedback_UpdatePointer_Statics::PointerFeedback_eventUpdatePointer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APointerFeedback_UpdatePointer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APointerFeedback_UpdatePointer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APointerFeedback::execUpdatePointer)
{
	P_GET_STRUCT(FVector,Z_Param_WorldLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdatePointer(Z_Param_WorldLocation);
	P_NATIVE_END;
}
// End Class APointerFeedback Function UpdatePointer

// Begin Class APointerFeedback Function UpdatePointerMouseBased
struct Z_Construct_UFunction_APointerFeedback_UpdatePointerMouseBased_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Basic Functions\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerController/PointerFeedback.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APointerFeedback_UpdatePointerMouseBased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APointerFeedback, nullptr, "UpdatePointerMouseBased", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APointerFeedback_UpdatePointerMouseBased_Statics::Function_MetaDataParams), Z_Construct_UFunction_APointerFeedback_UpdatePointerMouseBased_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APointerFeedback_UpdatePointerMouseBased()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APointerFeedback_UpdatePointerMouseBased_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APointerFeedback::execUpdatePointerMouseBased)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdatePointerMouseBased();
	P_NATIVE_END;
}
// End Class APointerFeedback Function UpdatePointerMouseBased

// Begin Class APointerFeedback
void APointerFeedback::StaticRegisterNativesAPointerFeedback()
{
	UClass* Class = APointerFeedback::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdatePointer", &APointerFeedback::execUpdatePointer },
		{ "UpdatePointerMouseBased", &APointerFeedback::execUpdatePointerMouseBased },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APointerFeedback);
UClass* Z_Construct_UClass_APointerFeedback_NoRegister()
{
	return APointerFeedback::StaticClass();
}
struct Z_Construct_UClass_APointerFeedback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerController/PointerFeedback.h" },
		{ "ModuleRelativePath", "Public/PlayerController/PointerFeedback.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRootComponent_MetaData[] = {
		{ "Category", "PointerFeedback" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerController/PointerFeedback.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FeedbackMesh_MetaData[] = {
		{ "Category", "Hit Feedback" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerController/PointerFeedback.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FeedbackDecal_MetaData[] = {
		{ "Category", "Hit Feedback" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerController/PointerFeedback.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FeedbackNiagara_MetaData[] = {
		{ "Category", "Hit Feedback" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerController/PointerFeedback.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultRootComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FeedbackMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FeedbackDecal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FeedbackNiagara;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APointerFeedback_UpdatePointer, "UpdatePointer" }, // 2238895856
		{ &Z_Construct_UFunction_APointerFeedback_UpdatePointerMouseBased, "UpdatePointerMouseBased" }, // 3733933950
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APointerFeedback>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APointerFeedback_Statics::NewProp_DefaultRootComponent = { "DefaultRootComponent", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APointerFeedback, DefaultRootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultRootComponent_MetaData), NewProp_DefaultRootComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APointerFeedback_Statics::NewProp_FeedbackMesh = { "FeedbackMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APointerFeedback, FeedbackMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FeedbackMesh_MetaData), NewProp_FeedbackMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APointerFeedback_Statics::NewProp_FeedbackDecal = { "FeedbackDecal", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APointerFeedback, FeedbackDecal), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FeedbackDecal_MetaData), NewProp_FeedbackDecal_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APointerFeedback_Statics::NewProp_FeedbackNiagara = { "FeedbackNiagara", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APointerFeedback, FeedbackNiagara), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FeedbackNiagara_MetaData), NewProp_FeedbackNiagara_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APointerFeedback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointerFeedback_Statics::NewProp_DefaultRootComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointerFeedback_Statics::NewProp_FeedbackMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointerFeedback_Statics::NewProp_FeedbackDecal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointerFeedback_Statics::NewProp_FeedbackNiagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APointerFeedback_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APointerFeedback_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GameUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APointerFeedback_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APointerFeedback_Statics::ClassParams = {
	&APointerFeedback::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APointerFeedback_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APointerFeedback_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APointerFeedback_Statics::Class_MetaDataParams), Z_Construct_UClass_APointerFeedback_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APointerFeedback()
{
	if (!Z_Registration_Info_UClass_APointerFeedback.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APointerFeedback.OuterSingleton, Z_Construct_UClass_APointerFeedback_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APointerFeedback.OuterSingleton;
}
template<> GAMEUTILS_API UClass* StaticClass<APointerFeedback>()
{
	return APointerFeedback::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APointerFeedback);
APointerFeedback::~APointerFeedback() {}
// End Class APointerFeedback

// Begin Registration
struct Z_CompiledInDeferFile_FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_PointerFeedback_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APointerFeedback, APointerFeedback::StaticClass, TEXT("APointerFeedback"), &Z_Registration_Info_UClass_APointerFeedback, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APointerFeedback), 3013436413U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_PointerFeedback_h_2799580528(TEXT("/Script/GameUtils"),
	Z_CompiledInDeferFile_FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_PointerFeedback_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_PointerFeedback_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
