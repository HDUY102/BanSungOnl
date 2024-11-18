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

#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlCharacter_h_8_DELEGATE \
BANSUNGONL_API void FShowHealth_DelegateWrapper(const FMulticastScriptDelegate& ShowHealth);


#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlCharacter_h_9_DELEGATE \
BANSUNGONL_API void FShowWinGame_DelegateWrapper(const FMulticastScriptDelegate& ShowWinGame);


#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlCharacter_h_14_INCLASS_NO_PURE_DECLS \
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
		NETFIELD_REP_END=Health	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABanSungOnlCharacter(ABanSungOnlCharacter&&); \
	ABanSungOnlCharacter(const ABanSungOnlCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABanSungOnlCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABanSungOnlCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABanSungOnlCharacter) \
	NO_API virtual ~ABanSungOnlCharacter();


#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlCharacter_h_11_PROLOG
#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlCharacter_h_14_INCLASS_NO_PURE_DECLS \
	FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BANSUNGONL_API UClass* StaticClass<class ABanSungOnlCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
