// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemChangeDelegate, uint8, ItemIndex);

class AItem;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class GAMEUTILS_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UInventoryComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	FActorComponentTickFunction* ThisTickFunction) override;
public:
	UFUNCTION()
	virtual void TryUseItem();
	UFUNCTION()
	virtual bool CanUseItem();
	UFUNCTION()
	virtual void UseItem();

	UFUNCTION()
	virtual void ChangeSelectedItem(int Index);
	UFUNCTION()
	virtual void NextItem();
	UFUNCTION()
	virtual void PreviousItem();

	UFUNCTION()
	virtual void FillInitialItems();

	FOnItemChangeDelegate OnItemChange;
protected:
	UPROPERTY(EditAnywhere)
	TArray<AItem*> Items;
	UPROPERTY(EditAnywhere)
	AItem* SelectedItem { nullptr };
	UPROPERTY(EditAnywhere)
	int SelectedItemIndex { 0 };

	// Initial Items
	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<AItem>> InitialItems;
};
