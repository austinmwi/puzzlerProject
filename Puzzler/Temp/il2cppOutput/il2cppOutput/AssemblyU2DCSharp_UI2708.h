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
// UnityEngine.Material
struct Material_t3870600107;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "AssemblyU2DCSharp_UI_UiState3198406082.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UI
struct  UI_t2708  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject UI::options_object
	GameObject_t3674682005 * ___options_object_3;
	// UnityEngine.GameObject UI::main_object
	GameObject_t3674682005 * ___main_object_4;
	// UnityEngine.GameObject UI::scenes_object
	GameObject_t3674682005 * ___scenes_object_5;
	// UnityEngine.GameObject UI::overlay_object
	GameObject_t3674682005 * ___overlay_object_6;
	// UnityEngine.GameObject UI::reticle_object
	GameObject_t3674682005 * ___reticle_object_7;
	// System.Int32 UI::_trigger_count
	int32_t ____trigger_count_8;
	// System.Int32 UI::_trigger_frame_count
	int32_t ____trigger_frame_count_9;
	// UnityEngine.Material UI::_reticle_material
	Material_t3870600107 * ____reticle_material_10;
	// UnityEngine.Color UI::_reticule_default_color
	Color_t4194546905  ____reticule_default_color_11;
	// UI/UiState UI::_state
	int32_t ____state_12;
	// UI/UiState UI::_state_previous
	int32_t ____state_previous_13;

public:
	inline static int32_t get_offset_of_options_object_3() { return static_cast<int32_t>(offsetof(UI_t2708, ___options_object_3)); }
	inline GameObject_t3674682005 * get_options_object_3() const { return ___options_object_3; }
	inline GameObject_t3674682005 ** get_address_of_options_object_3() { return &___options_object_3; }
	inline void set_options_object_3(GameObject_t3674682005 * value)
	{
		___options_object_3 = value;
		Il2CppCodeGenWriteBarrier(&___options_object_3, value);
	}

	inline static int32_t get_offset_of_main_object_4() { return static_cast<int32_t>(offsetof(UI_t2708, ___main_object_4)); }
	inline GameObject_t3674682005 * get_main_object_4() const { return ___main_object_4; }
	inline GameObject_t3674682005 ** get_address_of_main_object_4() { return &___main_object_4; }
	inline void set_main_object_4(GameObject_t3674682005 * value)
	{
		___main_object_4 = value;
		Il2CppCodeGenWriteBarrier(&___main_object_4, value);
	}

	inline static int32_t get_offset_of_scenes_object_5() { return static_cast<int32_t>(offsetof(UI_t2708, ___scenes_object_5)); }
	inline GameObject_t3674682005 * get_scenes_object_5() const { return ___scenes_object_5; }
	inline GameObject_t3674682005 ** get_address_of_scenes_object_5() { return &___scenes_object_5; }
	inline void set_scenes_object_5(GameObject_t3674682005 * value)
	{
		___scenes_object_5 = value;
		Il2CppCodeGenWriteBarrier(&___scenes_object_5, value);
	}

	inline static int32_t get_offset_of_overlay_object_6() { return static_cast<int32_t>(offsetof(UI_t2708, ___overlay_object_6)); }
	inline GameObject_t3674682005 * get_overlay_object_6() const { return ___overlay_object_6; }
	inline GameObject_t3674682005 ** get_address_of_overlay_object_6() { return &___overlay_object_6; }
	inline void set_overlay_object_6(GameObject_t3674682005 * value)
	{
		___overlay_object_6 = value;
		Il2CppCodeGenWriteBarrier(&___overlay_object_6, value);
	}

	inline static int32_t get_offset_of_reticle_object_7() { return static_cast<int32_t>(offsetof(UI_t2708, ___reticle_object_7)); }
	inline GameObject_t3674682005 * get_reticle_object_7() const { return ___reticle_object_7; }
	inline GameObject_t3674682005 ** get_address_of_reticle_object_7() { return &___reticle_object_7; }
	inline void set_reticle_object_7(GameObject_t3674682005 * value)
	{
		___reticle_object_7 = value;
		Il2CppCodeGenWriteBarrier(&___reticle_object_7, value);
	}

	inline static int32_t get_offset_of__trigger_count_8() { return static_cast<int32_t>(offsetof(UI_t2708, ____trigger_count_8)); }
	inline int32_t get__trigger_count_8() const { return ____trigger_count_8; }
	inline int32_t* get_address_of__trigger_count_8() { return &____trigger_count_8; }
	inline void set__trigger_count_8(int32_t value)
	{
		____trigger_count_8 = value;
	}

	inline static int32_t get_offset_of__trigger_frame_count_9() { return static_cast<int32_t>(offsetof(UI_t2708, ____trigger_frame_count_9)); }
	inline int32_t get__trigger_frame_count_9() const { return ____trigger_frame_count_9; }
	inline int32_t* get_address_of__trigger_frame_count_9() { return &____trigger_frame_count_9; }
	inline void set__trigger_frame_count_9(int32_t value)
	{
		____trigger_frame_count_9 = value;
	}

	inline static int32_t get_offset_of__reticle_material_10() { return static_cast<int32_t>(offsetof(UI_t2708, ____reticle_material_10)); }
	inline Material_t3870600107 * get__reticle_material_10() const { return ____reticle_material_10; }
	inline Material_t3870600107 ** get_address_of__reticle_material_10() { return &____reticle_material_10; }
	inline void set__reticle_material_10(Material_t3870600107 * value)
	{
		____reticle_material_10 = value;
		Il2CppCodeGenWriteBarrier(&____reticle_material_10, value);
	}

	inline static int32_t get_offset_of__reticule_default_color_11() { return static_cast<int32_t>(offsetof(UI_t2708, ____reticule_default_color_11)); }
	inline Color_t4194546905  get__reticule_default_color_11() const { return ____reticule_default_color_11; }
	inline Color_t4194546905 * get_address_of__reticule_default_color_11() { return &____reticule_default_color_11; }
	inline void set__reticule_default_color_11(Color_t4194546905  value)
	{
		____reticule_default_color_11 = value;
	}

	inline static int32_t get_offset_of__state_12() { return static_cast<int32_t>(offsetof(UI_t2708, ____state_12)); }
	inline int32_t get__state_12() const { return ____state_12; }
	inline int32_t* get_address_of__state_12() { return &____state_12; }
	inline void set__state_12(int32_t value)
	{
		____state_12 = value;
	}

	inline static int32_t get_offset_of__state_previous_13() { return static_cast<int32_t>(offsetof(UI_t2708, ____state_previous_13)); }
	inline int32_t get__state_previous_13() const { return ____state_previous_13; }
	inline int32_t* get_address_of__state_previous_13() { return &____state_previous_13; }
	inline void set__state_previous_13(int32_t value)
	{
		____state_previous_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
