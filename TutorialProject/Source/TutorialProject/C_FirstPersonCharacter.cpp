// Fill out your copyright notice in the Description page of Project Settings.


#include "C_FirstPersonCharacter.h"

// Sets default values
AC_FirstPersonCharacter::AC_FirstPersonCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PistolDamage = 15.0f;
	Health = 100.0f;
	ShotsFired = 0;
	ShotsHit = 0;
	Accuracy = 0.0f;
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

	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &ACharacter::Jump);
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

