// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerController/PointerFeedback.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEUTILS_PointerFeedback_generated_h
#error "PointerFeedback.generated.h already included, missing '#pragma once' in PointerFeedback.h"
#endif
#define GAMEUTILS_PointerFeedback_generated_h

#define FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_PointerFeedback_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdatePointerMouseBased); \
	DECLARE_FUNCTION(execUpdatePointer);


#define FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_PointerFeedback_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPointerFeedback(); \
	friend struct Z_Construct_UClass_APointerFeedback_Statics; \
public: \
	DECLARE_CLASS(APointerFeedback, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameUtils"), NO_API) \
	DECLARE_SERIALIZER(APointerFeedback)


#define FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_PointerFeedback_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APointerFeedback(APointerFeedback&&); \
	APointerFeedback(const APointerFeedback&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APointerFeedback); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APointerFeedback); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APointerFeedback) \
	NO_API virtual ~APointerFeedback();


#define FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_PointerFeedback_h_13_PROLOG
#define FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_PointerFeedback_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_PointerFeedback_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_PointerFeedback_h_16_INCLASS_NO_PURE_DECLS \
	FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_PointerFeedback_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEUTILS_API UClass* StaticClass<class APointerFeedback>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_PlayerController_PointerFeedback_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
