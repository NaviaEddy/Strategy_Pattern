// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveDeCombate.h"

// Sets default values
ANaveDeCombate::ANaveDeCombate()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANaveDeCombate::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveDeCombate::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANaveDeCombate::AlterarManiobras(AActor* _EstrategiaDeBatalla)
{
	//Lanzar la estrategia pasada a la estrategia actual
	EstrategiaNaveDeCombate = Cast<IEstrategiaNaveDeCombate>(_EstrategiaDeBatalla);

	//Registrar error si el lanzamiento falla
	if (!EstrategiaNaveDeCombate)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("¡Lanzamiento no valido! Consulte Registro de salida para obtener mas detalles.")));
		UE_LOG(LogTemp, Error, TEXT("AlterarManiobras(): ¡El actor no es una estrategia de EstrategiaNaveDeCombate! ¿Estas seguro de que el actor implementa esa interfaz?"));
	}

}

void ANaveDeCombate::Emplear()
{
	//Registrar error si la estrategia actual es NULL
	if (!EstrategiaNaveDeCombate) {
		UE_LOG(LogTemp, Error, TEXT("Emplear(): EstrategiaNaveDeCombate es NULL, asegurese de que este inicializada."));
		return;
	}
	//Ejecutar la maniobra de estrategia actual
	EstrategiaNaveDeCombate->Maniobra();

}

