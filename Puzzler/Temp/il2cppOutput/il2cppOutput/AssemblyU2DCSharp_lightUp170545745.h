#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// lightUp
struct  lightUp_t170545745  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Material lightUp::lightUpMaterial
	Material_t3870600107 * ___lightUpMaterial_2;
	// UnityEngine.GameObject lightUp::gameLogic
	GameObject_t3674682005 * ___gameLogic_3;
	// UnityEngine.Material lightUp::defaultMaterial
	Material_t3870600107 * ___defaultMaterial_4;

public:
	inline static int32_t get_offset_of_lightUpMaterial_2() { return static_cast<int32_t>(offsetof(lightUp_t170545745, ___lightUpMaterial_2)); }
	inline Material_t3870600107 * get_lightUpMaterial_2() const { return ___lightUpMaterial_2; }
	inline Material_t3870600107 ** get_address_of_lightUpMaterial_2() { return &___lightUpMaterial_2; }
	inline void set_lightUpMaterial_2(Material_t3870600107 * value)
	{
		___lightUpMaterial_2 = value;
		Il2CppCodeGenWriteBarrier(&___lightUpMaterial_2, value);
	}

	inline static int32_t get_offset_of_gameLogic_3() { return static_cast<int32_t>(offsetof(lightUp_t170545745, ___gameLogic_3)); }
	inline GameObject_t3674682005 * get_gameLogic_3() const { return ___gameLogic_3; }
	inline GameObject_t3674682005 ** get_address_of_gameLogic_3() { return &___gameLogic_3; }
	inline void set_gameLogic_3(GameObject_t3674682005 * value)
	{
		___gameLogic_3 = value;
		Il2CppCodeGenWriteBarrier(&___gameLogic_3, value);
	}

	inline static int32_t get_offset_of_defaultMaterial_4() { return static_cast<int32_t>(offsetof(lightUp_t170545745, ___defaultMaterial_4)); }
	inline Material_t3870600107 * get_defaultMaterial_4() const { return ___defaultMaterial_4; }
	inline Material_t3870600107 ** get_address_of_defaultMaterial_4() { return &___defaultMaterial_4; }
	inline void set_defaultMaterial_4(Material_t3870600107 * value)
	{
		___defaultMaterial_4 = value;
		Il2CppCodeGenWriteBarrier(&___defaultMaterial_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
