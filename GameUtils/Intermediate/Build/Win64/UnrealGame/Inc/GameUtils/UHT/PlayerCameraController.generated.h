// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerController/PlayerCameraController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEUTILS_PlayerCameraController_generated_h
#error "PlayerCameraController.generated.h already included, missing '#pragma once' in PlayerCameraController.h"
#endif
#define GAMEUTILS_PlayerCameraController_generated_h

#define FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_PlayerCameraController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddDirectionalMovementInput); \
	DECLARE_FUNCTION(execSetupPawn); \
	DECLARE_FUNCTION(execSetupCamera);


#define FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_PlayerCameraController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCameraController(); \
	friend struct Z_Construct_UClass_APlayerCameraController_Statics; \
public: \
	DECLARE_CLASS(APlayerCameraController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameUtils"), NO_API) \
	DECLARE_SERIALIZER(APlayerCameraController)


#define FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_PlayerCameraController_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayerCameraController(APlayerCameraController&&); \
	APlayerCameraController(const APlayerCameraController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCameraController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCameraController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCameraController) \
	NO_API virtual ~APlayerCameraController();


#define FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_PlayerCameraController_h_14_PROLOG
#define FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_PlayerCameraController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_PlayerCameraController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_PlayerCameraController_h_17_INCLASS_NO_PURE_DECLS \
	FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_PlayerCameraController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEUTILS_API UClass* StaticClass<class APlayerCameraController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_PlayerCameraController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
