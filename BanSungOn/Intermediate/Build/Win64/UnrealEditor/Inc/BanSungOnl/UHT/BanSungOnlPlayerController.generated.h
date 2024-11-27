// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BanSungOnlPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BANSUNGONL_BanSungOnlPlayerController_generated_h
#error "BanSungOnlPlayerController.generated.h already included, missing '#pragma once' in BanSungOnlPlayerController.h"
#endif
#define BANSUNGONL_BanSungOnlPlayerController_generated_h

#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlPlayerController_h_18_DELEGATE \
BANSUNGONL_API void FRemoveUI_DelegateWrapper(const FMulticastScriptDelegate& RemoveUI);


#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlPlayerController_h_19_DELEGATE \
BANSUNGONL_API void FRemoveWinUI_DelegateWrapper(const FMulticastScriptDelegate& RemoveWinUI);


#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlPlayerController_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerPlayAgain_Implementation(); \
	virtual void Client_PlayFireSound_Implementation(); \
	virtual void Server_FireRifle_Implementation(FVector Mouse); \
	virtual void Server_FirePistol_Implementation(); \
	virtual void Client_PlayReloadSound_Implementation(); \
	virtual void Server_Reload_Implementation(); \
	virtual void Server_SetRotation_Implementation(const FVector MousePosition); \
	DECLARE_FUNCTION(execOnRep_IsWinPlayAgain); \
	DECLARE_FUNCTION(execOnRep_IsPlayAgain); \
	DECLARE_FUNCTION(execServerPlayAgain); \
	DECLARE_FUNCTION(execClient_PlayFireSound); \
	DECLARE_FUNCTION(execServer_FireRifle); \
	DECLARE_FUNCTION(execServer_FirePistol); \
	DECLARE_FUNCTION(execClient_PlayReloadSound); \
	DECLARE_FUNCTION(execServer_Reload); \
	DECLARE_FUNCTION(execServer_SetRotation);


#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlPlayerController_h_24_CALLBACK_WRAPPERS
#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlPlayerController_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABanSungOnlPlayerController(); \
	friend struct Z_Construct_UClass_ABanSungOnlPlayerController_Statics; \
public: \
	DECLARE_CLASS(ABanSungOnlPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BanSungOnl"), NO_API) \
	DECLARE_SERIALIZER(ABanSungOnlPlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PlayAgain=NETFIELD_REP_START, \
		WinPlayAgain, \
		NETFIELD_REP_END=WinPlayAgain	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlPlayerController_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABanSungOnlPlayerController(ABanSungOnlPlayerController&&); \
	ABanSungOnlPlayerController(const ABanSungOnlPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABanSungOnlPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABanSungOnlPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABanSungOnlPlayerController) \
	NO_API virtual ~ABanSungOnlPlayerController();


#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlPlayerController_h_21_PROLOG
#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlPlayerController_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlPlayerController_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlPlayerController_h_24_CALLBACK_WRAPPERS \
	FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlPlayerController_h_24_INCLASS_NO_PURE_DECLS \
	FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlPlayerController_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BANSUNGONL_API UClass* StaticClass<class ABanSungOnlPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
