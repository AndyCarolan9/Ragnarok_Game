// Fill out your copyright notice in the Description page of Project Settings.

#include "Ragnarok_GameBombActor.h"
#include "Engine/Engine.h"

// Sets default values
ARagnarok_GameBombActor::ARagnarok_GameBombActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ExplodeDelay = 2.0f;
}

void ARagnarok_GameBombActor::Explode()
{
}

// Called when the game starts or when spawned
void ARagnarok_GameBombActor::BeginPlay()
{
	Super::BeginPlay();
	
	FTimerHandle Explode_TimerHandle;
	GetWorldTimerManager().SetTimer(Explode_TimerHandle, this, &ARagnarok_GameBombActor::Explode, ExplodeDelay);
}

// Called every frame
void ARagnarok_GameBombActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

