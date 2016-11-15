#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;
// UnityEngine.Material
struct Material_t3870600107;
// Waypoint[]
struct WaypointU5BU5D_t2459722300;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Waypoint
struct  Waypoint_t765160481  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean Waypoint::occupied
	bool ___occupied_2;
	// System.Boolean Waypoint::active
	bool ___active_3;
	// System.Boolean Waypoint::triggered
	bool ___triggered_4;
	// UnityEngine.Color Waypoint::active_color
	Color_t4194546905  ___active_color_5;
	// UnityEngine.Color Waypoint::hilight_color
	Color_t4194546905  ___hilight_color_6;
	// UnityEngine.Color Waypoint::disabled_color
	Color_t4194546905  ___disabled_color_7;
	// System.Single Waypoint::animation_scale
	float ___animation_scale_8;
	// System.Single Waypoint::animation_speed
	float ___animation_speed_9;
	// UnityEngine.Vector3 Waypoint::_origional_scale
	Vector3_t4282066566  ____origional_scale_10;
	// System.Single Waypoint::_hilight
	float ____hilight_11;
	// System.Single Waypoint::_hilight_fade_speed
	float ____hilight_fade_speed_12;
	// UnityEngine.Rigidbody Waypoint::rigid_body
	Rigidbody_t3346577219 * ___rigid_body_13;
	// UnityEngine.Material Waypoint::_material
	Material_t3870600107 * ____material_14;
	// UnityEngine.Vector3 Waypoint::position
	Vector3_t4282066566  ___position_15;
	// Waypoint[] Waypoint::neighbor
	WaypointU5BU5D_t2459722300* ___neighbor_16;

public:
	inline static int32_t get_offset_of_occupied_2() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ___occupied_2)); }
	inline bool get_occupied_2() const { return ___occupied_2; }
	inline bool* get_address_of_occupied_2() { return &___occupied_2; }
	inline void set_occupied_2(bool value)
	{
		___occupied_2 = value;
	}

	inline static int32_t get_offset_of_active_3() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ___active_3)); }
	inline bool get_active_3() const { return ___active_3; }
	inline bool* get_address_of_active_3() { return &___active_3; }
	inline void set_active_3(bool value)
	{
		___active_3 = value;
	}

	inline static int32_t get_offset_of_triggered_4() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ___triggered_4)); }
	inline bool get_triggered_4() const { return ___triggered_4; }
	inline bool* get_address_of_triggered_4() { return &___triggered_4; }
	inline void set_triggered_4(bool value)
	{
		___triggered_4 = value;
	}

	inline static int32_t get_offset_of_active_color_5() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ___active_color_5)); }
	inline Color_t4194546905  get_active_color_5() const { return ___active_color_5; }
	inline Color_t4194546905 * get_address_of_active_color_5() { return &___active_color_5; }
	inline void set_active_color_5(Color_t4194546905  value)
	{
		___active_color_5 = value;
	}

	inline static int32_t get_offset_of_hilight_color_6() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ___hilight_color_6)); }
	inline Color_t4194546905  get_hilight_color_6() const { return ___hilight_color_6; }
	inline Color_t4194546905 * get_address_of_hilight_color_6() { return &___hilight_color_6; }
	inline void set_hilight_color_6(Color_t4194546905  value)
	{
		___hilight_color_6 = value;
	}

	inline static int32_t get_offset_of_disabled_color_7() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ___disabled_color_7)); }
	inline Color_t4194546905  get_disabled_color_7() const { return ___disabled_color_7; }
	inline Color_t4194546905 * get_address_of_disabled_color_7() { return &___disabled_color_7; }
	inline void set_disabled_color_7(Color_t4194546905  value)
	{
		___disabled_color_7 = value;
	}

	inline static int32_t get_offset_of_animation_scale_8() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ___animation_scale_8)); }
	inline float get_animation_scale_8() const { return ___animation_scale_8; }
	inline float* get_address_of_animation_scale_8() { return &___animation_scale_8; }
	inline void set_animation_scale_8(float value)
	{
		___animation_scale_8 = value;
	}

	inline static int32_t get_offset_of_animation_speed_9() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ___animation_speed_9)); }
	inline float get_animation_speed_9() const { return ___animation_speed_9; }
	inline float* get_address_of_animation_speed_9() { return &___animation_speed_9; }
	inline void set_animation_speed_9(float value)
	{
		___animation_speed_9 = value;
	}

	inline static int32_t get_offset_of__origional_scale_10() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ____origional_scale_10)); }
	inline Vector3_t4282066566  get__origional_scale_10() const { return ____origional_scale_10; }
	inline Vector3_t4282066566 * get_address_of__origional_scale_10() { return &____origional_scale_10; }
	inline void set__origional_scale_10(Vector3_t4282066566  value)
	{
		____origional_scale_10 = value;
	}

	inline static int32_t get_offset_of__hilight_11() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ____hilight_11)); }
	inline float get__hilight_11() const { return ____hilight_11; }
	inline float* get_address_of__hilight_11() { return &____hilight_11; }
	inline void set__hilight_11(float value)
	{
		____hilight_11 = value;
	}

	inline static int32_t get_offset_of__hilight_fade_speed_12() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ____hilight_fade_speed_12)); }
	inline float get__hilight_fade_speed_12() const { return ____hilight_fade_speed_12; }
	inline float* get_address_of__hilight_fade_speed_12() { return &____hilight_fade_speed_12; }
	inline void set__hilight_fade_speed_12(float value)
	{
		____hilight_fade_speed_12 = value;
	}

	inline static int32_t get_offset_of_rigid_body_13() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ___rigid_body_13)); }
	inline Rigidbody_t3346577219 * get_rigid_body_13() const { return ___rigid_body_13; }
	inline Rigidbody_t3346577219 ** get_address_of_rigid_body_13() { return &___rigid_body_13; }
	inline void set_rigid_body_13(Rigidbody_t3346577219 * value)
	{
		___rigid_body_13 = value;
		Il2CppCodeGenWriteBarrier(&___rigid_body_13, value);
	}

	inline static int32_t get_offset_of__material_14() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ____material_14)); }
	inline Material_t3870600107 * get__material_14() const { return ____material_14; }
	inline Material_t3870600107 ** get_address_of__material_14() { return &____material_14; }
	inline void set__material_14(Material_t3870600107 * value)
	{
		____material_14 = value;
		Il2CppCodeGenWriteBarrier(&____material_14, value);
	}

	inline static int32_t get_offset_of_position_15() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ___position_15)); }
	inline Vector3_t4282066566  get_position_15() const { return ___position_15; }
	inline Vector3_t4282066566 * get_address_of_position_15() { return &___position_15; }
	inline void set_position_15(Vector3_t4282066566  value)
	{
		___position_15 = value;
	}

	inline static int32_t get_offset_of_neighbor_16() { return static_cast<int32_t>(offsetof(Waypoint_t765160481, ___neighbor_16)); }
	inline WaypointU5BU5D_t2459722300* get_neighbor_16() const { return ___neighbor_16; }
	inline WaypointU5BU5D_t2459722300** get_address_of_neighbor_16() { return &___neighbor_16; }
	inline void set_neighbor_16(WaypointU5BU5D_t2459722300* value)
	{
		___neighbor_16 = value;
		Il2CppCodeGenWriteBarrier(&___neighbor_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
