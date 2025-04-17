// Fill out your copyright notice in the Description page of Project Settings.


#include "C_Basic_AI.h"

// Sets default values
AC_Basic_AI::AC_Basic_AI()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Health = 30.0f;
	isDead = false;
	TimeSurvived = 0.0f;
	DamageDealt = 10.0f;
	HealthDropChance = 5.0f;

	StartingTime = 0.0f;
	ElapsedTime = 0.0f;

	KillFieldTriggered = false;
}

// Called when the game starts or when spawned
void AC_Basic_AI::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AC_Basic_AI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(!isDead)
	{
		ElapsedTime = GetWorld()->GetTimeSeconds() - StartingTime;
	}
}

// Called to bind functionality to input
void AC_Basic_AI::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AC_Basic_AI::TakeDamage(float Damage)
{
	Health -= Damage;

	if (Health == 0.0f)
	{
		this->GetMesh()->SetSimulatePhysics(true);

		if (UCharacterMovementComponent* MovementComponent = GetCharacterMovement())
		{
			MovementComponent->DisableMovement();
			this->GetController()->UnPossess();
		}

		isDead = true;

		UpdateTimeSurvived();
	}
}

bool AC_Basic_AI::KillField(float ZComponent)
{
	if (ZComponent <= 2500)
	{
		TakeDamage(30);
		KillFieldTriggered = true;
	}

	return KillFieldTriggered;
}

void AC_Basic_AI::UpdateTimeSurvived()
{
	TimeSurvived = ElapsedTime;
}

void AC_Basic_AI::AdjustDifficultySettings(FString Difficulty)
{
	if (Difficulty.Equals("Easy"))
	{
		Health = 15.0f;
		DamageDealt = 5.0f;
		GetCharacterMovement()->MaxWalkSpeed = 400.0f;
		HealthDropChance = 10.0f;
	}

	else if (Difficulty.Equals("Normal"))
	{
		Health = 30.0f;
		DamageDealt = 10.0f;
		GetCharacterMovement()->MaxWalkSpeed = 600.0f;
		HealthDropChance = 5.0f;
	}

	else if (Difficulty.Equals("Hard"))
	{
		Health = 45.0f;
		DamageDealt = 50.0f;
		GetCharacterMovement()->MaxWalkSpeed = 800.0f;
		HealthDropChance = 1.0f;
	}
}
