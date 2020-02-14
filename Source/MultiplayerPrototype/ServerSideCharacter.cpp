// Fill out your copyright notice in the Description page of Project Settings.


#include "ServerSideCharacter.h"

// Sets default values
AServerSideCharacter::AServerSideCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AServerSideCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AServerSideCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AServerSideCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

