#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Light
struct Light_t4202674828;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scene4
struct  Scene4_t2470765896  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject Scene4::boat_object
	GameObject_t3674682005 * ___boat_object_2;
	// UnityEngine.Light Scene4::directional_light
	Light_t4202674828 * ___directional_light_3;

public:
	inline static int32_t get_offset_of_boat_object_2() { return static_cast<int32_t>(offsetof(Scene4_t2470765896, ___boat_object_2)); }
	inline GameObject_t3674682005 * get_boat_object_2() const { return ___boat_object_2; }
	inline GameObject_t3674682005 ** get_address_of_boat_object_2() { return &___boat_object_2; }
	inline void set_boat_object_2(GameObject_t3674682005 * value)
	{
		___boat_object_2 = value;
		Il2CppCodeGenWriteBarrier(&___boat_object_2, value);
	}

	inline static int32_t get_offset_of_directional_light_3() { return static_cast<int32_t>(offsetof(Scene4_t2470765896, ___directional_light_3)); }
	inline Light_t4202674828 * get_directional_light_3() const { return ___directional_light_3; }
	inline Light_t4202674828 ** get_address_of_directional_light_3() { return &___directional_light_3; }
	inline void set_directional_light_3(Light_t4202674828 * value)
	{
		___directional_light_3 = value;
		Il2CppCodeGenWriteBarrier(&___directional_light_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
