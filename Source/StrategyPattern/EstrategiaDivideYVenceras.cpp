// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaDivideYVenceras.h"

// Sets default values
AEstrategiaDivideYVenceras::AEstrategiaDivideYVenceras()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategiaDivideYVenceras::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstrategiaDivideYVenceras::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategiaDivideYVenceras::Maniobra()
{
	//Ejecuta el tipo de rutina de esta estrategia
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Aleja las naves entre si y ataca a cada uno por separado")));
}

