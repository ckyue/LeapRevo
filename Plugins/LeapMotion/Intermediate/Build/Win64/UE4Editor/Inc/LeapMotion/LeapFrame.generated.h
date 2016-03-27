// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULeapFrame;
struct FVector;
class ULeapToolList;
class ULeapTool;
class ULeapPointableList;
class ULeapPointable;
class ULeapInteractionBox;
class ULeapImageList;
class ULeapHandList;
class ULeapHand;
class ULeapGestureList;
class ULeapGesture;
class ULeapFingerList;
class ULeapFinger;
#ifdef LEAPMOTION_LeapFrame_generated_h
#error "LeapFrame.generated.h already included, missing '#pragma once' in LeapFrame.h"
#endif
#define LEAPMOTION_LeapFrame_generated_h

#define osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapFrame_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTranslationProbability) \
	{ \
		P_GET_OBJECT(ULeapFrame,Z_Param_frame); \
		P_FINISH; \
		*(float*)Z_Param__Result=this->TranslationProbability(Z_Param_frame); \
	} \
 \
	DECLARE_FUNCTION(execTranslation) \
	{ \
		P_GET_OBJECT(ULeapFrame,Z_Param_frame); \
		P_FINISH; \
		*(FVector*)Z_Param__Result=this->Translation(Z_Param_frame); \
	} \
 \
	DECLARE_FUNCTION(execTools) \
	{ \
		P_FINISH; \
		*(ULeapToolList**)Z_Param__Result=this->Tools(); \
	} \
 \
	DECLARE_FUNCTION(execTool) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_id); \
		P_FINISH; \
		*(ULeapTool**)Z_Param__Result=this->Tool(Z_Param_id); \
	} \
 \
	DECLARE_FUNCTION(execScaleProbability) \
	{ \
		P_GET_OBJECT(ULeapFrame,Z_Param_frame); \
		P_FINISH; \
		*(float*)Z_Param__Result=this->ScaleProbability(Z_Param_frame); \
	} \
 \
	DECLARE_FUNCTION(execScaleFactor) \
	{ \
		P_GET_OBJECT(ULeapFrame,Z_Param_frame); \
		P_FINISH; \
		*(float*)Z_Param__Result=this->ScaleFactor(Z_Param_frame); \
	} \
 \
	DECLARE_FUNCTION(execRotationProbability) \
	{ \
		P_GET_OBJECT(ULeapFrame,Z_Param_frame); \
		P_FINISH; \
		*(float*)Z_Param__Result=this->RotationProbability(Z_Param_frame); \
	} \
 \
	DECLARE_FUNCTION(execRotationAxis) \
	{ \
		P_GET_OBJECT(ULeapFrame,Z_Param_frame); \
		P_FINISH; \
		*(FVector*)Z_Param__Result=this->RotationAxis(Z_Param_frame); \
	} \
 \
	DECLARE_FUNCTION(execRotationAngleAroundAxis) \
	{ \
		P_GET_OBJECT(ULeapFrame,Z_Param_frame); \
		P_GET_STRUCT(FVector,Z_Param_axis); \
		P_FINISH; \
		*(float*)Z_Param__Result=this->RotationAngleAroundAxis(Z_Param_frame,Z_Param_axis); \
	} \
 \
	DECLARE_FUNCTION(execRotationAngle) \
	{ \
		P_GET_OBJECT(ULeapFrame,Z_Param_frame); \
		P_FINISH; \
		*(float*)Z_Param__Result=this->RotationAngle(Z_Param_frame); \
	} \
 \
	DECLARE_FUNCTION(execPointables) \
	{ \
		P_FINISH; \
		*(ULeapPointableList**)Z_Param__Result=this->Pointables(); \
	} \
 \
	DECLARE_FUNCTION(execPointable) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_id); \
		P_FINISH; \
		*(ULeapPointable**)Z_Param__Result=this->Pointable(Z_Param_id); \
	} \
 \
	DECLARE_FUNCTION(execInteractionBox) \
	{ \
		P_FINISH; \
		*(ULeapInteractionBox**)Z_Param__Result=this->InteractionBox(); \
	} \
 \
	DECLARE_FUNCTION(execImages) \
	{ \
		P_FINISH; \
		*(ULeapImageList**)Z_Param__Result=this->Images(); \
	} \
 \
	DECLARE_FUNCTION(execHands) \
	{ \
		P_FINISH; \
		*(ULeapHandList**)Z_Param__Result=this->Hands(); \
	} \
 \
	DECLARE_FUNCTION(execHand) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_id); \
		P_FINISH; \
		*(ULeapHand**)Z_Param__Result=this->Hand(Z_Param_id); \
	} \
 \
	DECLARE_FUNCTION(execGesturesSinceFrame) \
	{ \
		P_GET_OBJECT(ULeapFrame,Z_Param_frame); \
		P_FINISH; \
		*(ULeapGestureList**)Z_Param__Result=this->GesturesSinceFrame(Z_Param_frame); \
	} \
 \
	DECLARE_FUNCTION(execGestures) \
	{ \
		P_FINISH; \
		*(ULeapGestureList**)Z_Param__Result=this->Gestures(); \
	} \
 \
	DECLARE_FUNCTION(execGesture) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_id); \
		P_FINISH; \
		*(ULeapGesture**)Z_Param__Result=this->Gesture(Z_Param_id); \
	} \
 \
	DECLARE_FUNCTION(execFingers) \
	{ \
		P_FINISH; \
		*(ULeapFingerList**)Z_Param__Result=this->Fingers(); \
	} \
 \
	DECLARE_FUNCTION(execFinger) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_id); \
		P_FINISH; \
		*(ULeapFinger**)Z_Param__Result=this->Finger(Z_Param_id); \
	}


#define osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapFrame_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTranslationProbability) \
	{ \
		P_GET_OBJECT(ULeapFrame,Z_Param_frame); \
		P_FINISH; \
		*(float*)Z_Param__Result=this->TranslationProbability(Z_Param_frame); \
	} \
 \
	DECLARE_FUNCTION(execTranslation) \
	{ \
		P_GET_OBJECT(ULeapFrame,Z_Param_frame); \
		P_FINISH; \
		*(FVector*)Z_Param__Result=this->Translation(Z_Param_frame); \
	} \
 \
	DECLARE_FUNCTION(execTools) \
	{ \
		P_FINISH; \
		*(ULeapToolList**)Z_Param__Result=this->Tools(); \
	} \
 \
	DECLARE_FUNCTION(execTool) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_id); \
		P_FINISH; \
		*(ULeapTool**)Z_Param__Result=this->Tool(Z_Param_id); \
	} \
 \
	DECLARE_FUNCTION(execScaleProbability) \
	{ \
		P_GET_OBJECT(ULeapFrame,Z_Param_frame); \
		P_FINISH; \
		*(float*)Z_Param__Result=this->ScaleProbability(Z_Param_frame); \
	} \
 \
	DECLARE_FUNCTION(execScaleFactor) \
	{ \
		P_GET_OBJECT(ULeapFrame,Z_Param_frame); \
		P_FINISH; \
		*(float*)Z_Param__Result=this->ScaleFactor(Z_Param_frame); \
	} \
 \
	DECLARE_FUNCTION(execRotationProbability) \
	{ \
		P_GET_OBJECT(ULeapFrame,Z_Param_frame); \
		P_FINISH; \
		*(float*)Z_Param__Result=this->RotationProbability(Z_Param_frame); \
	} \
 \
	DECLARE_FUNCTION(execRotationAxis) \
	{ \
		P_GET_OBJECT(ULeapFrame,Z_Param_frame); \
		P_FINISH; \
		*(FVector*)Z_Param__Result=this->RotationAxis(Z_Param_frame); \
	} \
 \
	DECLARE_FUNCTION(execRotationAngleAroundAxis) \
	{ \
		P_GET_OBJECT(ULeapFrame,Z_Param_frame); \
		P_GET_STRUCT(FVector,Z_Param_axis); \
		P_FINISH; \
		*(float*)Z_Param__Result=this->RotationAngleAroundAxis(Z_Param_frame,Z_Param_axis); \
	} \
 \
	DECLARE_FUNCTION(execRotationAngle) \
	{ \
		P_GET_OBJECT(ULeapFrame,Z_Param_frame); \
		P_FINISH; \
		*(float*)Z_Param__Result=this->RotationAngle(Z_Param_frame); \
	} \
 \
	DECLARE_FUNCTION(execPointables) \
	{ \
		P_FINISH; \
		*(ULeapPointableList**)Z_Param__Result=this->Pointables(); \
	} \
 \
	DECLARE_FUNCTION(execPointable) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_id); \
		P_FINISH; \
		*(ULeapPointable**)Z_Param__Result=this->Pointable(Z_Param_id); \
	} \
 \
	DECLARE_FUNCTION(execInteractionBox) \
	{ \
		P_FINISH; \
		*(ULeapInteractionBox**)Z_Param__Result=this->InteractionBox(); \
	} \
 \
	DECLARE_FUNCTION(execImages) \
	{ \
		P_FINISH; \
		*(ULeapImageList**)Z_Param__Result=this->Images(); \
	} \
 \
	DECLARE_FUNCTION(execHands) \
	{ \
		P_FINISH; \
		*(ULeapHandList**)Z_Param__Result=this->Hands(); \
	} \
 \
	DECLARE_FUNCTION(execHand) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_id); \
		P_FINISH; \
		*(ULeapHand**)Z_Param__Result=this->Hand(Z_Param_id); \
	} \
 \
	DECLARE_FUNCTION(execGesturesSinceFrame) \
	{ \
		P_GET_OBJECT(ULeapFrame,Z_Param_frame); \
		P_FINISH; \
		*(ULeapGestureList**)Z_Param__Result=this->GesturesSinceFrame(Z_Param_frame); \
	} \
 \
	DECLARE_FUNCTION(execGestures) \
	{ \
		P_FINISH; \
		*(ULeapGestureList**)Z_Param__Result=this->Gestures(); \
	} \
 \
	DECLARE_FUNCTION(execGesture) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_id); \
		P_FINISH; \
		*(ULeapGesture**)Z_Param__Result=this->Gesture(Z_Param_id); \
	} \
 \
	DECLARE_FUNCTION(execFingers) \
	{ \
		P_FINISH; \
		*(ULeapFingerList**)Z_Param__Result=this->Fingers(); \
	} \
 \
	DECLARE_FUNCTION(execFinger) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_id); \
		P_FINISH; \
		*(ULeapFinger**)Z_Param__Result=this->Finger(Z_Param_id); \
	}


#define osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapFrame_h_9_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesULeapFrame(); \
	friend LEAPMOTION_API class UClass* Z_Construct_UClass_ULeapFrame(); \
	public: \
	DECLARE_CLASS(ULeapFrame, UObject, COMPILED_IN_FLAGS(0), 0, LeapMotion, NO_API) \
	DECLARE_SERIALIZER(ULeapFrame) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<ULeapFrame*>(this); }


#define osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapFrame_h_9_INCLASS \
	private: \
	static void StaticRegisterNativesULeapFrame(); \
	friend LEAPMOTION_API class UClass* Z_Construct_UClass_ULeapFrame(); \
	public: \
	DECLARE_CLASS(ULeapFrame, UObject, COMPILED_IN_FLAGS(0), 0, LeapMotion, NO_API) \
	DECLARE_SERIALIZER(ULeapFrame) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const { return const_cast<ULeapFrame*>(this); }


#define osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapFrame_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapFrame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapFrame) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapFrame); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapFrame); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ULeapFrame(const ULeapFrame& InCopy); \
public:


#define osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapFrame_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapFrame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ULeapFrame(const ULeapFrame& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapFrame); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapFrame); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapFrame)


#define osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapFrame_h_6_PROLOG
#define osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapFrame_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapFrame_h_9_RPC_WRAPPERS \
	osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapFrame_h_9_INCLASS \
	osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapFrame_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapFrame_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapFrame_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapFrame_h_9_INCLASS_NO_PURE_DECLS \
	osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapFrame_h_9_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LeapFrame."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapFrame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
