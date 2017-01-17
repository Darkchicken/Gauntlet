// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "GauntletHUD.generated.h"

UCLASS()
class AGauntletHUD : public AHUD
{
	GENERATED_BODY()

public:
	AGauntletHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

