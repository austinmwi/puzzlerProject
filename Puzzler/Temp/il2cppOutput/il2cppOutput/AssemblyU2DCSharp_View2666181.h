#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_RaycastHit4003175726.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// View
struct  View_t2666181  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean View::toggle_fade
	bool ___toggle_fade_2;

public:
	inline static int32_t get_offset_of_toggle_fade_2() { return static_cast<int32_t>(offsetof(View_t2666181, ___toggle_fade_2)); }
	inline bool get_toggle_fade_2() const { return ___toggle_fade_2; }
	inline bool* get_address_of_toggle_fade_2() { return &___toggle_fade_2; }
	inline void set_toggle_fade_2(bool value)
	{
		___toggle_fade_2 = value;
	}
};

struct View_t2666181_StaticFields
{
public:
	// UnityEngine.RaycastHit View::hit
	RaycastHit_t4003175726  ___hit_3;

public:
	inline static int32_t get_offset_of_hit_3() { return static_cast<int32_t>(offsetof(View_t2666181_StaticFields, ___hit_3)); }
	inline RaycastHit_t4003175726  get_hit_3() const { return ___hit_3; }
	inline RaycastHit_t4003175726 * get_address_of_hit_3() { return &___hit_3; }
	inline void set_hit_3(RaycastHit_t4003175726  value)
	{
		___hit_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
