// Fill out your copyright notice in the Description page of Project Settings.


#include "C_BasiliskInstance.h"

void UC_BasiliskInstance::UpdatePlayerRatings(TArray<float> PlayerRatings)
{
	UpdatePlayerSkillRating(PlayerRatings[0]);
	UpdatePlayerScoreRating(PlayerRatings[1]);
	UpdatePlayerMovementRating(PlayerRatings[2]);
	UpdatePlayerPreservationRating(PlayerRatings[3]);
}

void UC_BasiliskInstance::UpdatePlayerSkillRating(float UpdatedPlayerSkill)
{
	PlayerSkill = UpdatedPlayerSkill;
}

void UC_BasiliskInstance::UpdatePlayerScoreRating(float UpdatedPlayerScore)
{
	PlayerScore = UpdatedPlayerScore;
}

void UC_BasiliskInstance::UpdatePlayerMovementRating(float UpdatedPlayerMovement)
{
	PlayerMovement = UpdatedPlayerMovement;
}

void UC_BasiliskInstance::UpdatePlayerPreservationRating(float UpdatedPlayerPreservation)
{
	PlayerPreservation = UpdatedPlayerPreservation;
}
