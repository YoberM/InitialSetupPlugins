// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Scanner/ScannerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef GAMEUTILS_ScannerComponent_generated_h
#error "ScannerComponent.generated.h already included, missing '#pragma once' in ScannerComponent.h"
#endif
#define GAMEUTILS_ScannerComponent_generated_h

#define FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Scanner_ScannerComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetScannedActorsBP); \
	DECLARE_FUNCTION(execSetScannedActors); \
	DECLARE_FUNCTION(execScan); \
	DECLARE_FUNCTION(execCanScan); \
	DECLARE_FUNCTION(execTryScan);


#define FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Scanner_ScannerComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScannerComponent(); \
	friend struct Z_Construct_UClass_UScannerComponent_Statics; \
public: \
	DECLARE_CLASS(UScannerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameUtils"), NO_API) \
	DECLARE_SERIALIZER(UScannerComponent)


#define FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Scanner_ScannerComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UScannerComponent(UScannerComponent&&); \
	UScannerComponent(const UScannerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScannerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScannerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UScannerComponent) \
	NO_API virtual ~UScannerComponent();


#define FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Scanner_ScannerComponent_h_10_PROLOG
#define FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Scanner_ScannerComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Scanner_ScannerComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Scanner_ScannerComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Scanner_ScannerComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEUTILS_API UClass* StaticClass<class UScannerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Scanner_ScannerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
