// Fill out your copyright notice in the Description page of Project Settings.


#include "NetworkPlayerState.h"
#include "Net/UnrealNetwork.h"

ANetworkPlayerState::ANetworkPlayerState(){
        bReplicates = true;
}

void ANetworkPlayerState::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    // Replicate to everyone
    DOREPLIFETIME(ANetworkPlayerState, ServerSideCharacterRef);
}