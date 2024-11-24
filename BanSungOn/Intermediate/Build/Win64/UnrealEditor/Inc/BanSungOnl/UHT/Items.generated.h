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
class UPrimitiveComponent;
struct FHitResult;
#ifdef BANSUNGONL_Items_generated_h
#error "Items.generated.h already included, missing '#pragma once' in Items.h"
#endif
#define BANSUNGONL_Items_generated_h

#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_Items_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawnItems); \
	DECLARE_FUNCTION(execOnOverlap);


#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_Items_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItems(); \
	friend struct Z_Construct_UClass_AItems_Statics; \
public: \
	DECLARE_CLASS(AItems, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BanSungOnl"), NO_API) \
	DECLARE_SERIALIZER(AItems)


#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_Items_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AItems(AItems&&); \
	AItems(const AItems&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItems); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItems); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItems) \
	NO_API virtual ~AItems();


#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_Items_h_11_PROLOG
#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_Items_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_Items_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_Items_h_14_INCLASS_NO_PURE_DECLS \
	FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_Items_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BANSUNGONL_API UClass* StaticClass<class AItems>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_Items_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
