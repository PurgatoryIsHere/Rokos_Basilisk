// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "C_FirstPersonCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TUTORIALPROJECT_C_FirstPersonCharacter_generated_h
#error "C_FirstPersonCharacter.generated.h already included, missing '#pragma once' in C_FirstPersonCharacter.h"
#endif
#define TUTORIALPROJECT_C_FirstPersonCharacter_generated_h

#define FID_Users_akhta_Capstone_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_FirstPersonCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateStealth); \
	DECLARE_FUNCTION(execUpdateIsDetected); \
	DECLARE_FUNCTION(execAverageTimeToKill); \
	DECLARE_FUNCTION(execUpdateTimeToKill); \
	DECLARE_FUNCTION(execAverageDistanceFromKill); \
	DECLARE_FUNCTION(execUpdateDistanceFromKill); \
	DECLARE_FUNCTION(execUpdateTimeToComplete); \
	DECLARE_FUNCTION(execUpdateAccuracy); \
	DECLARE_FUNCTION(execUpdateShotsHit); \
	DECLARE_FUNCTION(execUpdateShotsFired); \
	DECLARE_FUNCTION(execUpdateHealth); \
	DECLARE_FUNCTION(execGetStatsAsArray); \
	DECLARE_FUNCTION(execGetStealth); \
	DECLARE_FUNCTION(execGetTimeToKill); \
	DECLARE_FUNCTION(execGetDistanceFromKill); \
	DECLARE_FUNCTION(execGetTimeToComplete); \
	DECLARE_FUNCTION(execGetDistanceMoved); \
	DECLARE_FUNCTION(execGetJumpPref); \
	DECLARE_FUNCTION(execGetAccuracy); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execTakeDamage);


#define FID_Users_akhta_Capstone_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_FirstPersonCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAC_FirstPersonCharacter(); \
	friend struct Z_Construct_UClass_AC_FirstPersonCharacter_Statics; \
public: \
	DECLARE_CLASS(AC_FirstPersonCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TutorialProject"), NO_API) \
	DECLARE_SERIALIZER(AC_FirstPersonCharacter)


#define FID_Users_akhta_Capstone_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_FirstPersonCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AC_FirstPersonCharacter(AC_FirstPersonCharacter&&); \
	AC_FirstPersonCharacter(const AC_FirstPersonCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC_FirstPersonCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC_FirstPersonCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AC_FirstPersonCharacter) \
	NO_API virtual ~AC_FirstPersonCharacter();


#define FID_Users_akhta_Capstone_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_FirstPersonCharacter_h_11_PROLOG
#define FID_Users_akhta_Capstone_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_FirstPersonCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_akhta_Capstone_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_FirstPersonCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_akhta_Capstone_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_FirstPersonCharacter_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_akhta_Capstone_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_FirstPersonCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TUTORIALPROJECT_API UClass* StaticClass<class AC_FirstPersonCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_akhta_Capstone_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_FirstPersonCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
