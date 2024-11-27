// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaveSystem/WaveSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BANSUNGONL_WaveSystem_generated_h
#error "WaveSystem.generated.h already included, missing '#pragma once' in WaveSystem.h"
#endif
#define BANSUNGONL_WaveSystem_generated_h

#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_WaveSystem_WaveSystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckEndWave); \
	DECLARE_FUNCTION(execSetupWave); \
	DECLARE_FUNCTION(execSpawnZombies);


#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_WaveSystem_WaveSystem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWaveSystem(); \
	friend struct Z_Construct_UClass_AWaveSystem_Statics; \
public: \
	DECLARE_CLASS(AWaveSystem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BanSungOnl"), NO_API) \
	DECLARE_SERIALIZER(AWaveSystem)


#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_WaveSystem_WaveSystem_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWaveSystem(AWaveSystem&&); \
	AWaveSystem(const AWaveSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaveSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaveSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWaveSystem) \
	NO_API virtual ~AWaveSystem();


#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_WaveSystem_WaveSystem_h_11_PROLOG
#define FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_WaveSystem_WaveSystem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_WaveSystem_WaveSystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_WaveSystem_WaveSystem_h_14_INCLASS_NO_PURE_DECLS \
	FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_WaveSystem_WaveSystem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BANSUNGONL_API UClass* StaticClass<class AWaveSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_WaveSystem_WaveSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
