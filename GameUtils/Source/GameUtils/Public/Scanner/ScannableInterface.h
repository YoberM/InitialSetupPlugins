// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ScannableInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UScannableInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GAMEUTILS_API IScannableInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual FText GetScanName() const = 0;
	virtual void OnScanned() = 0;
};
