// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "C_Basic_AI.generated.h"

UCLASS()
class TUTORIALPROJECT_API AC_Basic_AI : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AC_Basic_AI();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables")
	float Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables")
	bool isDead;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables")
	float TimeSurvived;

	UFUNCTION(BlueprintCallable, Category = "Damage")
	void TakeDamage(float Damage);

	UFUNCTION(BlueprintCallable, Category = "Damage")
	bool KillField(float ZComponent);

	UFUNCTION(BlueprintCallable, Category = "Getter")
	float GetTimeSurvived() { return TimeSurvived; };

	UFUNCTION(BlueprintCallable, Category = "Update")
	void UpdateTimeSurvived();

private:

	float StartingTime;
	float ElapsedTime;
};
