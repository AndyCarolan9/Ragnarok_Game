// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Ragnarok_GameHUD.generated.h"

UCLASS()
class ARagnarok_GameHUD : public AHUD
{
	GENERATED_BODY()

public:
	ARagnarok_GameHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

