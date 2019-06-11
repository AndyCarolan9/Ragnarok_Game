// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ragnarok_Game/Ragnarok_GameGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRagnarok_GameGameMode() {}
// Cross Module References
	RAGNAROK_GAME_API UClass* Z_Construct_UClass_ARagnarok_GameGameMode_NoRegister();
	RAGNAROK_GAME_API UClass* Z_Construct_UClass_ARagnarok_GameGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Ragnarok_Game();
// End Cross Module References
	void ARagnarok_GameGameMode::StaticRegisterNativesARagnarok_GameGameMode()
	{
	}
	UClass* Z_Construct_UClass_ARagnarok_GameGameMode_NoRegister()
	{
		return ARagnarok_GameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARagnarok_GameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARagnarok_GameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Ragnarok_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARagnarok_GameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Ragnarok_GameGameMode.h" },
		{ "ModuleRelativePath", "Ragnarok_GameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARagnarok_GameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARagnarok_GameGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARagnarok_GameGameMode_Statics::ClassParams = {
		&ARagnarok_GameGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ARagnarok_GameGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARagnarok_GameGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARagnarok_GameGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARagnarok_GameGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARagnarok_GameGameMode, 3484089842);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARagnarok_GameGameMode(Z_Construct_UClass_ARagnarok_GameGameMode, &ARagnarok_GameGameMode::StaticClass, TEXT("/Script/Ragnarok_Game"), TEXT("ARagnarok_GameGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARagnarok_GameGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
