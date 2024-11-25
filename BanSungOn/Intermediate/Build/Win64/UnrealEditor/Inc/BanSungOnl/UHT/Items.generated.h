// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/Items.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ABanSungOnlCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef BANSUNGONL_Items_generated_h
#error "Items.generated.h already included, missing '#pragma once' in Items.h"
#endif
#define BANSUNGONL_Items_generated_h

#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_Items_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void NotifyItemsPickup_Implementation(ABanSungOnlCharacter* Player, int32 ItemType); \
	DECLARE_FUNCTION(execNotifyItemsPickup); \
	DECLARE_FUNCTION(execSpawnItems); \
	DECLARE_FUNCTION(execOnOverlap);


#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_Items_h_15_CALLBACK_WRAPPERS
#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_Items_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItems(); \
	friend struct Z_Construct_UClass_AItems_Statics; \
public: \
	DECLARE_CLASS(AItems, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BanSungOnl"), NO_API) \
	DECLARE_SERIALIZER(AItems) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Type=NETFIELD_REP_START, \
		HealthItems, \
		AmmoItem, \
		NETFIELD_REP_END=AmmoItem	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_Items_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AItems(AItems&&); \
	AItems(const AItems&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItems); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItems); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItems) \
	NO_API virtual ~AItems();


#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_Items_h_12_PROLOG
#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_Items_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_Items_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_Items_h_15_CALLBACK_WRAPPERS \
	FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_Items_h_15_INCLASS_NO_PURE_DECLS \
	FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_Items_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BANSUNGONL_API UClass* StaticClass<class AItems>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_Items_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
