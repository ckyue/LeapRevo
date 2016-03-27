// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LEAPMOTION_LeapEnums_generated_h
#error "LeapEnums.generated.h already included, missing '#pragma once' in LeapEnums.h"
#endif
#define LEAPMOTION_LeapEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID osu3d_cpp_Plugins_LeapMotion_Source_LeapMotion_Public_LeapEnums_h


#define FOREACH_ENUM_LEAPZONE(op) \
	op(ZONE_ERROR) \
	op(ZONE_NONE) \
	op(ZONE_HOVERING) \
	op(ZONE_TOUCHING) 
#define FOREACH_ENUM_LEAPHANDTYPE(op) \
	op(HAND_UNKNOWN) \
	op(HAND_LEFT) \
	op(HAND_RIGHT) 
#define FOREACH_ENUM_LEAPBASICDIRECTION(op) \
	op(DIRECTION_NONE) \
	op(DIRECTION_LEFT) \
	op(DIRECTION_RIGHT) \
	op(DIRECTION_UP) \
	op(DIRECTION_DOWN) \
	op(DIRECTION_AWAY) \
	op(DIRECTION_TOWARD) 
#define FOREACH_ENUM_LEAPGESTURESTATE(op) \
	op(GESTURE_STATE_INVALID) \
	op(GESTURE_STATE_START) \
	op(GESTURE_STATE_UPDATE) \
	op(GESTURE_STATE_STOP) 
#define FOREACH_ENUM_LEAPGESTURETYPE(op) \
	op(GESTURE_TYPE_INVALID) \
	op(GESTURE_TYPE_SWIPE) \
	op(GESTURE_TYPE_CIRCLE) \
	op(GESTURE_TYPE_SCREEN_TAP) \
	op(GESTURE_TYPE_KEY_TAP) 
#define FOREACH_ENUM_LEAPBONETYPE(op) \
	op(TYPE_METACARPAL) \
	op(TYPE_PROXIMAL) \
	op(TYPE_INTERMEDIATE) \
	op(TYPE_DISTAL) \
	op(TYPE_ERROR) 
#define FOREACH_ENUM_LEAPFINGERTYPE(op) \
	op(FINGER_TYPE_THUMB) \
	op(FINGER_TYPE_INDEX) \
	op(FINGER_TYPE_MIDDLE) \
	op(FINGER_TYPE_RING) \
	op(FINGER_TYPE_PINKY) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
