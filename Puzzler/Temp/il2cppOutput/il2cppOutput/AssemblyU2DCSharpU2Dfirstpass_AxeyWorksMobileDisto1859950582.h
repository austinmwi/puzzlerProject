﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t3870600107;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AxeyWorksMobileDistortion
struct  AxeyWorksMobileDistortion_t1859950582  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Material AxeyWorksMobileDistortion::Material
	Material_t3870600107 * ___Material_2;

public:
	inline static int32_t get_offset_of_Material_2() { return static_cast<int32_t>(offsetof(AxeyWorksMobileDistortion_t1859950582, ___Material_2)); }
	inline Material_t3870600107 * get_Material_2() const { return ___Material_2; }
	inline Material_t3870600107 ** get_address_of_Material_2() { return &___Material_2; }
	inline void set_Material_2(Material_t3870600107 * value)
	{
		___Material_2 = value;
		Il2CppCodeGenWriteBarrier(&___Material_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif