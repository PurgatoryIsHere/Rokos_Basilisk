// Fill out your copyright notice in the Description page of Project Settings.


#include "C_FirstPersonCharacter.h"

// Sets default values
AC_FirstPersonCharacter::AC_FirstPersonCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PistolDamage = 15.0f;
	Health = 100.0f;
	ShotsFired = 0.0f;
	ShotsHit = 0.0f;
	Accuracy = 0.0f;
	JumpPref = 0.0f;
	DistanceMoved = 0.0f;
	TimeToComplete = 0.0f;
	DistanceFromKill = 0.0f;
	TimeToKill = 0.0f;

	StartingPosition = {};
	PreviousPosition = {};
	CurrentPosition = {};

	StartingTime = 0.0f;
	ElapsedTime = 0.0f;

	isDetected = false;
	DetectionTime = 0.0f;
	DetectionStartTime = 0.0f;

	GetCharacterMovement()->MaxWalkSpeed = 600.f;
	SprintSpeedMultiplier = 2.0f;
}

// Called when the game starts or when spawned
void AC_FirstPersonCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	StartingPosition = GetActorLocation();
	PreviousPosition = StartingPosition;
}

// Called every frame
void AC_FirstPersonCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CurrentPosition = GetActorLocation();

	float DistanceMovedThisFrame = FVector::Dist(CurrentPosition, PreviousPosition);

	DistanceMoved += DistanceMovedThisFrame;

	PreviousPosition = CurrentPosition;

	ElapsedTime = GetWorld()->GetTimeSeconds() - StartingTime;
}

// Called to bind functionality to input
void AC_FirstPersonCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("Move Forward / Backward"), this, &AC_FirstPersonCharacter::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("Move Right / Left"), this, &AC_FirstPersonCharacter::MoveRight);

	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &AC_FirstPersonCharacter::Jump);
	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAction(TEXT("Sprint"), EInputEvent::IE_Pressed, this, &AC_FirstPersonCharacter::StartSprinting);
	PlayerInputComponent->BindAction(TEXT("Sprint"), EInputEvent::IE_Released, this, &AC_FirstPersonCharacter::StopSprinting);

}

void AC_FirstPersonCharacter::MoveForward(float ActionValueY)
{
	AddMovementInput(GetActorForwardVector(), (ActionValueY * SprintSpeedMultiplier));
}

void AC_FirstPersonCharacter::MoveRight(float ActionValueX)
{
	AddMovementInput(GetActorRightVector(), (ActionValueX * SprintSpeedMultiplier));
}

void AC_FirstPersonCharacter::Jump()
{
	Super::Jump();
	JumpPref++;
}

void AC_FirstPersonCharacter::StartSprinting()
{
	GetCharacterMovement()->MaxWalkSpeed *= SprintSpeedMultiplier;
}

void AC_FirstPersonCharacter::StopSprinting()
{
	GetCharacterMovement()->MaxWalkSpeed /= SprintSpeedMultiplier; // Reset to normal speed
}

void AC_FirstPersonCharacter::TakeDamage(float Damage)
{
	Health -= Damage;

	if (Health <= 0.0f)
	{
		this->GetMesh()->SetSimulatePhysics(true);

		APlayerController* PlayerController = Cast<APlayerController>(GetController());

		if (PlayerController)
		{
			DisableInput(PlayerController);
		}
	}
}

void AC_FirstPersonCharacter::UpdateHealth(float RemainingHealth)
{
	Health = RemainingHealth;
}

void AC_FirstPersonCharacter::UpdateShotsFired()
{
	ShotsFired += 1.0;
}

void AC_FirstPersonCharacter::UpdateShotsHit()
{
	ShotsHit += 1.0;
}

void AC_FirstPersonCharacter::UpdateAccuracy()
{
	Accuracy = ShotsHit / ShotsFired;
}

void AC_FirstPersonCharacter::UpdateTimeToComplete()
{
	TimeToComplete = ElapsedTime;
}

void AC_FirstPersonCharacter::UpdateDistanceFromKill(FVector PlayerPostion, FVector EnemyPosition)
{
	float Distance = FVector::Dist(PlayerPostion, EnemyPosition);

	DistanceFromKill += Distance;
}

void AC_FirstPersonCharacter::AverageDistanceFromKill(float NumEnemies)
{
	DistanceFromKill /= NumEnemies;
}

void AC_FirstPersonCharacter::UpdateTimeToKill(float EnemyTimeSurvived)
{
	TimeToKill += EnemyTimeSurvived;
}

void AC_FirstPersonCharacter::AverageTimeToKill(float NumEnemies)
{
	TimeToKill /= NumEnemies;
}

void AC_FirstPersonCharacter::UpdateIsDetected(bool isSeeingPlayer)
{
	if (isSeeingPlayer && !isDetected)
	{
		isDetected = true;
		DetectionStartTime = GetWorld()->GetTimeSeconds();
	}

	else if(!isSeeingPlayer && isDetected)
	{
		isDetected = false;
		DetectionTime += GetWorld()->GetTimeSeconds() - DetectionStartTime;
	}
}

void AC_FirstPersonCharacter::UpdateStealth()
{
	Stealth = TimeToComplete - DetectionTime;
}

TArray<float> AC_FirstPersonCharacter::GetStatsAsArray()
{
	PlayerStats.Add(Health);
	PlayerStats.Add(Accuracy);
	PlayerStats.Add(TimeToKill);
	PlayerStats.Add(DistanceFromKill);
	PlayerStats.Add(TimeToComplete);
	PlayerStats.Add(JumpPref);
	PlayerStats.Add(DistanceMoved);
	PlayerStats.Add(Stealth);

	return PlayerStats;
}


