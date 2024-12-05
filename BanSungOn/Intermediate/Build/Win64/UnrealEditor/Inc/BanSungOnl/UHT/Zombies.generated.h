// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Zombie/Zombies.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ABanSungOnlCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef BANSUNGONL_Zombies_generated_h
#error "Zombies.generated.h already included, missing '#pragma once' in Zombies.h"
#endif
#define BANSUNGONL_Zombies_generated_h

#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Zombie_Zombies_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_AtkCharacter_Implementation(); \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnOverlap); \
	DECLARE_FUNCTION(execRandomItems); \
	DECLARE_FUNCTION(execTakeDmg); \
	DECLARE_FUNCTION(execServer_AtkCharacter);


#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Zombie_Zombies_h_27_CALLBACK_WRAPPERS
#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Zombie_Zombies_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZombies(); \
	friend struct Z_Construct_UClass_AZombies_Statics; \
public: \
	DECLARE_CLASS(AZombies, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BanSungOnl"), NO_API) \
	DECLARE_SERIALIZER(AZombies) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		HealthZomb=NETFIELD_REP_START, \
		DamageZomb, \
		CanAtk, \
		NETFIELD_REP_END=CanAtk	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Zombie_Zombies_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AZombies(AZombies&&); \
	AZombies(const AZombies&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombies); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombies); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AZombies) \
	NO_API virtual ~AZombies();


#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Zombie_Zombies_h_24_PROLOG
#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Zombie_Zombies_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Zombie_Zombies_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Zombie_Zombies_h_27_CALLBACK_WRAPPERS \
	FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Zombie_Zombies_h_27_INCLASS_NO_PURE_DECLS \
	FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Zombie_Zombies_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BANSUNGONL_API UClass* StaticClass<class AZombies>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Zombie_Zombies_h


#define FOREACH_ENUM_ENUMITEMS(op) \
	op(EnumItems::Health) \
	op(EnumItems::AmmoRif) \
	op(EnumItems::AmmoPis) 

enum class EnumItems : uint8;
template<> struct TIsUEnumClass<EnumItems> { enum { Value = true }; };
template<> BANSUNGONL_API UEnum* StaticEnum<EnumItems>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
