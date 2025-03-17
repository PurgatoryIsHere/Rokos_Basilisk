// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "C_Basic_AI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TUTORIALPROJECT_C_Basic_AI_generated_h
#error "C_Basic_AI.generated.h already included, missing '#pragma once' in C_Basic_AI.h"
#endif
#define TUTORIALPROJECT_C_Basic_AI_generated_h

#define FID_Users_EdgeN_OneDrive_Documents_Unreal_Projects_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_Basic_AI_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateTimeSurvived); \
	DECLARE_FUNCTION(execGetTimeSurvived); \
	DECLARE_FUNCTION(execKillField); \
	DECLARE_FUNCTION(execTakeDamage);


#define FID_Users_EdgeN_OneDrive_Documents_Unreal_Projects_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_Basic_AI_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAC_Basic_AI(); \
	friend struct Z_Construct_UClass_AC_Basic_AI_Statics; \
public: \
	DECLARE_CLASS(AC_Basic_AI, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TutorialProject"), NO_API) \
	DECLARE_SERIALIZER(AC_Basic_AI)


#define FID_Users_EdgeN_OneDrive_Documents_Unreal_Projects_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_Basic_AI_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AC_Basic_AI(AC_Basic_AI&&); \
	AC_Basic_AI(const AC_Basic_AI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC_Basic_AI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC_Basic_AI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AC_Basic_AI) \
	NO_API virtual ~AC_Basic_AI();


#define FID_Users_EdgeN_OneDrive_Documents_Unreal_Projects_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_Basic_AI_h_11_PROLOG
#define FID_Users_EdgeN_OneDrive_Documents_Unreal_Projects_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_Basic_AI_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_EdgeN_OneDrive_Documents_Unreal_Projects_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_Basic_AI_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_EdgeN_OneDrive_Documents_Unreal_Projects_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_Basic_AI_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_EdgeN_OneDrive_Documents_Unreal_Projects_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_Basic_AI_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TUTORIALPROJECT_API UClass* StaticClass<class AC_Basic_AI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_EdgeN_OneDrive_Documents_Unreal_Projects_Rokos_Basilisk_Game_Code_Source_TutorialProject_C_Basic_AI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
