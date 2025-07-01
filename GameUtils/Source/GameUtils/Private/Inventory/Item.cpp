// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory/Item.h"


// Sets default values
AItem::AItem()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

bool AItem::CanUse()
{
	return true;
}

void AItem::TryUse()
{
	if (CanUse())
	{
		Use();
	}
}

void AItem::Use()
{
}

void AItem::OnSelected()
{
}

void AItem::OnUnSelected()
{
}

