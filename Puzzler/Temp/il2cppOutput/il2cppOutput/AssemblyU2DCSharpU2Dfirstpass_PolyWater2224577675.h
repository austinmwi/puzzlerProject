#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Mesh
struct Mesh_t4241756145;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PolyWater
struct  PolyWater_t2224577675  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Vector3 PolyWater::_waveSource1
	Vector3_t4282066566  ____waveSource1_2;
	// System.Single PolyWater::WaveSpeed
	float ___WaveSpeed_3;
	// System.Single PolyWater::WaveHeight
	float ___WaveHeight_4;
	// System.Single PolyWater::WavePattern
	float ___WavePattern_5;
	// System.Boolean PolyWater::EdgeBlend
	bool ___EdgeBlend_6;
	// System.Boolean PolyWater::ForceFlatShading
	bool ___ForceFlatShading_7;
	// UnityEngine.Mesh PolyWater::_mesh
	Mesh_t4241756145 * ____mesh_8;
	// UnityEngine.Vector3[] PolyWater::_verts
	Vector3U5BU5D_t215400611* ____verts_9;

public:
	inline static int32_t get_offset_of__waveSource1_2() { return static_cast<int32_t>(offsetof(PolyWater_t2224577675, ____waveSource1_2)); }
	inline Vector3_t4282066566  get__waveSource1_2() const { return ____waveSource1_2; }
	inline Vector3_t4282066566 * get_address_of__waveSource1_2() { return &____waveSource1_2; }
	inline void set__waveSource1_2(Vector3_t4282066566  value)
	{
		____waveSource1_2 = value;
	}

	inline static int32_t get_offset_of_WaveSpeed_3() { return static_cast<int32_t>(offsetof(PolyWater_t2224577675, ___WaveSpeed_3)); }
	inline float get_WaveSpeed_3() const { return ___WaveSpeed_3; }
	inline float* get_address_of_WaveSpeed_3() { return &___WaveSpeed_3; }
	inline void set_WaveSpeed_3(float value)
	{
		___WaveSpeed_3 = value;
	}

	inline static int32_t get_offset_of_WaveHeight_4() { return static_cast<int32_t>(offsetof(PolyWater_t2224577675, ___WaveHeight_4)); }
	inline float get_WaveHeight_4() const { return ___WaveHeight_4; }
	inline float* get_address_of_WaveHeight_4() { return &___WaveHeight_4; }
	inline void set_WaveHeight_4(float value)
	{
		___WaveHeight_4 = value;
	}

	inline static int32_t get_offset_of_WavePattern_5() { return static_cast<int32_t>(offsetof(PolyWater_t2224577675, ___WavePattern_5)); }
	inline float get_WavePattern_5() const { return ___WavePattern_5; }
	inline float* get_address_of_WavePattern_5() { return &___WavePattern_5; }
	inline void set_WavePattern_5(float value)
	{
		___WavePattern_5 = value;
	}

	inline static int32_t get_offset_of_EdgeBlend_6() { return static_cast<int32_t>(offsetof(PolyWater_t2224577675, ___EdgeBlend_6)); }
	inline bool get_EdgeBlend_6() const { return ___EdgeBlend_6; }
	inline bool* get_address_of_EdgeBlend_6() { return &___EdgeBlend_6; }
	inline void set_EdgeBlend_6(bool value)
	{
		___EdgeBlend_6 = value;
	}

	inline static int32_t get_offset_of_ForceFlatShading_7() { return static_cast<int32_t>(offsetof(PolyWater_t2224577675, ___ForceFlatShading_7)); }
	inline bool get_ForceFlatShading_7() const { return ___ForceFlatShading_7; }
	inline bool* get_address_of_ForceFlatShading_7() { return &___ForceFlatShading_7; }
	inline void set_ForceFlatShading_7(bool value)
	{
		___ForceFlatShading_7 = value;
	}

	inline static int32_t get_offset_of__mesh_8() { return static_cast<int32_t>(offsetof(PolyWater_t2224577675, ____mesh_8)); }
	inline Mesh_t4241756145 * get__mesh_8() const { return ____mesh_8; }
	inline Mesh_t4241756145 ** get_address_of__mesh_8() { return &____mesh_8; }
	inline void set__mesh_8(Mesh_t4241756145 * value)
	{
		____mesh_8 = value;
		Il2CppCodeGenWriteBarrier(&____mesh_8, value);
	}

	inline static int32_t get_offset_of__verts_9() { return static_cast<int32_t>(offsetof(PolyWater_t2224577675, ____verts_9)); }
	inline Vector3U5BU5D_t215400611* get__verts_9() const { return ____verts_9; }
	inline Vector3U5BU5D_t215400611** get_address_of__verts_9() { return &____verts_9; }
	inline void set__verts_9(Vector3U5BU5D_t215400611* value)
	{
		____verts_9 = value;
		Il2CppCodeGenWriteBarrier(&____verts_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
