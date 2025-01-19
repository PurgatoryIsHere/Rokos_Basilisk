// Fill out your copyright notice in the Description page of Project Settings.


#include "C_LevelBuilderAI.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Engine/Engine.h"
#include "Misc/Paths.h"
#include "HAL/FileManager.h"
#include <cmath>

// Sets default values
AC_LevelBuilderAI::AC_LevelBuilderAI()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    PlayerSkill = 0.0f;
    PlayerScore = 0.0f;
    PlayerMovement = 0.0f;
    PlayerPreservation = 0.0f;

}

// Called when the game starts or when spawned
void AC_LevelBuilderAI::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AC_LevelBuilderAI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AC_LevelBuilderAI::LoadPrefabs(const FString& PrefabFolderPath)
{
    // Use AssetRegistry to find assets in the folder
    FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
    IAssetRegistry& AssetRegistry = AssetRegistryModule.Get();

    TArray<FAssetData> AssetDataList;
    FARFilter Filter;
    Filter.PackagePaths.Add(*PrefabFolderPath); // Use the provided folder path
    Filter.ClassNames.Add(FName("Blueprint")); // Filter for Blueprint Classes
    Filter.bRecursivePaths = true;            // Include subdirectories

    // Query the asset registry
    AssetRegistry.GetAssets(Filter, AssetDataList);

    // Process the retrieved assets
    ProcessPrefabAssets(AssetDataList);
}

void AC_LevelBuilderAI::ProcessPrefabAssets(const TArray<FAssetData>& AssetDataList)
{
    PrefabNames.Empty(); // Clear any existing data
    PrefabRatings.Empty();

    for (const FAssetData& AssetData : AssetDataList)
    {
        FString PrefabName = AssetData.AssetName.ToString();
        PrefabNames.Add(PrefabName);

        // Initialize ratings array (e.g., with default values)
        static const TArray<int32> DefaultRatings = { 0, 0, 0, 0 };
        PrefabRatings.Add(PrefabName, DefaultRatings); // Categories: [Skill, Score, Movement, Preservation]
    }

    UE_LOG(LogTemp, Log, TEXT("Loaded %d prefabs."), PrefabNames.Num());
}

void AC_LevelBuilderAI::PrintPrefabInfo()
{
    UE_LOG(LogTemp, Log, TEXT("Prefab Information:"));

    for (const FString& PrefabName : PrefabNames)
    {
        const TArray<int32>* Ratings = PrefabRatings.Find(PrefabName);

        if (Ratings)
        {
            FString RatingsString = FString::JoinBy(*Ratings, TEXT(", "), [](int32 Rating) { return FString::FromInt(Rating); });
            UE_LOG(LogTemp, Log, TEXT("Prefab: %s | Ratings: [%s]"), *PrefabName, *RatingsString);
        }
    }
}

void AC_LevelBuilderAI::CalculatePlayerStats(float Health, float Accuracy, float TimeToKill, float DistanceFromKill, float TimeToComplete, float JumpPref, float DistanceMoved, float Stealth)
{
    CalculatePlayerSkill(Health, Accuracy);
    CalculatePlayerScore(TimeToKill, DistanceFromKill, TimeToComplete);
    CalculatePlayerMovement(JumpPref, DistanceMoved);
    CalculatePlayerPreservation(Health, DistanceFromKill, Stealth, TimeToComplete);
}

void AC_LevelBuilderAI::CalculatePlayerSkill(float Health, float Accuracy)
{
    float SkillCalculation = round((Health * (Accuracy * 100)) / 100.0f);

    PlayerSkill = FMath::Clamp(SkillCalculation, 1.0f, 100.0f);

    UE_LOG(LogTemp, Log, TEXT("Player Skill Rating: %.2f"), PlayerSkill);
}

void AC_LevelBuilderAI::CalculatePlayerScore(float TimeToKill, float DistanceFromKill, float TimeToComplete)
{
    PlayerScore = round(((DistanceFromKill *.5) / (TimeToKill * 1.25)) / TimeToComplete); //Not sure if this works

    UE_LOG(LogTemp, Log, TEXT("Player Score Rating: %.2f"), PlayerScore);
  
}

void AC_LevelBuilderAI::CalculatePlayerMovement(float JumpPref, float DistanceMoved)
{
    // Normalize variables
    float NJumpPref = FMath::Clamp(JumpPref / 10.0f, 0.1f, 1.0f);
    float NDistanceMoved = FMath::Clamp(DistanceMoved / 10000.0f, 0.1f, 1.0f);

    float MovementCalculation = round((NJumpPref * 30.0f) + (NDistanceMoved * 70.0f));

    PlayerMovement = FMath::Clamp(MovementCalculation, 1.0f, 100.0f);

    UE_LOG(LogTemp, Log, TEXT("Player Movement Rating: %.2f"), PlayerMovement);
}

void AC_LevelBuilderAI::CalculatePlayerPreservation(float Health, float DistanceFromKill, float Stealth, float TimeToComplete) 
{
    // Normalize variables
    float NHealth = FMath::Clamp(Health / 100.0f, 0.1f, 1.0f);
    float NDistanceFromKill = FMath::Clamp(DistanceFromKill / 2000.0f, 0.1f, 1.0f);
    float NStealth = FMath::Clamp(Stealth / TimeToComplete, 0.0f, 1.0f);

    float PreservationCalculation = round((NHealth * 40.0f) + (NDistanceFromKill * 25.0f) + (NStealth * 35.0f));

    PlayerPreservation = FMath::Clamp(PreservationCalculation, 1.0f, 100.0f);

    UE_LOG(LogTemp, Log, TEXT("Player Preservation Rating: %.2f"), PlayerPreservation);
}