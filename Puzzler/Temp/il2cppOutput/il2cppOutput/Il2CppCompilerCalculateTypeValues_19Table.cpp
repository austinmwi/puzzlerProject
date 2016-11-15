#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>


#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Gvr_Internal_BaseVRDevice591083105.h"
#include "AssemblyU2DCSharp_Gvr_Internal_GvrDevice2458844523.h"
#include "AssemblyU2DCSharp_Gvr_Internal_iOSDevice141998261.h"
#include "AssemblyU2DCSharp_LeafAnimation1376007590.h"
#include "AssemblyU2DCSharp_ProceduralAudio94483001.h"
#include "AssemblyU2DCSharp_Debugging1806286542.h"
#include "AssemblyU2DCSharp_KeyboardMovement185877974.h"
#include "AssemblyU2DCSharp_CollisionEffect835188547.h"
#include "AssemblyU2DCSharp_FadeEffect3898182477.h"
#include "AssemblyU2DCSharp_Flock67973745.h"
#include "AssemblyU2DCSharp_FlockRenderer1565251156.h"
#include "AssemblyU2DCSharp_Flocking2076345297.h"
#include "AssemblyU2DCSharp_Navigation3856131636.h"
#include "AssemblyU2DCSharp_Waypoint765160481.h"
#include "AssemblyU2DCSharp_Clouds2021315838.h"
#include "AssemblyU2DCSharp_Island2199447093.h"
#include "AssemblyU2DCSharp_Ocean76007646.h"
#include "AssemblyU2DCSharp_ProceduralMesh3051431722.h"
#include "AssemblyU2DCSharp_Textures3356963544.h"
#include "AssemblyU2DCSharp_Scene02470765892.h"
#include "AssemblyU2DCSharp_Scene12470765893.h"
#include "AssemblyU2DCSharp_Scene22470765894.h"
#include "AssemblyU2DCSharp_Scene32470765895.h"
#include "AssemblyU2DCSharp_Scene42470765896.h"
#include "AssemblyU2DCSharp_Scene_Example_Ocean_Shader34920782.h"
#include "AssemblyU2DCSharp_Seagull3632671645.h"
#include "AssemblyU2DCSharp_Seagulls943671414.h"
#include "AssemblyU2DCSharp_InfoCanvas700704710.h"
#include "AssemblyU2DCSharp_PhysicsInteraction1423993195.h"
#include "AssemblyU2DCSharp_UI2708.h"
#include "AssemblyU2DCSharp_UI_UiState3198406082.h"
#include "AssemblyU2DCSharp_View2666181.h"
#include "AssemblyU2DCSharp_iTween3087282050.h"
#include "AssemblyU2DCSharp_iTween_EaseType2734598229.h"
#include "AssemblyU2DCSharp_iTween_LoopType1485160459.h"
#include "AssemblyU2DCSharp_iTween_NamedValueColor1694108638.h"
#include "AssemblyU2DCSharp_iTween_Defaults4166900319.h"
#include "AssemblyU2DCSharp_iTween_CRSpline2211016973.h"
#include "AssemblyU2DCSharp_iTween_EasingFunction1323017328.h"
#include "AssemblyU2DCSharp_iTween_ApplyTween882368618.h"
#include "AssemblyU2DCSharp_iTween_U3CTweenDelayU3Ec__Iterator41536442.h"
#include "AssemblyU2DCSharp_iTween_U3CTweenRestartU3Ec__Iter4135396271.h"
#include "AssemblyU2DCSharp_iTween_U3CStartU3Ec__Iterator62251047600.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3053238933.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3379220385.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3379220352.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3379220377.h"
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharpU2Dfirstpass_AxeyWorksMobileDisto1859950582.h"
#include "AssemblyU2DCSharpU2Dfirstpass_PolyWater2224577675.h"



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1900 = { sizeof (BaseVRDevice_t591083105), -1, sizeof(BaseVRDevice_t591083105_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1900[19] = 
{
	BaseVRDevice_t591083105_StaticFields::get_offset_of_device_0(),
	BaseVRDevice_t591083105::get_offset_of_headPose_1(),
	BaseVRDevice_t591083105::get_offset_of_leftEyePose_2(),
	BaseVRDevice_t591083105::get_offset_of_rightEyePose_3(),
	BaseVRDevice_t591083105::get_offset_of_leftEyeDistortedProjection_4(),
	BaseVRDevice_t591083105::get_offset_of_rightEyeDistortedProjection_5(),
	BaseVRDevice_t591083105::get_offset_of_leftEyeUndistortedProjection_6(),
	BaseVRDevice_t591083105::get_offset_of_rightEyeUndistortedProjection_7(),
	BaseVRDevice_t591083105::get_offset_of_leftEyeDistortedViewport_8(),
	BaseVRDevice_t591083105::get_offset_of_rightEyeDistortedViewport_9(),
	BaseVRDevice_t591083105::get_offset_of_leftEyeUndistortedViewport_10(),
	BaseVRDevice_t591083105::get_offset_of_rightEyeUndistortedViewport_11(),
	BaseVRDevice_t591083105::get_offset_of_recommendedTextureSize_12(),
	BaseVRDevice_t591083105::get_offset_of_leftEyeOrientation_13(),
	BaseVRDevice_t591083105::get_offset_of_rightEyeOrientation_14(),
	BaseVRDevice_t591083105::get_offset_of_tilted_15(),
	BaseVRDevice_t591083105::get_offset_of_profileChanged_16(),
	BaseVRDevice_t591083105::get_offset_of_backButtonPressed_17(),
	BaseVRDevice_t591083105::get_offset_of_U3CProfileU3Ek__BackingField_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1901 = { sizeof (GvrDevice_t2458844523), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1901[13] = 
{
	0,
	0,
	0,
	0,
	0,
	GvrDevice_t2458844523::get_offset_of_headData_24(),
	GvrDevice_t2458844523::get_offset_of_viewData_25(),
	GvrDevice_t2458844523::get_offset_of_profileData_26(),
	GvrDevice_t2458844523::get_offset_of_headView_27(),
	GvrDevice_t2458844523::get_offset_of_leftEyeView_28(),
	GvrDevice_t2458844523::get_offset_of_rightEyeView_29(),
	GvrDevice_t2458844523::get_offset_of_debugDisableNativeProjections_30(),
	GvrDevice_t2458844523::get_offset_of_debugDisableNativeUILayer_31(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1902 = { sizeof (iOSDevice_t141998261), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1902[1] = 
{
	iOSDevice_t141998261::get_offset_of_isOpenGL_32(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1903 = { sizeof (LeafAnimation_t1376007590), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1903[5] = 
{
	LeafAnimation_t1376007590::get_offset_of_blend_2(),
	LeafAnimation_t1376007590::get_offset_of_force_3(),
	LeafAnimation_t1376007590::get_offset_of_speed_4(),
	LeafAnimation_t1376007590::get_offset_of__seed_5(),
	LeafAnimation_t1376007590::get_offset_of__origional_rotation_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1904 = { sizeof (ProceduralAudio_t94483001), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1904[20] = 
{
	ProceduralAudio_t94483001::get_offset_of_source_object_2(),
	ProceduralAudio_t94483001::get_offset_of_frequency_3(),
	ProceduralAudio_t94483001::get_offset_of_gain_4(),
	ProceduralAudio_t94483001::get_offset_of_falloff_5(),
	ProceduralAudio_t94483001::get_offset_of_doppler_effect_6(),
	ProceduralAudio_t94483001::get_offset_of__phase_7(),
	ProceduralAudio_t94483001::get_offset_of__amplitude_8(),
	ProceduralAudio_t94483001::get_offset_of__theta_9(),
	ProceduralAudio_t94483001::get_offset_of__celerity_10(),
	ProceduralAudio_t94483001::get_offset_of__theta_last_frame_11(),
	ProceduralAudio_t94483001::get_offset_of__sample_rate_12(),
	ProceduralAudio_t94483001::get_offset_of__gain_master_13(),
	ProceduralAudio_t94483001::get_offset_of__gain_left_14(),
	ProceduralAudio_t94483001::get_offset_of__gain_right_15(),
	ProceduralAudio_t94483001::get_offset_of__position_of_sound_16(),
	ProceduralAudio_t94483001::get_offset_of__direction_to_sound_17(),
	ProceduralAudio_t94483001::get_offset_of__direction_of_left_ear_18(),
	ProceduralAudio_t94483001::get_offset_of__direction_of_right_ear_19(),
	ProceduralAudio_t94483001::get_offset_of__distance_to_sound_20(),
	ProceduralAudio_t94483001::get_offset_of__distance_to_sound_last_frame_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1905 = { sizeof (Debugging_t1806286542), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1906 = { sizeof (KeyboardMovement_t185877974), -1, sizeof(KeyboardMovement_t185877974_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1906[9] = 
{
	KeyboardMovement_t185877974::get_offset_of_speed_2(),
	KeyboardMovement_t185877974::get_offset_of_move_3(),
	KeyboardMovement_t185877974_StaticFields::get_offset_of_look_4(),
	KeyboardMovement_t185877974_StaticFields::get_offset_of_forward_5(),
	KeyboardMovement_t185877974_StaticFields::get_offset_of_back_6(),
	KeyboardMovement_t185877974_StaticFields::get_offset_of_left_7(),
	KeyboardMovement_t185877974_StaticFields::get_offset_of_right_8(),
	KeyboardMovement_t185877974_StaticFields::get_offset_of_up_9(),
	KeyboardMovement_t185877974_StaticFields::get_offset_of_down_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1907 = { sizeof (CollisionEffect_t835188547), -1, sizeof(CollisionEffect_t835188547_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1907[4] = 
{
	0,
	CollisionEffect_t835188547::get_offset_of_particle_system_3(),
	CollisionEffect_t835188547_StaticFields::get_offset_of__particle_system_4(),
	CollisionEffect_t835188547::get_offset_of__index_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1908 = { sizeof (FadeEffect_t3898182477), -1, sizeof(FadeEffect_t3898182477_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1908[3] = 
{
	FadeEffect_t3898182477_StaticFields::get_offset_of__fade_0(),
	FadeEffect_t3898182477_StaticFields::get_offset_of__speed_1(),
	FadeEffect_t3898182477_StaticFields::get_offset_of__material_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1909 = { sizeof (Flock_t67973745), -1, sizeof(Flock_t67973745_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1909[39] = 
{
	0,
	0,
	0,
	Flock_t67973745_StaticFields::get_offset_of__material_3(),
	Flock_t67973745_StaticFields::get_offset_of_vertex_indices_4(),
	Flock_t67973745_StaticFields::get_offset_of_vertex_line_directions_5(),
	Flock_t67973745_StaticFields::get_offset_of_velocity_6(),
	Flock_t67973745_StaticFields::get_offset_of_prior_position_7(),
	Flock_t67973745_StaticFields::get_offset_of_position_8(),
	Flock_t67973745_StaticFields::get_offset_of_prior_direction_9(),
	Flock_t67973745_StaticFields::get_offset_of_direction_10(),
	Flock_t67973745_StaticFields::get_offset_of_direction_avoidance_11(),
	Flock_t67973745_StaticFields::get_offset_of_direction_alignment_12(),
	Flock_t67973745_StaticFields::get_offset_of_direction_neighborhood_13(),
	Flock_t67973745_StaticFields::get_offset_of_center_of_flock_14(),
	Flock_t67973745_StaticFields::get_offset_of_color_near_15(),
	Flock_t67973745_StaticFields::get_offset_of_color_far_16(),
	Flock_t67973745_StaticFields::get_offset_of_mouse_17(),
	Flock_t67973745_StaticFields::get_offset_of_max_neighbors_18(),
	Flock_t67973745_StaticFields::get_offset_of_neighborhood_radius_19(),
	Flock_t67973745_StaticFields::get_offset_of_boundary_20(),
	Flock_t67973745_StaticFields::get_offset_of_avoidance_21(),
	Flock_t67973745_StaticFields::get_offset_of_alignment_22(),
	Flock_t67973745_StaticFields::get_offset_of_cohesion_23(),
	Flock_t67973745_StaticFields::get_offset_of_gather_24(),
	Flock_t67973745_StaticFields::get_offset_of_home_25(),
	Flock_t67973745_StaticFields::get_offset_of_lerp_26(),
	Flock_t67973745_StaticFields::get_offset_of_velocity_multiplier_27(),
	Flock_t67973745_StaticFields::get_offset_of_velocity_max_28(),
	Flock_t67973745_StaticFields::get_offset_of_update_interval_29(),
	Flock_t67973745_StaticFields::get_offset_of_comparison_frequency_30(),
	Flock_t67973745_StaticFields::get_offset_of_direction_frequency_31(),
	Flock_t67973745_StaticFields::get_offset_of_camera_index_32(),
	Flock_t67973745_StaticFields::get_offset_of_attach_camera_33(),
	Flock_t67973745_StaticFields::get_offset_of_draw_neighborhood_lines_34(),
	Flock_t67973745_StaticFields::get_offset_of_draw_direction_lines_35(),
	Flock_t67973745_StaticFields::get_offset_of_debug_origin_36(),
	Flock_t67973745_StaticFields::get_offset_of_interactive_origin_37(),
	Flock_t67973745_StaticFields::get_offset_of_origin_38(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1910 = { sizeof (FlockRenderer_t1565251156), -1, sizeof(FlockRenderer_t1565251156_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1910[2] = 
{
	FlockRenderer_t1565251156_StaticFields::get_offset_of__matrix_local_to_world_2(),
	FlockRenderer_t1565251156_StaticFields::get_offset_of_draw_direction_lines_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1911 = { sizeof (Flocking_t2076345297), -1, sizeof(Flocking_t2076345297_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1911[24] = 
{
	Flocking_t2076345297::get_offset_of_max_neighbors_2(),
	Flocking_t2076345297::get_offset_of_neighborhood_radius_3(),
	Flocking_t2076345297::get_offset_of_boundary_4(),
	Flocking_t2076345297::get_offset_of_avoidance_5(),
	Flocking_t2076345297::get_offset_of_alignment_6(),
	Flocking_t2076345297::get_offset_of_cohesion_7(),
	Flocking_t2076345297::get_offset_of_gather_8(),
	Flocking_t2076345297::get_offset_of_home_9(),
	Flocking_t2076345297::get_offset_of_lerp_10(),
	Flocking_t2076345297::get_offset_of_update_interval_11(),
	Flocking_t2076345297::get_offset_of_comparison_frequency_12(),
	Flocking_t2076345297::get_offset_of_direction_frequency_13(),
	Flocking_t2076345297::get_offset_of_camera_index_14(),
	Flocking_t2076345297::get_offset_of_attach_camera_15(),
	Flocking_t2076345297::get_offset_of_draw_neighborhood_lines_16(),
	Flocking_t2076345297::get_offset_of_draw_direction_lines_17(),
	Flocking_t2076345297::get_offset_of_debug_origin_18(),
	Flocking_t2076345297::get_offset_of_velocity_19(),
	Flocking_t2076345297::get_offset_of_velocity_max_20(),
	Flocking_t2076345297::get_offset_of_interactive_origin_21(),
	Flocking_t2076345297::get_offset_of_origin_22(),
	Flocking_t2076345297::get_offset_of_color_near_23(),
	Flocking_t2076345297::get_offset_of_color_far_24(),
	Flocking_t2076345297_StaticFields::get_offset_of__mouse_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1912 = { sizeof (Navigation_t3856131636), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1912[4] = 
{
	Navigation_t3856131636::get_offset_of_view_2(),
	Navigation_t3856131636::get_offset_of_speed_3(),
	Navigation_t3856131636::get_offset_of__waypoint_4(),
	Navigation_t3856131636::get_offset_of__current_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1913 = { sizeof (Waypoint_t765160481), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1913[15] = 
{
	Waypoint_t765160481::get_offset_of_occupied_2(),
	Waypoint_t765160481::get_offset_of_active_3(),
	Waypoint_t765160481::get_offset_of_triggered_4(),
	Waypoint_t765160481::get_offset_of_active_color_5(),
	Waypoint_t765160481::get_offset_of_hilight_color_6(),
	Waypoint_t765160481::get_offset_of_disabled_color_7(),
	Waypoint_t765160481::get_offset_of_animation_scale_8(),
	Waypoint_t765160481::get_offset_of_animation_speed_9(),
	Waypoint_t765160481::get_offset_of__origional_scale_10(),
	Waypoint_t765160481::get_offset_of__hilight_11(),
	Waypoint_t765160481::get_offset_of__hilight_fade_speed_12(),
	Waypoint_t765160481::get_offset_of_rigid_body_13(),
	Waypoint_t765160481::get_offset_of__material_14(),
	Waypoint_t765160481::get_offset_of_position_15(),
	Waypoint_t765160481::get_offset_of_neighbor_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1914 = { sizeof (Clouds_t2021315838), -1, sizeof(Clouds_t2021315838_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1914[2] = 
{
	0,
	Clouds_t2021315838_StaticFields::get_offset_of__gameObject_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1915 = { sizeof (Island_t2199447093), -1, sizeof(Island_t2199447093_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1915[4] = 
{
	0,
	0,
	Island_t2199447093_StaticFields::get_offset_of__ocean_object_2(),
	Island_t2199447093_StaticFields::get_offset_of__game_object_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1916 = { sizeof (Ocean_t76007646), -1, sizeof(Ocean_t76007646_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1916[7] = 
{
	0,
	0,
	Ocean_t76007646_StaticFields::get_offset_of__gameObject_2(),
	Ocean_t76007646_StaticFields::get_offset_of__audio_object_3(),
	Ocean_t76007646_StaticFields::get_offset_of__audio_clip_4(),
	Ocean_t76007646_StaticFields::get_offset_of__pitch_5(),
	Ocean_t76007646_StaticFields::get_offset_of__audio_source_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1917 = { sizeof (ProceduralMesh_t3051431722), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1918 = { sizeof (Textures_t3356963544), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1919 = { sizeof (Scene0_t2470765892), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1919[9] = 
{
	Scene0_t2470765892::get_offset_of_main_object_2(),
	Scene0_t2470765892::get_offset_of_seat_object_3(),
	Scene0_t2470765892::get_offset_of_boat_object_4(),
	Scene0_t2470765892::get_offset_of_ocean_material_5(),
	Scene0_t2470765892::get_offset_of_ocean_collision_material_6(),
	Scene0_t2470765892::get_offset_of_animation_speed_7(),
	Scene0_t2470765892::get_offset_of_animation_scale_8(),
	Scene0_t2470765892::get_offset_of__origional_boat_y_position_9(),
	Scene0_t2470765892::get_offset_of_normal_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1920 = { sizeof (Scene1_t2470765893), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1920[1] = 
{
	Scene1_t2470765893::get_offset_of_ocean_material_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1921 = { sizeof (Scene2_t2470765894), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1921[2] = 
{
	Scene2_t2470765894::get_offset_of_ocean_material_2(),
	Scene2_t2470765894::get_offset_of_cloud_material_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1922 = { sizeof (Scene3_t2470765895), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1922[1] = 
{
	Scene3_t2470765895::get_offset_of_ocean_material_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1923 = { sizeof (Scene4_t2470765896), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1923[2] = 
{
	Scene4_t2470765896::get_offset_of_boat_object_2(),
	Scene4_t2470765896::get_offset_of_directional_light_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1924 = { sizeof (Scene_Example_Ocean_Shader_t34920782), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1924[1] = 
{
	Scene_Example_Ocean_Shader_t34920782::get_offset_of_ocean_material_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1925 = { sizeof (Seagull_t3632671645), -1, sizeof(Seagull_t3632671645_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1925[8] = 
{
	0,
	0,
	Seagull_t3632671645_StaticFields::get_offset_of_ORIGIN_4(),
	Seagull_t3632671645::get_offset_of__position_5(),
	Seagull_t3632671645::get_offset_of__direction_6(),
	Seagull_t3632671645::get_offset_of__velocity_7(),
	Seagull_t3632671645::get_offset_of__seed_8(),
	Seagull_t3632671645::get_offset_of__vertical_drift_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1926 = { sizeof (Seagulls_t943671414), -1, sizeof(Seagulls_t943671414_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1926[4] = 
{
	0,
	Seagulls_t943671414::get_offset_of_seagull_prefab_3(),
	Seagulls_t943671414_StaticFields::get_offset_of_seagull_object_4(),
	Seagulls_t943671414::get_offset_of__seagulls_object_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1927 = { sizeof (InfoCanvas_t700704710), -1, sizeof(InfoCanvas_t700704710_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1927[5] = 
{
	InfoCanvas_t700704710::get_offset_of_collision_2(),
	InfoCanvas_t700704710_StaticFields::get_offset_of__canvas_renderer_3(),
	InfoCanvas_t700704710_StaticFields::get_offset_of__opacity_4(),
	InfoCanvas_t700704710_StaticFields::get_offset_of__fade_5(),
	InfoCanvas_t700704710_StaticFields::get_offset_of__fade_rate_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1928 = { sizeof (PhysicsInteraction_t1423993195), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1928[9] = 
{
	PhysicsInteraction_t1423993195::get_offset_of_force_2(),
	PhysicsInteraction_t1423993195::get_offset_of_attached_3(),
	PhysicsInteraction_t1423993195::get_offset_of_hilight_color_4(),
	PhysicsInteraction_t1423993195::get_offset_of__origional_color_5(),
	PhysicsInteraction_t1423993195::get_offset_of__interactions_6(),
	PhysicsInteraction_t1423993195::get_offset_of__hilight_7(),
	PhysicsInteraction_t1423993195::get_offset_of__hilight_fade_speed_8(),
	PhysicsInteraction_t1423993195::get_offset_of__rigid_body_9(),
	PhysicsInteraction_t1423993195::get_offset_of__material_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1929 = { sizeof (UI_t2708), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1929[12] = 
{
	0,
	UI_t2708::get_offset_of_options_object_3(),
	UI_t2708::get_offset_of_main_object_4(),
	UI_t2708::get_offset_of_scenes_object_5(),
	UI_t2708::get_offset_of_overlay_object_6(),
	UI_t2708::get_offset_of_reticle_object_7(),
	UI_t2708::get_offset_of__trigger_count_8(),
	UI_t2708::get_offset_of__trigger_frame_count_9(),
	UI_t2708::get_offset_of__reticle_material_10(),
	UI_t2708::get_offset_of__reticule_default_color_11(),
	UI_t2708::get_offset_of__state_12(),
	UI_t2708::get_offset_of__state_previous_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1930 = { sizeof (UiState_t3198406082)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1930[5] = 
{
	UiState_t3198406082::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1931 = { sizeof (View_t2666181), -1, sizeof(View_t2666181_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1931[2] = 
{
	View_t2666181::get_offset_of_toggle_fade_2(),
	View_t2666181_StaticFields::get_offset_of_hit_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1932 = { sizeof (iTween_t3087282050), -1, sizeof(iTween_t3087282050_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1932[51] = 
{
	iTween_t3087282050_StaticFields::get_offset_of_tweens_2(),
	iTween_t3087282050_StaticFields::get_offset_of_cameraFade_3(),
	iTween_t3087282050::get_offset_of_id_4(),
	iTween_t3087282050::get_offset_of_type_5(),
	iTween_t3087282050::get_offset_of_method_6(),
	iTween_t3087282050::get_offset_of_easeType_7(),
	iTween_t3087282050::get_offset_of_time_8(),
	iTween_t3087282050::get_offset_of_delay_9(),
	iTween_t3087282050::get_offset_of_loopType_10(),
	iTween_t3087282050::get_offset_of_isRunning_11(),
	iTween_t3087282050::get_offset_of_isPaused_12(),
	iTween_t3087282050::get_offset_of__name_13(),
	iTween_t3087282050::get_offset_of_runningTime_14(),
	iTween_t3087282050::get_offset_of_percentage_15(),
	iTween_t3087282050::get_offset_of_delayStarted_16(),
	iTween_t3087282050::get_offset_of_kinematic_17(),
	iTween_t3087282050::get_offset_of_isLocal_18(),
	iTween_t3087282050::get_offset_of_loop_19(),
	iTween_t3087282050::get_offset_of_reverse_20(),
	iTween_t3087282050::get_offset_of_wasPaused_21(),
	iTween_t3087282050::get_offset_of_physics_22(),
	iTween_t3087282050::get_offset_of_tweenArguments_23(),
	iTween_t3087282050::get_offset_of_space_24(),
	iTween_t3087282050::get_offset_of_ease_25(),
	iTween_t3087282050::get_offset_of_apply_26(),
	iTween_t3087282050::get_offset_of_audioSource_27(),
	iTween_t3087282050::get_offset_of_vector3s_28(),
	iTween_t3087282050::get_offset_of_vector2s_29(),
	iTween_t3087282050::get_offset_of_colors_30(),
	iTween_t3087282050::get_offset_of_floats_31(),
	iTween_t3087282050::get_offset_of_rects_32(),
	iTween_t3087282050::get_offset_of_path_33(),
	iTween_t3087282050::get_offset_of_preUpdate_34(),
	iTween_t3087282050::get_offset_of_postUpdate_35(),
	iTween_t3087282050::get_offset_of_namedcolorvalue_36(),
	iTween_t3087282050::get_offset_of_lastRealTime_37(),
	iTween_t3087282050::get_offset_of_useRealTime_38(),
	iTween_t3087282050::get_offset_of_thisTransform_39(),
	iTween_t3087282050_StaticFields::get_offset_of_U3CU3Ef__switchU24map0_40(),
	iTween_t3087282050_StaticFields::get_offset_of_U3CU3Ef__switchU24map1_41(),
	iTween_t3087282050_StaticFields::get_offset_of_U3CU3Ef__switchU24map2_42(),
	iTween_t3087282050_StaticFields::get_offset_of_U3CU3Ef__switchU24map3_43(),
	iTween_t3087282050_StaticFields::get_offset_of_U3CU3Ef__switchU24map4_44(),
	iTween_t3087282050_StaticFields::get_offset_of_U3CU3Ef__switchU24map5_45(),
	iTween_t3087282050_StaticFields::get_offset_of_U3CU3Ef__switchU24map6_46(),
	iTween_t3087282050_StaticFields::get_offset_of_U3CU3Ef__switchU24map7_47(),
	iTween_t3087282050_StaticFields::get_offset_of_U3CU3Ef__switchU24map8_48(),
	iTween_t3087282050_StaticFields::get_offset_of_U3CU3Ef__switchU24map9_49(),
	iTween_t3087282050_StaticFields::get_offset_of_U3CU3Ef__switchU24mapA_50(),
	iTween_t3087282050_StaticFields::get_offset_of_U3CU3Ef__switchU24mapB_51(),
	iTween_t3087282050_StaticFields::get_offset_of_U3CU3Ef__switchU24mapC_52(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1933 = { sizeof (EaseType_t2734598229)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1933[34] = 
{
	EaseType_t2734598229::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1934 = { sizeof (LoopType_t1485160459)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1934[4] = 
{
	LoopType_t1485160459::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1935 = { sizeof (NamedValueColor_t1694108638)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1935[5] = 
{
	NamedValueColor_t1694108638::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1936 = { sizeof (Defaults_t4166900319), -1, sizeof(Defaults_t4166900319_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1936[16] = 
{
	Defaults_t4166900319_StaticFields::get_offset_of_time_0(),
	Defaults_t4166900319_StaticFields::get_offset_of_delay_1(),
	Defaults_t4166900319_StaticFields::get_offset_of_namedColorValue_2(),
	Defaults_t4166900319_StaticFields::get_offset_of_loopType_3(),
	Defaults_t4166900319_StaticFields::get_offset_of_easeType_4(),
	Defaults_t4166900319_StaticFields::get_offset_of_lookSpeed_5(),
	Defaults_t4166900319_StaticFields::get_offset_of_isLocal_6(),
	Defaults_t4166900319_StaticFields::get_offset_of_space_7(),
	Defaults_t4166900319_StaticFields::get_offset_of_orientToPath_8(),
	Defaults_t4166900319_StaticFields::get_offset_of_color_9(),
	Defaults_t4166900319_StaticFields::get_offset_of_updateTimePercentage_10(),
	Defaults_t4166900319_StaticFields::get_offset_of_updateTime_11(),
	Defaults_t4166900319_StaticFields::get_offset_of_cameraFadeDepth_12(),
	Defaults_t4166900319_StaticFields::get_offset_of_lookAhead_13(),
	Defaults_t4166900319_StaticFields::get_offset_of_useRealTime_14(),
	Defaults_t4166900319_StaticFields::get_offset_of_up_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1937 = { sizeof (CRSpline_t2211016973), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1937[1] = 
{
	CRSpline_t2211016973::get_offset_of_pts_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1938 = { sizeof (EasingFunction_t1323017328), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1939 = { sizeof (ApplyTween_t882368618), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1940 = { sizeof (U3CTweenDelayU3Ec__Iterator4_t41536442), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1940[3] = 
{
	U3CTweenDelayU3Ec__Iterator4_t41536442::get_offset_of_U24PC_0(),
	U3CTweenDelayU3Ec__Iterator4_t41536442::get_offset_of_U24current_1(),
	U3CTweenDelayU3Ec__Iterator4_t41536442::get_offset_of_U3CU3Ef__this_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1941 = { sizeof (U3CTweenRestartU3Ec__Iterator5_t4135396271), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1941[3] = 
{
	U3CTweenRestartU3Ec__Iterator5_t4135396271::get_offset_of_U24PC_0(),
	U3CTweenRestartU3Ec__Iterator5_t4135396271::get_offset_of_U24current_1(),
	U3CTweenRestartU3Ec__Iterator5_t4135396271::get_offset_of_U3CU3Ef__this_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1942 = { sizeof (U3CStartU3Ec__Iterator6_t2251047600), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1942[3] = 
{
	U3CStartU3Ec__Iterator6_t2251047600::get_offset_of_U24PC_0(),
	U3CStartU3Ec__Iterator6_t2251047600::get_offset_of_U24current_1(),
	U3CStartU3Ec__Iterator6_t2251047600::get_offset_of_U3CU3Ef__this_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1943 = { sizeof (U3CPrivateImplementationDetailsU3E_t3053238938), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3053238938_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1943[6] = 
{
	U3CPrivateImplementationDetailsU3E_t3053238938_StaticFields::get_offset_of_U24U24fieldU2D0_0(),
	U3CPrivateImplementationDetailsU3E_t3053238938_StaticFields::get_offset_of_U24U24fieldU2D1_1(),
	U3CPrivateImplementationDetailsU3E_t3053238938_StaticFields::get_offset_of_U24U24fieldU2D2_2(),
	U3CPrivateImplementationDetailsU3E_t3053238938_StaticFields::get_offset_of_U24U24fieldU2D3_3(),
	U3CPrivateImplementationDetailsU3E_t3053238938_StaticFields::get_offset_of_U24U24fieldU2D4_4(),
	U3CPrivateImplementationDetailsU3E_t3053238938_StaticFields::get_offset_of_U24U24fieldU2D5_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1944 = { sizeof (U24ArrayTypeU2428_t3379220385)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU2428_t3379220385_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1945 = { sizeof (U24ArrayTypeU2416_t3379220354)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU2416_t3379220354_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1946 = { sizeof (U24ArrayTypeU2420_t3379220379)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU2420_t3379220379_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1947 = { sizeof (U3CModuleU3E_t86524798), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1948 = { sizeof (AxeyWorksMobileDistortion_t1859950582), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1948[1] = 
{
	AxeyWorksMobileDistortion_t1859950582::get_offset_of_Material_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1949 = { sizeof (PolyWater_t2224577675), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1949[8] = 
{
	PolyWater_t2224577675::get_offset_of__waveSource1_2(),
	PolyWater_t2224577675::get_offset_of_WaveSpeed_3(),
	PolyWater_t2224577675::get_offset_of_WaveHeight_4(),
	PolyWater_t2224577675::get_offset_of_WavePattern_5(),
	PolyWater_t2224577675::get_offset_of_EdgeBlend_6(),
	PolyWater_t2224577675::get_offset_of_ForceFlatShading_7(),
	PolyWater_t2224577675::get_offset_of__mesh_8(),
	PolyWater_t2224577675::get_offset_of__verts_9(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
