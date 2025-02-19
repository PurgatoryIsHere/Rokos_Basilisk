// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "C_BasiliskInstance.generated.h"

/**
 * 
 */
UCLASS()
class TUTORIALPROJECT_API UC_BasiliskInstance : public UGameInstance
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables")
	float PlayerSkill;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables")
	float PlayerScore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables")
	float PlayerMovement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables")
	float PlayerPreservation;

	UFUNCTION(BlueprintCallable, Category = "Getter")
	float GetPlayerSkillRating() { return PlayerSkill; };

	UFUNCTION(BlueprintCallable, Category = "Getter")
	float GetPlayerScoreRating() { return PlayerScore; };

	UFUNCTION(BlueprintCallable, Category = "Getter")
	float GetPlayerMovementRating() { return PlayerMovement; };

	UFUNCTION(BlueprintCallable, Category = "Getter")
	float GetPlayerPreservationRating() { return PlayerPreservation; }

	UFUNCTION(BlueprintCallable, Category = "Update")
	void UpdatePlayerRatings(TArray<float> PlayerRatings);

private:

	void UpdatePlayerSkillRating(float UpdatedPlayerSkill);
	void UpdatePlayerScoreRating(float UpdatedPlayerScore);
	void UpdatePlayerMovementRating(float UpdatedPlayerMovement);
	void UpdatePlayerPreservationRating(float UpdatedPlayerPreservation);
	
};
