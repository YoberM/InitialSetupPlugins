// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerController/CustomCamera.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEUTILS_CustomCamera_generated_h
#error "CustomCamera.generated.h already included, missing '#pragma once' in CustomCamera.h"
#endif
#define GAMEUTILS_CustomCamera_generated_h

#define FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_CustomCamera_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACustomCamera(); \
	friend struct Z_Construct_UClass_ACustomCamera_Statics; \
public: \
	DECLARE_CLASS(ACustomCamera, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameUtils"), NO_API) \
	DECLARE_SERIALIZER(ACustomCamera)


#define FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_CustomCamera_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACustomCamera(ACustomCamera&&); \
	ACustomCamera(const ACustomCamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomCamera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACustomCamera) \
	NO_API virtual ~ACustomCamera();


#define FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_CustomCamera_h_12_PROLOG
#define FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_CustomCamera_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_CustomCamera_h_15_INCLASS_NO_PURE_DECLS \
	FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_CustomCamera_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEUTILS_API UClass* StaticClass<class ACustomCamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_CustomCamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
