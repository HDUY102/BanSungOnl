// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BanSungOnlCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BANSUNGONL_BanSungOnlCharacter_generated_h
#error "BanSungOnlCharacter.generated.h already included, missing '#pragma once' in BanSungOnlCharacter.h"
#endif
#define BANSUNGONL_BanSungOnlCharacter_generated_h

#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlCharacter_h_11_DELEGATE \
BANSUNGONL_API void FShowHealth_DelegateWrapper(const FMulticastScriptDelegate& ShowHealth);


#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlCharacter_h_12_DELEGATE \
BANSUNGONL_API void FShowWinGame_DelegateWrapper(const FMulticastScriptDelegate& ShowWinGame);


#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlCharacter_h_13_DELEGATE \
BANSUNGONL_API void FShowLoseGame_DelegateWrapper(const FMulticastScriptDelegate& ShowLoseGame);


#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_SpawnPistol_Implementation(); \
	virtual void Server_SpawnRifle_Implementation(); \
	virtual void Server_EquipRifle_Implementation(); \
	virtual void Server_EquipPistol_Implementation(); \
	virtual void Client_ShowWBLoseGame_Implementation(); \
	DECLARE_FUNCTION(execServer_SpawnPistol); \
	DECLARE_FUNCTION(execServer_SpawnRifle); \
	DECLARE_FUNCTION(execServer_EquipRifle); \
	DECLARE_FUNCTION(execServer_EquipPistol); \
	DECLARE_FUNCTION(execOnRep_IsDead); \
	DECLARE_FUNCTION(execClient_ShowWBLoseGame); \
	DECLARE_FUNCTION(execPlayerTakeDmg); \
	DECLARE_FUNCTION(execOnRep_ChangeHealth);


#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlCharacter_h_18_CALLBACK_WRAPPERS
#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABanSungOnlCharacter(); \
	friend struct Z_Construct_UClass_ABanSungOnlCharacter_Statics; \
public: \
	DECLARE_CLASS(ABanSungOnlCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BanSungOnl"), NO_API) \
	DECLARE_SERIALIZER(ABanSungOnlCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		bIsDead, \
		CurWeapon, \
		NETFIELD_REP_END=CurWeapon	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABanSungOnlCharacter(ABanSungOnlCharacter&&); \
	ABanSungOnlCharacter(const ABanSungOnlCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABanSungOnlCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABanSungOnlCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABanSungOnlCharacter) \
	NO_API virtual ~ABanSungOnlCharacter();


#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlCharacter_h_15_PROLOG
#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlCharacter_h_18_CALLBACK_WRAPPERS \
	FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlCharacter_h_18_INCLASS_NO_PURE_DECLS \
	FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BANSUNGONL_API UClass* StaticClass<class ABanSungOnlCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
