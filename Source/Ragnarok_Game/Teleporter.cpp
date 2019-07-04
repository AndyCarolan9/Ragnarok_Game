// Fill out your copyright notice in the Description page of Project Settings.

#include "Teleporter.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "GameFramework/PlayerController.h"

// Sets default values
ATeleporter::ATeleporter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATeleporter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATeleporter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATeleporter::SetDestinationOrdinates(FVector coordinates) {
	this->DestinationOrdinates = coordinates;
}

void ATeleporter::SetIsUsed() {
	if (this->isUsed) {
		this->isUsed = false;
	}
	else {
		this->isUsed = true;
	}
}

void ATeleporter::TeleportPlayer() {
	if (!this->isUsed) {
		GetWorld()->GetFirstPlayerController()->GetPawn()->SetActorLocation(this->DestinationOrdinates);

		SetIsUsed();
	}
}

