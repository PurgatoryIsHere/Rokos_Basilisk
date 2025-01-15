// Fill out your copyright notice in the Description page of Project Settings.


#include "C_LevelBuilderAI.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Engine/Engine.h"
#include "Misc/Paths.h"
#include "HAL/FileManager.h"

// Sets default values
AC_LevelBuilderAI::AC_LevelBuilderAI()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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

