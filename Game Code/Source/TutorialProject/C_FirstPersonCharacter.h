// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/PlayerController.h"
#include "C_FirstPersonCharacter.generated.h"

UCLASS()
class TUTORIALPROJECT_API AC_FirstPersonCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AC_FirstPersonCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables")
	float PistolDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables")
	float Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables")
	float ShotsFired;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables")
	float ShotsHit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables")
	float Accuracy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables")
	float JumpPref;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables")
	float DistanceMoved;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables")
	float TimeToComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables")
	float DistanceFromKill;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables")
	float TimeToKill;

	UFUNCTION(BlueprintCallable, Category = "Damage")
	void TakeDamage(float Damage);

	UFUNCTION(BlueprintCallable, Category = "Getter")
	float GetHealth() { return Health; }

	UFUNCTION(BlueprintCallable, Category = "Getter")
	float GetAccuracy() { return Accuracy; }

	UFUNCTION(BlueprintCallable, Category = "Getter")
	float GetJumpPref() { return JumpPref; }

	UFUNCTION(BlueprintCallable, Category = "Getter")
	float GetDistanceMoved() { return DistanceMoved; }

	UFUNCTION(BlueprintCallable, Category = "Getter")
	float GetTimeToComplete() { return TimeToComplete; }

	UFUNCTION(BlueprintCallable, Category = "Getter")
	float GetDistanceFromKill() { return DistanceFromKill; }

	UFUNCTION(BlueprintCallable, Category = "Getter")
	float GetTimeToKill() { return TimeToKill; }

	UFUNCTION(BlueprintCallable, Category = "Update")
	void UpdateShotsFired();

	UFUNCTION(BlueprintCallable, Category = "Update")
	void UpdateShotsHit();

	UFUNCTION(BlueprintCallable, Category = "Update")
	void UpdateAccuracy();

	UFUNCTION(BlueprintCallable, Category = "Update")
	void UpdateTimeToComplete();

	UFUNCTION(BlueprintCallable, Category = "Update")
	void UpdateDistanceFromKill(FVector PlayerPosition, FVector EnemyPosition);

	UFUNCTION(BlueprintCallable, Category = "Update")
	void AverageDistanceFromKill(float NumEnemies);

	UFUNCTION(BlueprintCallable, Category = "Update")
	void UpdateTimeToKill(float NumEnemies);


private:

	FVector StartingPosition;
	FVector PreviousPosition;
	FVector CurrentPosition;

	float StartingTime;
	float ElapsedTime;

	void MoveForward(float ActionValueY);
	void MoveRight(float ActionValueX);
	void Jump();


};
