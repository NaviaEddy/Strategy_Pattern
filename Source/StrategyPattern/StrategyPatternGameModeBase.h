// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "StrategyPatternGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class STRATEGYPATTERN_API AStrategyPatternGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AStrategyPatternGameModeBase();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	
};
