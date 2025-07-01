// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerController/PlayerCameraController.h"

#include "PlayerController/CustomCamera.h"


APlayerCameraController::APlayerCameraController()
{
}

void APlayerCameraController::BeginPlay()
{
	Super::BeginPlay();
	SetupCamera();
	SetupPawn();
}

void APlayerCameraController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APlayerCameraController::SetupCamera()
{
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	CustomCamera = GetWorld()->SpawnActor<ACustomCamera>(CameraToSpawn, FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
	if (CustomCamera)
	{
		SetViewTarget(CustomCamera);
	}
}

void APlayerCameraController::SetupPawn()
{
	if (CustomCamera && GetPawn())
	{
		CustomCamera->AttachToComponent(GetPawn()->GetRootComponent(),FAttachmentTransformRules::SnapToTargetIncludingScale);
	}
}

void APlayerCameraController::AddDirectionalMovementInput(FVector2D Direction)
{
	if (APawn* ControlledPawn = GetPawn())
	{
		FVector ForwardDirection = ControlledPawn->GetActorForwardVector();
		FVector RightDirection = ControlledPawn->GetActorRightVector();

		ForwardDirection = ForwardDirection * Direction.X;
		RightDirection = RightDirection * Direction.Y;
		
		ControlledPawn->AddMovementInput(ForwardDirection,1,false);
		ControlledPawn->AddMovementInput(RightDirection,1,false);
	}
}

void APlayerCameraController::MoveCamera(FVector2D Direction)
{
}
