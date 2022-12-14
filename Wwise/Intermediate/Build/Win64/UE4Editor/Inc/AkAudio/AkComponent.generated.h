// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkAuxBus;
class UAkComponent;
class UAkSwitchValue;
class UAkTrigger;
class UAkAudioEvent;
struct FAkExternalSourceInfo;
struct FLatentActionInfo;
#ifdef AKAUDIO_AkComponent_generated_h
#error "AkComponent.generated.h already included, missing '#pragma once' in AkComponent.h"
#endif
#define AKAUDIO_AkComponent_generated_h

#define SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_SPARSE_DATA
#define SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAttenuationRadius); \
	DECLARE_FUNCTION(execSetAttenuationScalingFactor); \
	DECLARE_FUNCTION(execSetOutputBusVolume); \
	DECLARE_FUNCTION(execSetEarlyReflectionsVolume); \
	DECLARE_FUNCTION(execSetEarlyReflectionsAuxBus); \
	DECLARE_FUNCTION(execUseEarlyReflections); \
	DECLARE_FUNCTION(execUseReverbVolumes); \
	DECLARE_FUNCTION(execSetListeners); \
	DECLARE_FUNCTION(execSetStopWhenOwnerDestroyed); \
	DECLARE_FUNCTION(execSetSwitch); \
	DECLARE_FUNCTION(execPostTrigger); \
	DECLARE_FUNCTION(execPostAkEventByName); \
	DECLARE_FUNCTION(execPostAkEventAndWaitForEndAsync); \
	DECLARE_FUNCTION(execPostAkEventAndWaitForEnd); \
	DECLARE_FUNCTION(execPostAssociatedAkEventAndWaitForEndAsync); \
	DECLARE_FUNCTION(execPostAssociatedAkEventAndWaitForEnd); \
	DECLARE_FUNCTION(execSetGameObjectRadius);


#define SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAttenuationRadius); \
	DECLARE_FUNCTION(execSetAttenuationScalingFactor); \
	DECLARE_FUNCTION(execSetOutputBusVolume); \
	DECLARE_FUNCTION(execSetEarlyReflectionsVolume); \
	DECLARE_FUNCTION(execSetEarlyReflectionsAuxBus); \
	DECLARE_FUNCTION(execUseEarlyReflections); \
	DECLARE_FUNCTION(execUseReverbVolumes); \
	DECLARE_FUNCTION(execSetListeners); \
	DECLARE_FUNCTION(execSetStopWhenOwnerDestroyed); \
	DECLARE_FUNCTION(execSetSwitch); \
	DECLARE_FUNCTION(execPostTrigger); \
	DECLARE_FUNCTION(execPostAkEventByName); \
	DECLARE_FUNCTION(execPostAkEventAndWaitForEndAsync); \
	DECLARE_FUNCTION(execPostAkEventAndWaitForEnd); \
	DECLARE_FUNCTION(execPostAssociatedAkEventAndWaitForEndAsync); \
	DECLARE_FUNCTION(execPostAssociatedAkEventAndWaitForEnd); \
	DECLARE_FUNCTION(execSetGameObjectRadius);


#define SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkComponent(); \
	friend struct Z_Construct_UClass_UAkComponent_Statics; \
public: \
	DECLARE_CLASS(UAkComponent, UAkGameObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkComponent)


#define SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_INCLASS \
private: \
	static void StaticRegisterNativesUAkComponent(); \
	friend struct Z_Construct_UClass_UAkComponent_Statics; \
public: \
	DECLARE_CLASS(UAkComponent, UAkGameObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkComponent)


#define SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkComponent(UAkComponent&&); \
	NO_API UAkComponent(const UAkComponent&); \
public:


#define SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkComponent(UAkComponent&&); \
	NO_API UAkComponent(const UAkComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkComponent)


#define SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EarlyReflectionAuxBus() { return STRUCT_OFFSET(UAkComponent, EarlyReflectionAuxBus); } \
	FORCEINLINE static uint32 __PPO__EarlyReflectionAuxBusName() { return STRUCT_OFFSET(UAkComponent, EarlyReflectionAuxBusName); } \
	FORCEINLINE static uint32 __PPO__EarlyReflectionOrder() { return STRUCT_OFFSET(UAkComponent, EarlyReflectionOrder); } \
	FORCEINLINE static uint32 __PPO__EarlyReflectionBusSendGain() { return STRUCT_OFFSET(UAkComponent, EarlyReflectionBusSendGain); } \
	FORCEINLINE static uint32 __PPO__EarlyReflectionMaxPathLength() { return STRUCT_OFFSET(UAkComponent, EarlyReflectionMaxPathLength); } \
	FORCEINLINE static uint32 __PPO__roomReverbAuxBusGain() { return STRUCT_OFFSET(UAkComponent, roomReverbAuxBusGain); } \
	FORCEINLINE static uint32 __PPO__diffractionMaxEdges() { return STRUCT_OFFSET(UAkComponent, diffractionMaxEdges); } \
	FORCEINLINE static uint32 __PPO__diffractionMaxPaths() { return STRUCT_OFFSET(UAkComponent, diffractionMaxPaths); } \
	FORCEINLINE static uint32 __PPO__diffractionMaxPathLength() { return STRUCT_OFFSET(UAkComponent, diffractionMaxPathLength); }


#define SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_70_PROLOG
#define SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_PRIVATE_PROPERTY_OFFSET \
	SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_SPARSE_DATA \
	SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_RPC_WRAPPERS \
	SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_INCLASS \
	SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_PRIVATE_PROPERTY_OFFSET \
	SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_SPARSE_DATA \
	SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_INCLASS_NO_PURE_DECLS \
	SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_73_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SybGameJamWwise_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h


#define FOREACH_ENUM_EREFLECTIONFILTERBITS(op) \
	op(EReflectionFilterBits::Wall) \
	op(EReflectionFilterBits::Ceiling) \
	op(EReflectionFilterBits::Floor) 

enum class EReflectionFilterBits;
template<> AKAUDIO_API UEnum* StaticEnum<EReflectionFilterBits>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
