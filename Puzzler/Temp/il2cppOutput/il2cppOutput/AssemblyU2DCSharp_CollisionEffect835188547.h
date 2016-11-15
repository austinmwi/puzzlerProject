#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.ParticleSystem
struct ParticleSystem_t381473177;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t1536434148;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CollisionEffect
struct  CollisionEffect_t835188547  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.ParticleSystem CollisionEffect::particle_system
	ParticleSystem_t381473177 * ___particle_system_3;
	// System.Int32 CollisionEffect::_index
	int32_t ____index_5;

public:
	inline static int32_t get_offset_of_particle_system_3() { return static_cast<int32_t>(offsetof(CollisionEffect_t835188547, ___particle_system_3)); }
	inline ParticleSystem_t381473177 * get_particle_system_3() const { return ___particle_system_3; }
	inline ParticleSystem_t381473177 ** get_address_of_particle_system_3() { return &___particle_system_3; }
	inline void set_particle_system_3(ParticleSystem_t381473177 * value)
	{
		___particle_system_3 = value;
		Il2CppCodeGenWriteBarrier(&___particle_system_3, value);
	}

	inline static int32_t get_offset_of__index_5() { return static_cast<int32_t>(offsetof(CollisionEffect_t835188547, ____index_5)); }
	inline int32_t get__index_5() const { return ____index_5; }
	inline int32_t* get_address_of__index_5() { return &____index_5; }
	inline void set__index_5(int32_t value)
	{
		____index_5 = value;
	}
};

struct CollisionEffect_t835188547_StaticFields
{
public:
	// UnityEngine.ParticleSystem[] CollisionEffect::_particle_system
	ParticleSystemU5BU5D_t1536434148* ____particle_system_4;

public:
	inline static int32_t get_offset_of__particle_system_4() { return static_cast<int32_t>(offsetof(CollisionEffect_t835188547_StaticFields, ____particle_system_4)); }
	inline ParticleSystemU5BU5D_t1536434148* get__particle_system_4() const { return ____particle_system_4; }
	inline ParticleSystemU5BU5D_t1536434148** get_address_of__particle_system_4() { return &____particle_system_4; }
	inline void set__particle_system_4(ParticleSystemU5BU5D_t1536434148* value)
	{
		____particle_system_4 = value;
		Il2CppCodeGenWriteBarrier(&____particle_system_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
