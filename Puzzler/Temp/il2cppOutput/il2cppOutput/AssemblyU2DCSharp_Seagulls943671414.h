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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Seagulls
struct  Seagulls_t943671414  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject Seagulls::seagull_prefab
	GameObject_t3674682005 * ___seagull_prefab_3;
	// UnityEngine.GameObject Seagulls::_seagulls_object
	GameObject_t3674682005 * ____seagulls_object_5;

public:
	inline static int32_t get_offset_of_seagull_prefab_3() { return static_cast<int32_t>(offsetof(Seagulls_t943671414, ___seagull_prefab_3)); }
	inline GameObject_t3674682005 * get_seagull_prefab_3() const { return ___seagull_prefab_3; }
	inline GameObject_t3674682005 ** get_address_of_seagull_prefab_3() { return &___seagull_prefab_3; }
	inline void set_seagull_prefab_3(GameObject_t3674682005 * value)
	{
		___seagull_prefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___seagull_prefab_3, value);
	}

	inline static int32_t get_offset_of__seagulls_object_5() { return static_cast<int32_t>(offsetof(Seagulls_t943671414, ____seagulls_object_5)); }
	inline GameObject_t3674682005 * get__seagulls_object_5() const { return ____seagulls_object_5; }
	inline GameObject_t3674682005 ** get_address_of__seagulls_object_5() { return &____seagulls_object_5; }
	inline void set__seagulls_object_5(GameObject_t3674682005 * value)
	{
		____seagulls_object_5 = value;
		Il2CppCodeGenWriteBarrier(&____seagulls_object_5, value);
	}
};

struct Seagulls_t943671414_StaticFields
{
public:
	// UnityEngine.GameObject[] Seagulls::seagull_object
	GameObjectU5BU5D_t2662109048* ___seagull_object_4;

public:
	inline static int32_t get_offset_of_seagull_object_4() { return static_cast<int32_t>(offsetof(Seagulls_t943671414_StaticFields, ___seagull_object_4)); }
	inline GameObjectU5BU5D_t2662109048* get_seagull_object_4() const { return ___seagull_object_4; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_seagull_object_4() { return &___seagull_object_4; }
	inline void set_seagull_object_4(GameObjectU5BU5D_t2662109048* value)
	{
		___seagull_object_4 = value;
		Il2CppCodeGenWriteBarrier(&___seagull_object_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
