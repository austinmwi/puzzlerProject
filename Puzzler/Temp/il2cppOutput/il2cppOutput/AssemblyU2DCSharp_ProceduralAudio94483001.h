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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProceduralAudio
struct  ProceduralAudio_t94483001  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject ProceduralAudio::source_object
	GameObject_t3674682005 * ___source_object_2;
	// System.Double ProceduralAudio::frequency
	double ___frequency_3;
	// System.Double ProceduralAudio::gain
	double ___gain_4;
	// System.Double ProceduralAudio::falloff
	double ___falloff_5;
	// System.Double ProceduralAudio::doppler_effect
	double ___doppler_effect_6;
	// System.Double ProceduralAudio::_phase
	double ____phase_7;
	// System.Double ProceduralAudio::_amplitude
	double ____amplitude_8;
	// System.Double ProceduralAudio::_theta
	double ____theta_9;
	// System.Double ProceduralAudio::_celerity
	double ____celerity_10;
	// System.Double ProceduralAudio::_theta_last_frame
	double ____theta_last_frame_11;
	// System.Double ProceduralAudio::_sample_rate
	double ____sample_rate_12;
	// System.Double ProceduralAudio::_gain_master
	double ____gain_master_13;
	// System.Double ProceduralAudio::_gain_left
	double ____gain_left_14;
	// System.Double ProceduralAudio::_gain_right
	double ____gain_right_15;
	// UnityEngine.Vector3 ProceduralAudio::_position_of_sound
	Vector3_t4282066566  ____position_of_sound_16;
	// UnityEngine.Vector3 ProceduralAudio::_direction_to_sound
	Vector3_t4282066566  ____direction_to_sound_17;
	// UnityEngine.Vector3 ProceduralAudio::_direction_of_left_ear
	Vector3_t4282066566  ____direction_of_left_ear_18;
	// UnityEngine.Vector3 ProceduralAudio::_direction_of_right_ear
	Vector3_t4282066566  ____direction_of_right_ear_19;
	// System.Double ProceduralAudio::_distance_to_sound
	double ____distance_to_sound_20;
	// System.Double ProceduralAudio::_distance_to_sound_last_frame
	double ____distance_to_sound_last_frame_21;

public:
	inline static int32_t get_offset_of_source_object_2() { return static_cast<int32_t>(offsetof(ProceduralAudio_t94483001, ___source_object_2)); }
	inline GameObject_t3674682005 * get_source_object_2() const { return ___source_object_2; }
	inline GameObject_t3674682005 ** get_address_of_source_object_2() { return &___source_object_2; }
	inline void set_source_object_2(GameObject_t3674682005 * value)
	{
		___source_object_2 = value;
		Il2CppCodeGenWriteBarrier(&___source_object_2, value);
	}

	inline static int32_t get_offset_of_frequency_3() { return static_cast<int32_t>(offsetof(ProceduralAudio_t94483001, ___frequency_3)); }
	inline double get_frequency_3() const { return ___frequency_3; }
	inline double* get_address_of_frequency_3() { return &___frequency_3; }
	inline void set_frequency_3(double value)
	{
		___frequency_3 = value;
	}

	inline static int32_t get_offset_of_gain_4() { return static_cast<int32_t>(offsetof(ProceduralAudio_t94483001, ___gain_4)); }
	inline double get_gain_4() const { return ___gain_4; }
	inline double* get_address_of_gain_4() { return &___gain_4; }
	inline void set_gain_4(double value)
	{
		___gain_4 = value;
	}

	inline static int32_t get_offset_of_falloff_5() { return static_cast<int32_t>(offsetof(ProceduralAudio_t94483001, ___falloff_5)); }
	inline double get_falloff_5() const { return ___falloff_5; }
	inline double* get_address_of_falloff_5() { return &___falloff_5; }
	inline void set_falloff_5(double value)
	{
		___falloff_5 = value;
	}

	inline static int32_t get_offset_of_doppler_effect_6() { return static_cast<int32_t>(offsetof(ProceduralAudio_t94483001, ___doppler_effect_6)); }
	inline double get_doppler_effect_6() const { return ___doppler_effect_6; }
	inline double* get_address_of_doppler_effect_6() { return &___doppler_effect_6; }
	inline void set_doppler_effect_6(double value)
	{
		___doppler_effect_6 = value;
	}

	inline static int32_t get_offset_of__phase_7() { return static_cast<int32_t>(offsetof(ProceduralAudio_t94483001, ____phase_7)); }
	inline double get__phase_7() const { return ____phase_7; }
	inline double* get_address_of__phase_7() { return &____phase_7; }
	inline void set__phase_7(double value)
	{
		____phase_7 = value;
	}

	inline static int32_t get_offset_of__amplitude_8() { return static_cast<int32_t>(offsetof(ProceduralAudio_t94483001, ____amplitude_8)); }
	inline double get__amplitude_8() const { return ____amplitude_8; }
	inline double* get_address_of__amplitude_8() { return &____amplitude_8; }
	inline void set__amplitude_8(double value)
	{
		____amplitude_8 = value;
	}

	inline static int32_t get_offset_of__theta_9() { return static_cast<int32_t>(offsetof(ProceduralAudio_t94483001, ____theta_9)); }
	inline double get__theta_9() const { return ____theta_9; }
	inline double* get_address_of__theta_9() { return &____theta_9; }
	inline void set__theta_9(double value)
	{
		____theta_9 = value;
	}

	inline static int32_t get_offset_of__celerity_10() { return static_cast<int32_t>(offsetof(ProceduralAudio_t94483001, ____celerity_10)); }
	inline double get__celerity_10() const { return ____celerity_10; }
	inline double* get_address_of__celerity_10() { return &____celerity_10; }
	inline void set__celerity_10(double value)
	{
		____celerity_10 = value;
	}

	inline static int32_t get_offset_of__theta_last_frame_11() { return static_cast<int32_t>(offsetof(ProceduralAudio_t94483001, ____theta_last_frame_11)); }
	inline double get__theta_last_frame_11() const { return ____theta_last_frame_11; }
	inline double* get_address_of__theta_last_frame_11() { return &____theta_last_frame_11; }
	inline void set__theta_last_frame_11(double value)
	{
		____theta_last_frame_11 = value;
	}

	inline static int32_t get_offset_of__sample_rate_12() { return static_cast<int32_t>(offsetof(ProceduralAudio_t94483001, ____sample_rate_12)); }
	inline double get__sample_rate_12() const { return ____sample_rate_12; }
	inline double* get_address_of__sample_rate_12() { return &____sample_rate_12; }
	inline void set__sample_rate_12(double value)
	{
		____sample_rate_12 = value;
	}

	inline static int32_t get_offset_of__gain_master_13() { return static_cast<int32_t>(offsetof(ProceduralAudio_t94483001, ____gain_master_13)); }
	inline double get__gain_master_13() const { return ____gain_master_13; }
	inline double* get_address_of__gain_master_13() { return &____gain_master_13; }
	inline void set__gain_master_13(double value)
	{
		____gain_master_13 = value;
	}

	inline static int32_t get_offset_of__gain_left_14() { return static_cast<int32_t>(offsetof(ProceduralAudio_t94483001, ____gain_left_14)); }
	inline double get__gain_left_14() const { return ____gain_left_14; }
	inline double* get_address_of__gain_left_14() { return &____gain_left_14; }
	inline void set__gain_left_14(double value)
	{
		____gain_left_14 = value;
	}

	inline static int32_t get_offset_of__gain_right_15() { return static_cast<int32_t>(offsetof(ProceduralAudio_t94483001, ____gain_right_15)); }
	inline double get__gain_right_15() const { return ____gain_right_15; }
	inline double* get_address_of__gain_right_15() { return &____gain_right_15; }
	inline void set__gain_right_15(double value)
	{
		____gain_right_15 = value;
	}

	inline static int32_t get_offset_of__position_of_sound_16() { return static_cast<int32_t>(offsetof(ProceduralAudio_t94483001, ____position_of_sound_16)); }
	inline Vector3_t4282066566  get__position_of_sound_16() const { return ____position_of_sound_16; }
	inline Vector3_t4282066566 * get_address_of__position_of_sound_16() { return &____position_of_sound_16; }
	inline void set__position_of_sound_16(Vector3_t4282066566  value)
	{
		____position_of_sound_16 = value;
	}

	inline static int32_t get_offset_of__direction_to_sound_17() { return static_cast<int32_t>(offsetof(ProceduralAudio_t94483001, ____direction_to_sound_17)); }
	inline Vector3_t4282066566  get__direction_to_sound_17() const { return ____direction_to_sound_17; }
	inline Vector3_t4282066566 * get_address_of__direction_to_sound_17() { return &____direction_to_sound_17; }
	inline void set__direction_to_sound_17(Vector3_t4282066566  value)
	{
		____direction_to_sound_17 = value;
	}

	inline static int32_t get_offset_of__direction_of_left_ear_18() { return static_cast<int32_t>(offsetof(ProceduralAudio_t94483001, ____direction_of_left_ear_18)); }
	inline Vector3_t4282066566  get__direction_of_left_ear_18() const { return ____direction_of_left_ear_18; }
	inline Vector3_t4282066566 * get_address_of__direction_of_left_ear_18() { return &____direction_of_left_ear_18; }
	inline void set__direction_of_left_ear_18(Vector3_t4282066566  value)
	{
		____direction_of_left_ear_18 = value;
	}

	inline static int32_t get_offset_of__direction_of_right_ear_19() { return static_cast<int32_t>(offsetof(ProceduralAudio_t94483001, ____direction_of_right_ear_19)); }
	inline Vector3_t4282066566  get__direction_of_right_ear_19() const { return ____direction_of_right_ear_19; }
	inline Vector3_t4282066566 * get_address_of__direction_of_right_ear_19() { return &____direction_of_right_ear_19; }
	inline void set__direction_of_right_ear_19(Vector3_t4282066566  value)
	{
		____direction_of_right_ear_19 = value;
	}

	inline static int32_t get_offset_of__distance_to_sound_20() { return static_cast<int32_t>(offsetof(ProceduralAudio_t94483001, ____distance_to_sound_20)); }
	inline double get__distance_to_sound_20() const { return ____distance_to_sound_20; }
	inline double* get_address_of__distance_to_sound_20() { return &____distance_to_sound_20; }
	inline void set__distance_to_sound_20(double value)
	{
		____distance_to_sound_20 = value;
	}

	inline static int32_t get_offset_of__distance_to_sound_last_frame_21() { return static_cast<int32_t>(offsetof(ProceduralAudio_t94483001, ____distance_to_sound_last_frame_21)); }
	inline double get__distance_to_sound_last_frame_21() const { return ____distance_to_sound_last_frame_21; }
	inline double* get_address_of__distance_to_sound_last_frame_21() { return &____distance_to_sound_last_frame_21; }
	inline void set__distance_to_sound_last_frame_21(double value)
	{
		____distance_to_sound_last_frame_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
