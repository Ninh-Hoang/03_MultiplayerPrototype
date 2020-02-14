// Fill out your copyright notice in the Description page of Project Settings.


#include "ClientSideController.h"
#include "Net/UnrealNetwork.h"
#include "ServerSideCharacter.h"
#include "NetworkPlayerState.h"

AClientSideController::AClientSideController() {
    bReplicates = true;
}

void AClientSideController::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    // Replicate to everyone
    DOREPLIFETIME(AClientSideController, ServerSideCharacterRef);
    DOREPLIFETIME(AClientSideController, NetworkPlayerStateRef);
}

void AClientSideController::BeginPlay() {
    Super::BeginPlay();
}

/*void AClientSideController::SetClientSidePawn(AClientSidePawn* ClientSidePawnToSet){
    ClientSidePawnRef = ClientSidePawnToSet;
}

AClientSidePawn* AClientSideController::GetClientSidePawnRef()
{
    return ClientSidePawnRef;
}*/
