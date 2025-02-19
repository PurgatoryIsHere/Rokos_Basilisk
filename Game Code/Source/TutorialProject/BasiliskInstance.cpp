// Fill out your copyright notice in the Description page of Project Settings.


#include "BasiliskInstance.h"

void UBasiliskInstance::UpdatePlayerRatings(TArray<float> PlayerRatings)
{
	UpdatePlayerSkillRating(PlayerRatings[0]);
	UpdatePlayerScoreRating(PlayerRatings[1]);
	UpdatePlayerMovementRating(PlayerRatings[2]);
	UpdatePlayerPreservationRating(PlayerRatings[3]);
}

void UBasiliskInstance::UpdatePlayerSkillRating(float UpdatedPlayerSkill)
{
	PlayerSkill = UpdatedPlayerSkill;
}

void UBasiliskInstance::UpdatePlayerScoreRating(float UpdatedPlayerScore)
{
	PlayerScore = UpdatedPlayerScore;
}

void UBasiliskInstance::UpdatePlayerMovementRating(float UpdatedPlayerMovement)
{
	PlayerMovement = UpdatedPlayerMovement;
}

void UBasiliskInstance::UpdatePlayerPreservationRating(float UpdatedPlayerPreservation)
{
	PlayerPreservation = UpdatedPlayerPreservation;
}
