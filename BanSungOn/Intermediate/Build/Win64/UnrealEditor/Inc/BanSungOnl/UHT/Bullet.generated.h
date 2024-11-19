// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Projectitle/Bullet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BANSUNGONL_Bullet_generated_h
#error "Bullet.generated.h already included, missing '#pragma once' in Bullet.h"
#endif
#define BANSUNGONL_Bullet_generated_h

#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Projectitle_Bullet_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetDirectionBullet_Implementation(const FVector NewDirection); \
	virtual void SetBulletProperties_Implementation(float Damage, float Speed); \
	DECLARE_FUNCTION(execSetDirectionBullet); \
	DECLARE_FUNCTION(execSetBulletProperties);


#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Projectitle_Bullet_h_12_CALLBACK_WRAPPERS
#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Projectitle_Bullet_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABullet(); \
	friend struct Z_Construct_UClass_ABullet_Statics; \
public: \
	DECLARE_CLASS(ABullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BanSungOnl"), NO_API) \
	DECLARE_SERIALIZER(ABullet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		BulletSpeed=NETFIELD_REP_START, \
		BulletDmg, \
		Direction, \
		NETFIELD_REP_END=Direction	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Projectitle_Bullet_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABullet(ABullet&&); \
	ABullet(const ABullet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABullet) \
	NO_API virtual ~ABullet();


#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Projectitle_Bullet_h_9_PROLOG
#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Projectitle_Bullet_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Projectitle_Bullet_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Projectitle_Bullet_h_12_CALLBACK_WRAPPERS \
	FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Projectitle_Bullet_h_12_INCLASS_NO_PURE_DECLS \
	FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Projectitle_Bullet_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BANSUNGONL_API UClass* StaticClass<class ABullet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Projectitle_Bullet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
