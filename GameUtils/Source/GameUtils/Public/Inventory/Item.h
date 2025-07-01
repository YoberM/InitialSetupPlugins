// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

class UInventoryComponent;

UCLASS()
class GAMEUTILS_API AItem : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	UFUNCTION(BlueprintCallable)
	virtual bool CanUse();
	UFUNCTION(BlueprintCallable)
	virtual void TryUse();
	UFUNCTION(BlueprintCallable)
	virtual void Use();

	UFUNCTION(BlueprintCallable)
	virtual void OnSelected();
	UFUNCTION(BlueprintCallable)
	virtual void OnUnSelected();
	
	UFUNCTION(BlueprintCallable)
	virtual void SetInventory(UInventoryComponent* NewInventory) { Inventory = NewInventory; };
	UFUNCTION(BlueprintCallable)
	UInventoryComponent* GetInventory() { return Inventory; };

protected:
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* StaticMesh;
	UPROPERTY(EditAnywhere)
	USceneComponent* Root;
	UPROPERTY(VisibleInstanceOnly)
	UInventoryComponent* Inventory;
	
};
