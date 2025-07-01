// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/InventoryComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEUTILS_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define GAMEUTILS_InventoryComponent_generated_h

#define FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Inventory_InventoryComponent_h_9_DELEGATE \
GAMEUTILS_API void FOnItemChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnItemChangeDelegate, uint8 ItemIndex);


#define FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Inventory_InventoryComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFillInitialItems); \
	DECLARE_FUNCTION(execPreviousItem); \
	DECLARE_FUNCTION(execNextItem); \
	DECLARE_FUNCTION(execChangeSelectedItem); \
	DECLARE_FUNCTION(execUseItem); \
	DECLARE_FUNCTION(execCanUseItem); \
	DECLARE_FUNCTION(execTryUseItem);


#define FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Inventory_InventoryComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameUtils"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Inventory_InventoryComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventoryComponent(UInventoryComponent&&); \
	UInventoryComponent(const UInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryComponent) \
	NO_API virtual ~UInventoryComponent();


#define FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Inventory_InventoryComponent_h_13_PROLOG
#define FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Inventory_InventoryComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Inventory_InventoryComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Inventory_InventoryComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Inventory_InventoryComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEUTILS_API UClass* StaticClass<class UInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Inventory_InventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
