// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef RAGNAROK_GAME_Ragnarok_GameProjectile_generated_h
#error "Ragnarok_GameProjectile.generated.h already included, missing '#pragma once' in Ragnarok_GameProjectile.h"
#endif
#define RAGNAROK_GAME_Ragnarok_GameProjectile_generated_h

#define Ragnarok_Game_Source_Ragnarok_Game_Ragnarok_GameProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Ragnarok_Game_Source_Ragnarok_Game_Ragnarok_GameProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Ragnarok_Game_Source_Ragnarok_Game_Ragnarok_GameProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARagnarok_GameProjectile(); \
	friend struct Z_Construct_UClass_ARagnarok_GameProjectile_Statics; \
public: \
	DECLARE_CLASS(ARagnarok_GameProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Ragnarok_Game"), NO_API) \
	DECLARE_SERIALIZER(ARagnarok_GameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Ragnarok_Game_Source_Ragnarok_Game_Ragnarok_GameProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesARagnarok_GameProjectile(); \
	friend struct Z_Construct_UClass_ARagnarok_GameProjectile_Statics; \
public: \
	DECLARE_CLASS(ARagnarok_GameProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Ragnarok_Game"), NO_API) \
	DECLARE_SERIALIZER(ARagnarok_GameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Ragnarok_Game_Source_Ragnarok_Game_Ragnarok_GameProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARagnarok_GameProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARagnarok_GameProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARagnarok_GameProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARagnarok_GameProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARagnarok_GameProjectile(ARagnarok_GameProjectile&&); \
	NO_API ARagnarok_GameProjectile(const ARagnarok_GameProjectile&); \
public:


#define Ragnarok_Game_Source_Ragnarok_Game_Ragnarok_GameProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARagnarok_GameProjectile(ARagnarok_GameProjectile&&); \
	NO_API ARagnarok_GameProjectile(const ARagnarok_GameProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARagnarok_GameProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARagnarok_GameProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARagnarok_GameProjectile)


#define Ragnarok_Game_Source_Ragnarok_Game_Ragnarok_GameProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ARagnarok_GameProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ARagnarok_GameProjectile, ProjectileMovement); }


#define Ragnarok_Game_Source_Ragnarok_Game_Ragnarok_GameProjectile_h_9_PROLOG
#define Ragnarok_Game_Source_Ragnarok_Game_Ragnarok_GameProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Ragnarok_Game_Source_Ragnarok_Game_Ragnarok_GameProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Ragnarok_Game_Source_Ragnarok_Game_Ragnarok_GameProjectile_h_12_RPC_WRAPPERS \
	Ragnarok_Game_Source_Ragnarok_Game_Ragnarok_GameProjectile_h_12_INCLASS \
	Ragnarok_Game_Source_Ragnarok_Game_Ragnarok_GameProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Ragnarok_Game_Source_Ragnarok_Game_Ragnarok_GameProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Ragnarok_Game_Source_Ragnarok_Game_Ragnarok_GameProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Ragnarok_Game_Source_Ragnarok_Game_Ragnarok_GameProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Ragnarok_Game_Source_Ragnarok_Game_Ragnarok_GameProjectile_h_12_INCLASS_NO_PURE_DECLS \
	Ragnarok_Game_Source_Ragnarok_Game_Ragnarok_GameProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Ragnarok_Game_Source_Ragnarok_Game_Ragnarok_GameProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
