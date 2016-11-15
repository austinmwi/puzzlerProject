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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhysicsInteraction
struct  PhysicsInteraction_t1423993195  : public MonoBehaviour_t667441552
{
public:
	// System.Single PhysicsInteraction::force
	float ___force_2;
	// System.Boolean PhysicsInteraction::attached
	bool ___attached_3;
	// UnityEngine.Color PhysicsInteraction::hilight_color
	Color_t4194546905  ___hilight_color_4;
	// UnityEngine.Color PhysicsInteraction::_origional_color
	Color_t4194546905  ____origional_color_5;
	// System.Int32 PhysicsInteraction::_interactions
	int32_t ____interactions_6;
	// System.Single PhysicsInteraction::_hilight
	float ____hilight_7;
	// System.Single PhysicsInteraction::_hilight_fade_speed
	float ____hilight_fade_speed_8;
	// UnityEngine.Rigidbody PhysicsInteraction::_rigid_body
	Rigidbody_t3346577219 * ____rigid_body_9;
	// UnityEngine.Material PhysicsInteraction::_material
	Material_t3870600107 * ____material_10;

public:
	inline static int32_t get_offset_of_force_2() { return static_cast<int32_t>(offsetof(PhysicsInteraction_t1423993195, ___force_2)); }
	inline float get_force_2() const { return ___force_2; }
	inline float* get_address_of_force_2() { return &___force_2; }
	inline void set_force_2(float value)
	{
		___force_2 = value;
	}

	inline static int32_t get_offset_of_attached_3() { return static_cast<int32_t>(offsetof(PhysicsInteraction_t1423993195, ___attached_3)); }
	inline bool get_attached_3() const { return ___attached_3; }
	inline bool* get_address_of_attached_3() { return &___attached_3; }
	inline void set_attached_3(bool value)
	{
		___attached_3 = value;
	}

	inline static int32_t get_offset_of_hilight_color_4() { return static_cast<int32_t>(offsetof(PhysicsInteraction_t1423993195, ___hilight_color_4)); }
	inline Color_t4194546905  get_hilight_color_4() const { return ___hilight_color_4; }
	inline Color_t4194546905 * get_address_of_hilight_color_4() { return &___hilight_color_4; }
	inline void set_hilight_color_4(Color_t4194546905  value)
	{
		___hilight_color_4 = value;
	}

	inline static int32_t get_offset_of__origional_color_5() { return static_cast<int32_t>(offsetof(PhysicsInteraction_t1423993195, ____origional_color_5)); }
	inline Color_t4194546905  get__origional_color_5() const { return ____origional_color_5; }
	inline Color_t4194546905 * get_address_of__origional_color_5() { return &____origional_color_5; }
	inline void set__origional_color_5(Color_t4194546905  value)
	{
		____origional_color_5 = value;
	}

	inline static int32_t get_offset_of__interactions_6() { return static_cast<int32_t>(offsetof(PhysicsInteraction_t1423993195, ____interactions_6)); }
	inline int32_t get__interactions_6() const { return ____interactions_6; }
	inline int32_t* get_address_of__interactions_6() { return &____interactions_6; }
	inline void set__interactions_6(int32_t value)
	{
		____interactions_6 = value;
	}

	inline static int32_t get_offset_of__hilight_7() { return static_cast<int32_t>(offsetof(PhysicsInteraction_t1423993195, ____hilight_7)); }
	inline float get__hilight_7() const { return ____hilight_7; }
	inline float* get_address_of__hilight_7() { return &____hilight_7; }
	inline void set__hilight_7(float value)
	{
		____hilight_7 = value;
	}

	inline static int32_t get_offset_of__hilight_fade_speed_8() { return static_cast<int32_t>(offsetof(PhysicsInteraction_t1423993195, ____hilight_fade_speed_8)); }
	inline float get__hilight_fade_speed_8() const { return ____hilight_fade_speed_8; }
	inline float* get_address_of__hilight_fade_speed_8() { return &____hilight_fade_speed_8; }
	inline void set__hilight_fade_speed_8(float value)
	{
		____hilight_fade_speed_8 = value;
	}

	inline static int32_t get_offset_of__rigid_body_9() { return static_cast<int32_t>(offsetof(PhysicsInteraction_t1423993195, ____rigid_body_9)); }
	inline Rigidbody_t3346577219 * get__rigid_body_9() const { return ____rigid_body_9; }
	inline Rigidbody_t3346577219 ** get_address_of__rigid_body_9() { return &____rigid_body_9; }
	inline void set__rigid_body_9(Rigidbody_t3346577219 * value)
	{
		____rigid_body_9 = value;
		Il2CppCodeGenWriteBarrier(&____rigid_body_9, value);
	}

	inline static int32_t get_offset_of__material_10() { return static_cast<int32_t>(offsetof(PhysicsInteraction_t1423993195, ____material_10)); }
	inline Material_t3870600107 * get__material_10() const { return ____material_10; }
	inline Material_t3870600107 ** get_address_of__material_10() { return &____material_10; }
	inline void set__material_10(Material_t3870600107 * value)
	{
		____material_10 = value;
		Il2CppCodeGenWriteBarrier(&____material_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
