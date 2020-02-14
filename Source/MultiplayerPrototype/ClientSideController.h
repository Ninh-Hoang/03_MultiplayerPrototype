// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ClientSideController.generated.h"

/**
 * 
 */

class AClientSidePawn;
class AServerSideCharacter;
class ANetworkPlayerState;
class AServerSideController;

UCLASS()
class MULTIPLAYERPROTOTYPE_API AClientSideController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AClientSideController();

	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite, Category = "Setup")
	AClientSidePawn* ClientSidePawnRef;

	UPROPERTY(Replicated, BlueprintReadWrite, Category = "Setup")
	AServerSideCharacter* ServerSideCharacterRef;

	UPROPERTY(Replicated, BlueprintReadWrite, Category = "Setup")
	ANetworkPlayerState* NetworkPlayerStateRef;

	UPROPERTY(BlueprintReadWrite, Category = "Setup")
	AServerSideController* ServerSideControllerRef;

	UPROPERTY(BlueprintReadWrite, Category = "Input")
	FVector MouseLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinimumClickDistance = 250.;

	/*UFUNCTION(BlueprintCallable, Category = "Setup")
	void SetClientSidePawn(AClientSidePawn* ClientSidePawnToSet);

	UFUNCTION(BlueprintCallable, Category = "Setup")
	AClientSidePawn* GetClientSidePawnRef();*/
};
