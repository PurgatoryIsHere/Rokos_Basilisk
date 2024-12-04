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
}

// Called when the game starts or when spawned
void AC_FirstPersonCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AC_FirstPersonCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AC_FirstPersonCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("Move Forward / Backward"), this, &AC_FirstPersonCharacter::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("Move Right / Left"), this, &AC_FirstPersonCharacter::MoveRight);

	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &AC_FirstPersonCharacter::Jump);
	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Released, this, &ACharacter::StopJumping);

}

void AC_FirstPersonCharacter::MoveForward(float ActionValueY)
{
	AddMovementInput(GetActorForwardVector(), ActionValueY);
}

void AC_FirstPersonCharacter::MoveRight(float ActionValueX)
{
	AddMovementInput(GetActorRightVector(), ActionValueX);
}

void AC_FirstPersonCharacter::Jump()
{
	Super::Jump();
	JumpPref++;
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

