// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameUtils/Public/Inventory/Item.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
GAMEUTILS_API UClass* Z_Construct_UClass_AItem();
GAMEUTILS_API UClass* Z_Construct_UClass_AItem_NoRegister();
GAMEUTILS_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameUtils();
// End Cross Module References

// Begin Class AItem Function CanUse
struct Z_Construct_UFunction_AItem_CanUse_Statics
{
	struct Item_eventCanUse_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory/Item.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AItem_CanUse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Item_eventCanUse_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AItem_CanUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Item_eventCanUse_Parms), &Z_Construct_UFunction_AItem_CanUse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_CanUse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_CanUse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_CanUse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_CanUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "CanUse", nullptr, nullptr, Z_Construct_UFunction_AItem_CanUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_CanUse_Statics::PropPointers), sizeof(Z_Construct_UFunction_AItem_CanUse_Statics::Item_eventCanUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_CanUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItem_CanUse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AItem_CanUse_Statics::Item_eventCanUse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AItem_CanUse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItem_CanUse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AItem::execCanUse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanUse();
	P_NATIVE_END;
}
// End Class AItem Function CanUse

// Begin Class AItem Function GetInventory
struct Z_Construct_UFunction_AItem_GetInventory_Statics
{
	struct Item_eventGetInventory_Parms
	{
		UInventoryComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory/Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItem_GetInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventGetInventory_Parms, ReturnValue), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_GetInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_GetInventory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_GetInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_GetInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "GetInventory", nullptr, nullptr, Z_Construct_UFunction_AItem_GetInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_GetInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_AItem_GetInventory_Statics::Item_eventGetInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_GetInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItem_GetInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AItem_GetInventory_Statics::Item_eventGetInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AItem_GetInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItem_GetInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AItem::execGetInventory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInventoryComponent**)Z_Param__Result=P_THIS->GetInventory();
	P_NATIVE_END;
}
// End Class AItem Function GetInventory

// Begin Class AItem Function OnSelected
struct Z_Construct_UFunction_AItem_OnSelected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory/Item.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_OnSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "OnSelected", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_OnSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItem_OnSelected_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AItem_OnSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItem_OnSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AItem::execOnSelected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSelected();
	P_NATIVE_END;
}
// End Class AItem Function OnSelected

// Begin Class AItem Function OnUnSelected
struct Z_Construct_UFunction_AItem_OnUnSelected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory/Item.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_OnUnSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "OnUnSelected", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_OnUnSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItem_OnUnSelected_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AItem_OnUnSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItem_OnUnSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AItem::execOnUnSelected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnUnSelected();
	P_NATIVE_END;
}
// End Class AItem Function OnUnSelected

// Begin Class AItem Function SetInventory
struct Z_Construct_UFunction_AItem_SetInventory_Statics
{
	struct Item_eventSetInventory_Parms
	{
		UInventoryComponent* NewInventory;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory/Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewInventory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItem_SetInventory_Statics::NewProp_NewInventory = { "NewInventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventSetInventory_Parms, NewInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewInventory_MetaData), NewProp_NewInventory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_SetInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_SetInventory_Statics::NewProp_NewInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_SetInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_SetInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "SetInventory", nullptr, nullptr, Z_Construct_UFunction_AItem_SetInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_SetInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_AItem_SetInventory_Statics::Item_eventSetInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_SetInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItem_SetInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AItem_SetInventory_Statics::Item_eventSetInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AItem_SetInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItem_SetInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AItem::execSetInventory)
{
	P_GET_OBJECT(UInventoryComponent,Z_Param_NewInventory);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInventory(Z_Param_NewInventory);
	P_NATIVE_END;
}
// End Class AItem Function SetInventory

// Begin Class AItem Function TryUse
struct Z_Construct_UFunction_AItem_TryUse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory/Item.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_TryUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "TryUse", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_TryUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItem_TryUse_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AItem_TryUse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItem_TryUse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AItem::execTryUse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryUse();
	P_NATIVE_END;
}
// End Class AItem Function TryUse

// Begin Class AItem Function Use
struct Z_Construct_UFunction_AItem_Use_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory/Item.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_Use_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "Use", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_Use_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItem_Use_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AItem_Use()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItem_Use_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AItem::execUse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Use();
	P_NATIVE_END;
}
// End Class AItem Function Use

// Begin Class AItem
void AItem::StaticRegisterNativesAItem()
{
	UClass* Class = AItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanUse", &AItem::execCanUse },
		{ "GetInventory", &AItem::execGetInventory },
		{ "OnSelected", &AItem::execOnSelected },
		{ "OnUnSelected", &AItem::execOnUnSelected },
		{ "SetInventory", &AItem::execSetInventory },
		{ "TryUse", &AItem::execTryUse },
		{ "Use", &AItem::execUse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItem);
UClass* Z_Construct_UClass_AItem_NoRegister()
{
	return AItem::StaticClass();
}
struct Z_Construct_UClass_AItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Inventory/Item.h" },
		{ "ModuleRelativePath", "Public/Inventory/Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Item" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Inventory/Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "Item" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Inventory/Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[] = {
		{ "Category", "Item" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Inventory/Item.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AItem_CanUse, "CanUse" }, // 2992963982
		{ &Z_Construct_UFunction_AItem_GetInventory, "GetInventory" }, // 2459510390
		{ &Z_Construct_UFunction_AItem_OnSelected, "OnSelected" }, // 3801737836
		{ &Z_Construct_UFunction_AItem_OnUnSelected, "OnUnSelected" }, // 1231494894
		{ &Z_Construct_UFunction_AItem_SetInventory, "SetInventory" }, // 4225523208
		{ &Z_Construct_UFunction_AItem_TryUse, "TryUse" }, // 219910561
		{ &Z_Construct_UFunction_AItem_Use, "Use" }, // 1348034415
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItem, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItem, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x00200800000a0809, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItem, Inventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inventory_MetaData), NewProp_Inventory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GameUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AItem_Statics::ClassParams = {
	&AItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::Class_MetaDataParams), Z_Construct_UClass_AItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AItem()
{
	if (!Z_Registration_Info_UClass_AItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItem.OuterSingleton, Z_Construct_UClass_AItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AItem.OuterSingleton;
}
template<> GAMEUTILS_API UClass* StaticClass<AItem>()
{
	return AItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AItem);
AItem::~AItem() {}
// End Class AItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Inventory_Item_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AItem, AItem::StaticClass, TEXT("AItem"), &Z_Registration_Info_UClass_AItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItem), 3650193162U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Inventory_Item_h_1228605216(TEXT("/Script/GameUtils"),
	Z_CompiledInDeferFile_FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Inventory_Item_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Inventory_Item_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
