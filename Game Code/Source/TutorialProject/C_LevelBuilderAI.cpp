// Fill out your copyright notice in the Description page of Project Settings.


#include "C_LevelBuilderAI.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Engine/Engine.h"
#include "Misc/Paths.h"
#include "HAL/FileManager.h"
#include <set>
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
    Filter.ClassNames.Add(FName("StaticMesh")); // Filter for Static Mesh
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

    std::set<FString> AssetsToIgnore;

    AssetsToIgnore.insert("SM_doorwayPiece");
    AssetsToIgnore.insert("SM_N-Hallway");
    AssetsToIgnore.insert("SM_startPiece");
    AssetsToIgnore.insert("SmallSegment");
    AssetsToIgnore.insert("EmptyHallwayPrefab");
    AssetsToIgnore.insert("Basic_Triangle");
    AssetsToIgnore.insert("SM_MERGED_StaticMeshActor_UAID_8C554A400221CF2802_1244089197");
    AssetsToIgnore.insert("SM_EmptyHallway");
    AssetsToIgnore.insert("Box_7F096962");

    for (const FAssetData& AssetData : AssetDataList)
    {
        if (!AssetsToIgnore.contains(AssetData.AssetName.ToString()))
        {
            FString PrefabName = AssetData.AssetName.ToString();
            PrefabNames.Add(PrefabName);

            // Initialize ratings array (e.g., with default values)
            static const TArray<int32> DefaultRatings = { 0, 0, 0, 0 };
            PrefabRatings.Add(PrefabName, DefaultRatings); // Categories: [Skill, Score, Movement, Preservation]
        }
    }

    UE_LOG(LogTemp, Log, TEXT("Loaded %d prefabs."), PrefabNames.Num());
}

void AC_LevelBuilderAI::AssignPrefabRatings()
{
    if (PrefabRatings.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("No prefabs found. Please load prefabs before generating ratings."));
        return;
    }

    PrefabRatings["SM_prefab1_shortHall"] = {0, 1, 1, 5};
    PrefabRatings["SM_prefab2_longHall"] = {1, 3, 3, 6};
    PrefabRatings["SM_prefab3_nHall"] = {4, 3, 3, 5};
    PrefabRatings["SM_prefab4_circle"] = {2, 0, 2, 2};
    PrefabRatings["SM_prefab5_circleObstacle"] = {3, 0, 2, 4};
    PrefabRatings["SM_prefab6_square"] = {2, 0, 3, 2};
    PrefabRatings["SM_prefab7_choosePath4"] = {2, 5, 4, 4};
    PrefabRatings["SM_prefab8_longWinding"] = {4, 6, 6, 5};
    PrefabRatings["SM_prefab9_triangle"] = {6, 0, 1, 0};
    PrefabRatings["SM_prefab10_triangleObstacle"] = {6, 0, 1, 1};
    PrefabRatings["SM_prefab11_cross"] = {7, 0, 0, 0};
    PrefabRatings["SM_prefab12_ledge"] = {0, 6, 4, 3};
    PrefabRatings["SM_prefab13_ledgeTall"] = {0, 7, 5, 4};
    PrefabRatings["SM_prefab14_upAndDown"] = {0, 6, 3, 2};
    PrefabRatings["SM_prefab15_jumpForIt"] = {7, 5, 7, 8};
    PrefabRatings["SM_prefab16_arenaClimb"] = {3, 0, 3, 3};
    PrefabRatings["SM_prefab17_arenaPit"] = {5, 1, 4, 6};
    PrefabRatings["SM_prefab18_arenaObstacles"] = {4, 4, 2, 6};
    PrefabRatings["SM_prefab19_arenaHall"] = {6, 5, 5, 4};
    PrefabRatings["SM_prefab20_arenaEmpty"] = {2, 1, 3, 2};
    PrefabRatings["SM_prefab21_mazeSpiral"] = {4, 3, 10, 2};
    PrefabRatings["SM_prefab22_mazeStandard"] = {8, 6, 9, 8};
    PrefabRatings["SM_prefab23_mazeJump"] = {9, 7, 10, 9};
    PrefabRatings["SM_prefab24_mazeAGGGHHHHHH"] = {10, 10, 10, 10};
    PrefabRatings["SM_prefab25_mazeDontRush"] = {7, 5, 10, 8};
    PrefabRatings["SM_prefab26_modelingArch"] = {4, 1, 6, 2};
    PrefabRatings["SM_prefab27_modelingCylinderPit"] = {5, 1, 9, 2};
    PrefabRatings["SM_prefab28_spiralStairs"] = {4, 4, 8, 3};
    PrefabRatings["SM_prefab29_modelingPitTraverse"] = {7, 7, 10, 9};
    PrefabRatings["SM_prefab30_modelingPlayingWithShapes"] = {4, 5, 2, 3};

    UE_LOG(LogTemp, Log, TEXT("Generated ratings for %d prefabs."), PrefabRatings.Num());
}

void AC_LevelBuilderAI::PrintPrefabInfo()
{
    AssignPrefabRatings();

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
    float NHealth = FMath::Clamp(Health / 100, 0.1f, 1.0f);
    float NAccuracy = FMath::Clamp((Accuracy * 100) / 100, 0.1f, 1.0f);

    float SkillCalculation = round((NHealth * 40.0f) + (NAccuracy * 60.0f));

    PlayerSkill = FMath::Clamp(SkillCalculation, 1.0f, 100.0f);

    UE_LOG(LogTemp, Log, TEXT("Player Skill Rating: %.2f"), PlayerSkill);
}

void AC_LevelBuilderAI::CalculatePlayerScore(float TimeToKill, float DistanceFromKill, float TimeToComplete)
{
    // Normalize variables
    float NTimeToKill = FMath::Clamp(TimeToKill / 30.0f, 0.1f, 1.0f);
    float NDistanceFromKill = FMath::Clamp(DistanceFromKill / 2000.0f, 0.1f, 1.0f);
    float NTimeToComplete = FMath::Clamp(TimeToComplete / 180.0f, 0.1f, 1.0f);

    float ScoreCalculation = round((NTimeToKill * 25.0f) + (NDistanceFromKill * 25.0f) + (NTimeToComplete * 50.0f));

    PlayerScore = FMath::Clamp(ScoreCalculation, 1.0f, 100.0f);

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

FString AC_LevelBuilderAI::GenerateLevelGrammar()
{
    FString LevelGrammar;
    TArray<FString> PrefabPool = PrefabNames;

    while (PrefabPool.Num() > 0)
    {
        int dieRoll = FMath::RandRange(0, PrefabPool.Num() - 1);
        FString selectedPrefab = PrefabPool[dieRoll];

        if (PrefabRatings[selectedPrefab][0] <= PlayerSkill && PrefabRatings[selectedPrefab][1] <= PlayerScore &&
            PrefabRatings[selectedPrefab][2] <= PlayerMovement && PrefabRatings[selectedPrefab][3] <= PlayerPreservation)
        {
            LevelGrammar.Append(selectedPrefab + ",");
            PrefabPool.RemoveAt(dieRoll);

            PlayerSkill -= PrefabRatings[selectedPrefab][0];
            PlayerScore -= PrefabRatings[selectedPrefab][1];
            PlayerMovement -= PrefabRatings[selectedPrefab][2];
            PlayerPreservation -= PrefabRatings[selectedPrefab][3];
        }

        TArray<FString> PrefabsToRemove;

        for (const FString& Prefab : PrefabPool)
        {
            if (PrefabRatings[Prefab][0] > PlayerSkill || PrefabRatings[Prefab][1] > PlayerScore ||
                PrefabRatings[Prefab][2] > PlayerMovement || PrefabRatings[Prefab][3] > PlayerPreservation)
            {
                PrefabsToRemove.Add(Prefab);
            }
        }

        for (const FString& Prefab : PrefabsToRemove)
        {
            PrefabPool.Remove(Prefab);
        }
    }

    UE_LOG(LogTemp, Log, TEXT("Next Level Grammar: %s"), *LevelGrammar);

    return LevelGrammar;
}