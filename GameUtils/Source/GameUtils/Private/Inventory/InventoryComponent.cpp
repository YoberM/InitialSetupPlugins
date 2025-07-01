// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory/InventoryComponent.h"

#include "Inventory/Item.h"


// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();
	FillInitialItems();
}


// Called every frame
void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                        FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UInventoryComponent::TryUseItem()
{
	if (CanUseItem())
	{
		UseItem();
	}
}

bool UInventoryComponent::CanUseItem()
{
	if (SelectedItem)
		return SelectedItem->CanUse();
	return false;
}

void UInventoryComponent::UseItem()
{
	if (SelectedItem)
		SelectedItem->Use();
}

void UInventoryComponent::ChangeSelectedItem(int Index)
{
	if (SelectedItem)
		SelectedItem->OnUnSelected();
	if (Items.Num() <= 0)
		return;
	
	SelectedItemIndex += Index;
	while (SelectedItemIndex < 0)
	{
		SelectedItemIndex += Items.Num();
	}
	SelectedItemIndex = SelectedItemIndex % Items.Num();
	SelectedItem = Items[SelectedItemIndex];
	SelectedItem->OnSelected();
	OnItemChange.Broadcast(SelectedItemIndex);
}

void UInventoryComponent::NextItem()
{
	ChangeSelectedItem(1);
}

void UInventoryComponent::PreviousItem()
{
	ChangeSelectedItem(-1);
}

void UInventoryComponent::FillInitialItems()
{
	if (InitialItems.Num() > 0)
	{
		for (TSubclassOf<AItem> InitialItem : InitialItems)
		{
			if (InitialItem)
			{
				FActorSpawnParameters SpawnParams;
				SpawnParams.Owner = GetOwner();
				SpawnParams.Instigator = Cast<APawn>(GetOwner());
				AItem* NewItem = GetWorld()->SpawnActor<AItem>(InitialItem, FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
				if (NewItem)
				{
					Items.Add(NewItem);
					NewItem->SetOwner(GetOwner());
					NewItem->SetInventory(this);
				}
			}
		}
		ChangeSelectedItem(0);
		
	}
}

