// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Scanner/ScannableInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEUTILS_ScannableInterface_generated_h
#error "ScannableInterface.generated.h already included, missing '#pragma once' in ScannableInterface.h"
#endif
#define GAMEUTILS_ScannableInterface_generated_h

#define FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Scanner_ScannableInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEUTILS_API UScannableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UScannableInterface(UScannableInterface&&); \
	UScannableInterface(const UScannableInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEUTILS_API, UScannableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScannableInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScannableInterface) \
	GAMEUTILS_API virtual ~UScannableInterface();


#define FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Scanner_ScannableInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUScannableInterface(); \
	friend struct Z_Construct_UClass_UScannableInterface_Statics; \
public: \
	DECLARE_CLASS(UScannableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GameUtils"), GAMEUTILS_API) \
	DECLARE_SERIALIZER(UScannableInterface)


#define FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Scanner_ScannableInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Scanner_ScannableInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Scanner_ScannableInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Scanner_ScannableInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IScannableInterface() {} \
public: \
	typedef UScannableInterface UClassType; \
	typedef IScannableInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Scanner_ScannableInterface_h_10_PROLOG
#define FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Scanner_ScannableInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Scanner_ScannableInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEUTILS_API UClass* StaticClass<class UScannableInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Maykol_Projects_FALSEGOD_Plugins_GameUtils_Source_GameUtils_Public_Scanner_ScannableInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
