// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "NetworkPlayerState.generated.h"

/**
 * 
 */

class AServerSideCharacter;

UCLASS()
class MULTIPLAYERPROTOTYPE_API ANetworkPlayerState : public APlayerState
{
	GENERATED_BODY()
	
public:
	ANetworkPlayerState();

	UPROPERTY(Replicated, BlueprintReadWrite, Category = "Setup")
	AServerSideCharacter* ServerSideCharacterRef;
};
