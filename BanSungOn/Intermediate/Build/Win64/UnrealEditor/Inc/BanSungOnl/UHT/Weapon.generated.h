// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/Weapon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BANSUNGONL_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define BANSUNGONL_Weapon_generated_h

#define FID_Code_C___Training_BanSungOnline_BanSungOnl_BanSungOn_Source_BanSungOnl_Weapon_Weapon_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_ReloadSound_Implementation(); \
	virtual void Client_ShootSound_Implementation(); \
	DECLARE_FUNCTION(execResetAmmo); \
	DECLARE_FUNCTION(execClient_ReloadSound); \
	DECLARE_FUNCTION(execClient_ShootSound);


#define FID_Code_C___Training_BanSungOnline_BanSungOnl_BanSungOn_Source_BanSungOnl_Weapon_Weapon_h_13_CALLBACK_WRAPPERS
#define FID_Code_C___Training_BanSungOnline_BanSungOnl_BanSungOn_Source_BanSungOnl_Weapon_Weapon_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BanSungOnl"), NO_API) \
	DECLARE_SERIALIZER(AWeapon) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Ammo=NETFIELD_REP_START, \
		CurAmmo, \
		NETFIELD_REP_END=CurAmmo	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Code_C___Training_BanSungOnline_BanSungOnl_BanSungOn_Source_BanSungOnl_Weapon_Weapon_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWeapon(AWeapon&&); \
	AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon) \
	NO_API virtual ~AWeapon();


#define FID_Code_C___Training_BanSungOnline_BanSungOnl_BanSungOn_Source_BanSungOnl_Weapon_Weapon_h_10_PROLOG
#define FID_Code_C___Training_BanSungOnline_BanSungOnl_BanSungOn_Source_BanSungOnl_Weapon_Weapon_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Code_C___Training_BanSungOnline_BanSungOnl_BanSungOn_Source_BanSungOnl_Weapon_Weapon_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Code_C___Training_BanSungOnline_BanSungOnl_BanSungOn_Source_BanSungOnl_Weapon_Weapon_h_13_CALLBACK_WRAPPERS \
	FID_Code_C___Training_BanSungOnline_BanSungOnl_BanSungOn_Source_BanSungOnl_Weapon_Weapon_h_13_INCLASS_NO_PURE_DECLS \
	FID_Code_C___Training_BanSungOnline_BanSungOnl_BanSungOn_Source_BanSungOnl_Weapon_Weapon_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BANSUNGONL_API UClass* StaticClass<class AWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Code_C___Training_BanSungOnline_BanSungOnl_BanSungOn_Source_BanSungOnl_Weapon_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
