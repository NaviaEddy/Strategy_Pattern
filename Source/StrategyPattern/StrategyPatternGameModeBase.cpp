// Copyright Epic Games, Inc. All Rights Reserved.


#include "StrategyPatternGameModeBase.h"
#include "NaveDeCombate.h"
#include "EstrategiaDeFuerzaBruta.h"
#include "EstrategiaDivideYVenceras.h"
#include "EstrategiaDeRetirada.h"

AStrategyPatternGameModeBase::AStrategyPatternGameModeBase()
{
	// Set this actor to call Tick() every frame.You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void AStrategyPatternGameModeBase::BeginPlay()
{
	Super::BeginPlay();

    //Registro de alertas de enemigos
    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Una diminuta nave quiere problemas")));

    //Engendramos la nave de combate
    ANaveDeCombate* NaveDeCombate = GetWorld()->SpawnActor<ANaveDeCombate>(ANaveDeCombate::StaticClass());

    //Cree la estrategia fuerza bruta y configurela en Nave de combate
    AEstrategiaDeFuerzaBruta* EstrategiaDeFuerzaBruta = GetWorld()->SpawnActor<AEstrategiaDeFuerzaBruta>(AEstrategiaDeFuerzaBruta::StaticClass());
    NaveDeCombate->AlterarManiobras(EstrategiaDeFuerzaBruta);

    //Emplee la estrategia actual
    NaveDeCombate->Emplear();

    //Registro de alertas de enemigos
    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Cuatro diminutas naves quieren problemas")));

    //Cree la estrategia divide y venceras y configurela en Nave de combate
    AEstrategiaDivideYVenceras* EstrategiaDivideYVenceras = GetWorld()->SpawnActor<AEstrategiaDivideYVenceras>(AEstrategiaDivideYVenceras::StaticClass());
    NaveDeCombate->AlterarManiobras(EstrategiaDivideYVenceras);

    //Emplee la estrategia actual
    NaveDeCombate->Emplear();

    //Registro de alertas de enemigos
    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Un grupo de naves nodriza quiere problemas")));

    //Cree la estrategia retirada y configurela en Nave de combate
    AEstrategiaDeRetirada* EstrategiaDeRetirada = GetWorld()->SpawnActor<AEstrategiaDeRetirada>(AEstrategiaDeRetirada::StaticClass());
    NaveDeCombate->AlterarManiobras(EstrategiaDeRetirada);

    //Emplee la estrategia actual
    NaveDeCombate->Emplear();

}

void AStrategyPatternGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
