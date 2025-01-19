// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C_LevelBuilderAI.generated.h"

UCLASS()
class TUTORIALPROJECT_API AC_LevelBuilderAI : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AC_LevelBuilderAI();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	TArray<FString> PrefabNames;
	TMap<FString, TArray<int32>> PrefabRatings;

	float PlayerSkill;
	float PlayerScore;
	float PlayerMovement;
	float PlayerPreservation;

	UFUNCTION(BlueprintCallable, Category = "LevelBuilderAI")
	void LoadPrefabs(const FString& PrefabFolderPath);

	UFUNCTION(BlueprintCallable, Category = "LevelBuilderAI")
	void PrintPrefabInfo();

	UFUNCTION(BlueprintCallable, Category = "LevelBuilderAI")
	void CalculatePlayerStats(float Health, float Accuracy, float TimeToKill, float DistanceFromKill, float TimeToComplete, float JumpPref, float DistanceMoved, float Stealth);

private:

	// Helper to process the assets found
	void ProcessPrefabAssets(const TArray<FAssetData>& AssetDataList);

	void CalculatePlayerSkill(float Health, float Accuracy);
	void CalculatePlayerScore(float TimeToKill, float DistanceFromKill, float TimeToComplete);
	void CalculatePlayerMovement(float JumpPref, float DistanceMoved);
	void CalculatePlayerPreservation(float Health, float DistanceFromKill, float Stealth, float TimeToComplete);
};
