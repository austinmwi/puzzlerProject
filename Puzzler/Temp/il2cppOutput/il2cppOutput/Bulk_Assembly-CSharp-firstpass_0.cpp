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

// AxeyWorksMobileDistortion
struct AxeyWorksMobileDistortion_t1859950582;
// UnityEngine.Renderer
struct Renderer_t3076687687;
// System.Object
struct Il2CppObject;
// PolyWater
struct PolyWater_t2224577675;
// UnityEngine.MeshFilter
struct MeshFilter_t3839065225;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_AxeyWorksMobileDisto1859950582.h"
#include "AssemblyU2DCSharpU2Dfirstpass_AxeyWorksMobileDisto1859950582MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3501516275MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Renderer3076687687MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Renderer3076687687.h"
#include "UnityEngine_UnityEngine_Component3501516275.h"
#include "UnityEngine_UnityEngine_Material3870600107.h"
#include "UnityEngine_UnityEngine_Material3870600107MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time4241968337MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Random3156561159MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector44282066567.h"
#include "mscorlib_System_Single4291918972.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Vector44282066567MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_PolyWater2224577675.h"
#include "AssemblyU2DCSharpU2Dfirstpass_PolyWater2224577675MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Vector34282066566MethodDeclarations.h"
#include "mscorlib_System_Boolean476798718.h"
#include "UnityEngine_UnityEngine_Camera2727095145MethodDeclarations.h"
#include "UnityEngine_UnityEngine_MeshFilter3839065225.h"
#include "UnityEngine_UnityEngine_Camera2727095145.h"
#include "UnityEngine_UnityEngine_DepthTextureMode658977311.h"
#include "UnityEngine_UnityEngine_MeshFilter3839065225MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Mesh4241756145MethodDeclarations.h"
#include "UnityEngine_ArrayTypes.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Int321153838500.h"
#include "UnityEngine_UnityEngine_Mesh4241756145.h"
#include "UnityEngine_UnityEngine_SystemInfo3820892225MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Shader3191267369MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object3071478659MethodDeclarations.h"
#include "UnityEngine_UnityEngine_RenderTextureFormat2841883826.h"
#include "UnityEngine_UnityEngine_Object3071478659.h"
#include "UnityEngine_UnityEngine_Mathf4203372500MethodDeclarations.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m267839954_gshared (Component_t3501516275 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m267839954(__this, method) ((  Il2CppObject * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
#define Component_GetComponent_TisRenderer_t3076687687_m500377675(__this, method) ((  Renderer_t3076687687 * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
#define Component_GetComponent_TisMeshFilter_t3839065225_m3816897097(__this, method) ((  MeshFilter_t3839065225 * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AxeyWorksMobileDistortion::.ctor()
extern "C"  void AxeyWorksMobileDistortion__ctor_m3191940609 (AxeyWorksMobileDistortion_t1859950582 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AxeyWorksMobileDistortion::Start()
extern const MethodInfo* Component_GetComponent_TisRenderer_t3076687687_m500377675_MethodInfo_var;
extern const uint32_t AxeyWorksMobileDistortion_Start_m2139078401_MetadataUsageId;
extern "C"  void AxeyWorksMobileDistortion_Start_m2139078401 (AxeyWorksMobileDistortion_t1859950582 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (AxeyWorksMobileDistortion_Start_m2139078401_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Renderer_t3076687687 * L_0 = Component_GetComponent_TisRenderer_t3076687687_m500377675(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t3076687687_m500377675_MethodInfo_var);
		NullCheck(L_0);
		Material_t3870600107 * L_1 = Renderer_get_material_m2720864603(L_0, /*hidden argument*/NULL);
		__this->set_Material_2(L_1);
		return;
	}
}
// System.Void AxeyWorksMobileDistortion::Update()
extern Il2CppCodeGenString* _stringLiteral2459852756;
extern const uint32_t AxeyWorksMobileDistortion_Update_m1892773164_MetadataUsageId;
extern "C"  void AxeyWorksMobileDistortion_Update_m1892773164 (AxeyWorksMobileDistortion_t1859950582 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (AxeyWorksMobileDistortion_Update_m1892773164_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector4_t4282066567  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Material_t3870600107 * L_0 = __this->get_Material_2();
		NullCheck(L_0);
		Vector4_t4282066567  L_1 = Material_GetVector_m4092100414(L_0, _stringLiteral2459852756, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = (&V_0)->get_w_4();
		V_1 = L_2;
		float L_3 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = V_1;
		float L_5 = Random_get_value_m2402066692(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = ((float)((float)((float)((float)((float)((float)L_3*(float)(0.1f)))*(float)L_4))*(float)L_5));
		Vector4_t4282066567 * L_6 = (&V_0);
		float L_7 = L_6->get_x_1();
		float L_8 = V_2;
		L_6->set_x_1(((float)((float)L_7+(float)L_8)));
		Vector4_t4282066567 * L_9 = (&V_0);
		float L_10 = L_9->get_y_2();
		float L_11 = V_2;
		L_9->set_y_2(((float)((float)L_10-(float)L_11)));
		Material_t3870600107 * L_12 = __this->get_Material_2();
		float L_13 = (&V_0)->get_x_1();
		float L_14 = (&V_0)->get_y_2();
		float L_15 = (&V_0)->get_z_3();
		float L_16 = (&V_0)->get_w_4();
		Vector4_t4282066567  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Vector4__ctor_m2441427762(&L_17, L_13, L_14, L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_12);
		Material_SetVector_m3505096203(L_12, _stringLiteral2459852756, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PolyWater::.ctor()
extern "C"  void PolyWater__ctor_m719364364 (PolyWater_t2224577675 * __this, const MethodInfo* method)
{
	{
		Vector3_t4282066566  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector3__ctor_m2926210380(&L_0, (2.0f), (0.0f), (2.0f), /*hidden argument*/NULL);
		__this->set__waveSource1_2(L_0);
		__this->set_WaveSpeed_3((-0.3f));
		__this->set_WaveHeight_4((0.48f));
		__this->set_WavePattern_5((0.62f));
		__this->set_EdgeBlend_6((bool)1);
		__this->set_ForceFlatShading_7((bool)1);
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PolyWater::Start()
extern const MethodInfo* Component_GetComponent_TisMeshFilter_t3839065225_m3816897097_MethodInfo_var;
extern const uint32_t PolyWater_Start_m3961469452_MetadataUsageId;
extern "C"  void PolyWater_Start_m3961469452 (PolyWater_t2224577675 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PolyWater_Start_m3961469452_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	MeshFilter_t3839065225 * V_0 = NULL;
	{
		Camera_t2727095145 * L_0 = Camera_get_main_m671815697(NULL /*static, unused*/, /*hidden argument*/NULL);
		Camera_t2727095145 * L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2 = Camera_get_depthTextureMode_m2117446653(L_1, /*hidden argument*/NULL);
		NullCheck(L_1);
		Camera_set_depthTextureMode_m2368326786(L_1, ((int32_t)((int32_t)L_2|(int32_t)1)), /*hidden argument*/NULL);
		MeshFilter_t3839065225 * L_3 = Component_GetComponent_TisMeshFilter_t3839065225_m3816897097(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t3839065225_m3816897097_MethodInfo_var);
		V_0 = L_3;
		MeshFilter_t3839065225 * L_4 = V_0;
		PolyWater_MakeMeshLowPoly_m3881493020(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PolyWater::Update()
extern "C"  void PolyWater_Update_m2552320897 (PolyWater_t2224577675 * __this, const MethodInfo* method)
{
	{
		PolyWater_CalcWave_m2939376294(__this, /*hidden argument*/NULL);
		PolyWater_SetEdgeBlend_m1148733834(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.MeshFilter PolyWater::MakeMeshLowPoly(UnityEngine.MeshFilter)
extern Il2CppClass* Vector3U5BU5D_t215400611_il2cpp_TypeInfo_var;
extern const uint32_t PolyWater_MakeMeshLowPoly_m3881493020_MetadataUsageId;
extern "C"  MeshFilter_t3839065225 * PolyWater_MakeMeshLowPoly_m3881493020 (PolyWater_t2224577675 * __this, MeshFilter_t3839065225 * ___mf0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PolyWater_MakeMeshLowPoly_m3881493020_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3U5BU5D_t215400611* V_0 = NULL;
	Int32U5BU5D_t3230847821* V_1 = NULL;
	Vector3U5BU5D_t215400611* V_2 = NULL;
	int32_t V_3 = 0;
	{
		MeshFilter_t3839065225 * L_0 = ___mf0;
		NullCheck(L_0);
		Mesh_t4241756145 * L_1 = MeshFilter_get_sharedMesh_m2700148450(L_0, /*hidden argument*/NULL);
		__this->set__mesh_8(L_1);
		Mesh_t4241756145 * L_2 = __this->get__mesh_8();
		NullCheck(L_2);
		Vector3U5BU5D_t215400611* L_3 = Mesh_get_vertices_m3685486174(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Mesh_t4241756145 * L_4 = __this->get__mesh_8();
		NullCheck(L_4);
		Int32U5BU5D_t3230847821* L_5 = Mesh_get_triangles_m2145908418(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		Int32U5BU5D_t3230847821* L_6 = V_1;
		NullCheck(L_6);
		V_2 = ((Vector3U5BU5D_t215400611*)SZArrayNew(Vector3U5BU5D_t215400611_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_6)->max_length))))));
		V_3 = 0;
		goto IL_0056;
	}

IL_0034:
	{
		Vector3U5BU5D_t215400611* L_7 = V_2;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Vector3U5BU5D_t215400611* L_9 = V_0;
		Int32U5BU5D_t3230847821* L_10 = V_1;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_13);
		(*(Vector3_t4282066566 *)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))) = (*(Vector3_t4282066566 *)((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))));
		Int32U5BU5D_t3230847821* L_14 = V_1;
		int32_t L_15 = V_3;
		int32_t L_16 = V_3;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (int32_t)L_16);
		int32_t L_17 = V_3;
		V_3 = ((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_0056:
	{
		int32_t L_18 = V_3;
		Int32U5BU5D_t3230847821* L_19 = V_1;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_19)->max_length)))))))
		{
			goto IL_0034;
		}
	}
	{
		Mesh_t4241756145 * L_20 = __this->get__mesh_8();
		Vector3U5BU5D_t215400611* L_21 = V_2;
		NullCheck(L_20);
		Mesh_set_vertices_m2628866109(L_20, L_21, /*hidden argument*/NULL);
		Mesh_t4241756145 * L_22 = __this->get__mesh_8();
		Int32U5BU5D_t3230847821* L_23 = V_1;
		NullCheck(L_22);
		Mesh_set_triangles_m2341339867(L_22, L_23, /*hidden argument*/NULL);
		Mesh_t4241756145 * L_24 = __this->get__mesh_8();
		NullCheck(L_24);
		Mesh_RecalculateBounds_m3754336742(L_24, /*hidden argument*/NULL);
		Mesh_t4241756145 * L_25 = __this->get__mesh_8();
		NullCheck(L_25);
		Mesh_RecalculateNormals_m1806625021(L_25, /*hidden argument*/NULL);
		Mesh_t4241756145 * L_26 = __this->get__mesh_8();
		NullCheck(L_26);
		Vector3U5BU5D_t215400611* L_27 = Mesh_get_vertices_m3685486174(L_26, /*hidden argument*/NULL);
		__this->set__verts_9(L_27);
		MeshFilter_t3839065225 * L_28 = ___mf0;
		return L_28;
	}
}
// System.Void PolyWater::SetEdgeBlend()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2908883890;
extern const uint32_t PolyWater_SetEdgeBlend_m1148733834_MetadataUsageId;
extern "C"  void PolyWater_SetEdgeBlend_m1148733834 (PolyWater_t2224577675 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PolyWater_SetEdgeBlend_m1148733834_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = SystemInfo_SupportsRenderTextureFormat_m1773213581(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		__this->set_EdgeBlend_6((bool)0);
	}

IL_0012:
	{
		bool L_1 = __this->get_EdgeBlend_6();
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		Shader_EnableKeyword_m944528214(NULL /*static, unused*/, _stringLiteral2908883890, /*hidden argument*/NULL);
		Camera_t2727095145 * L_2 = Camera_get_main_m671815697(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m2106766291(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0048;
		}
	}
	{
		Camera_t2727095145 * L_4 = Camera_get_main_m671815697(NULL /*static, unused*/, /*hidden argument*/NULL);
		Camera_t2727095145 * L_5 = L_4;
		NullCheck(L_5);
		int32_t L_6 = Camera_get_depthTextureMode_m2117446653(L_5, /*hidden argument*/NULL);
		NullCheck(L_5);
		Camera_set_depthTextureMode_m2368326786(L_5, ((int32_t)((int32_t)L_6|(int32_t)1)), /*hidden argument*/NULL);
	}

IL_0048:
	{
		goto IL_0057;
	}

IL_004d:
	{
		Shader_DisableKeyword_m2163321765(NULL /*static, unused*/, _stringLiteral2908883890, /*hidden argument*/NULL);
	}

IL_0057:
	{
		return;
	}
}
// System.Void PolyWater::CalcWave()
extern Il2CppClass* Mathf_t4203372500_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisMeshFilter_t3839065225_m3816897097_MethodInfo_var;
extern const uint32_t PolyWater_CalcWave_m2939376294_MetadataUsageId;
extern "C"  void PolyWater_CalcWave_m2939376294 (PolyWater_t2224577675 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PolyWater_CalcWave_m2939376294_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t4282066566  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		V_0 = 0;
		goto IL_008b;
	}

IL_0007:
	{
		Vector3U5BU5D_t215400611* L_0 = __this->get__verts_9();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		V_1 = (*(Vector3_t4282066566 *)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))));
		(&V_1)->set_y_2((0.0f));
		Vector3_t4282066566  L_2 = V_1;
		Vector3_t4282066566  L_3 = __this->get__waveSource1_2();
		float L_4 = Vector3_Distance_m3366690344(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		float L_5 = V_2;
		float L_6 = __this->get_WavePattern_5();
		float L_7 = __this->get_WavePattern_5();
		V_2 = ((float)((float)(fmodf(L_5, L_6))/(float)L_7));
		float L_8 = __this->get_WaveHeight_4();
		float L_9 = Time_get_time_m342192902(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_10 = __this->get_WaveSpeed_3();
		float L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_12 = sinf(((float)((float)((float)((float)((float)((float)((float)((float)L_9*(float)(3.14159274f)))*(float)(2.0f)))*(float)L_10))+(float)((float)((float)(6.28318548f)*(float)L_11)))));
		(&V_1)->set_y_2(((float)((float)L_8*(float)L_12)));
		Vector3U5BU5D_t215400611* L_13 = __this->get__verts_9();
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		Vector3_t4282066566  L_15 = V_1;
		(*(Vector3_t4282066566 *)((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))) = L_15;
		int32_t L_16 = V_0;
		V_0 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_008b:
	{
		int32_t L_17 = V_0;
		Vector3U5BU5D_t215400611* L_18 = __this->get__verts_9();
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_18)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		Mesh_t4241756145 * L_19 = __this->get__mesh_8();
		Vector3U5BU5D_t215400611* L_20 = __this->get__verts_9();
		NullCheck(L_19);
		Mesh_set_vertices_m2628866109(L_19, L_20, /*hidden argument*/NULL);
		Mesh_t4241756145 * L_21 = __this->get__mesh_8();
		NullCheck(L_21);
		Mesh_RecalculateNormals_m1806625021(L_21, /*hidden argument*/NULL);
		Mesh_t4241756145 * L_22 = __this->get__mesh_8();
		NullCheck(L_22);
		Mesh_MarkDynamic_m2243343024(L_22, /*hidden argument*/NULL);
		MeshFilter_t3839065225 * L_23 = Component_GetComponent_TisMeshFilter_t3839065225_m3816897097(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t3839065225_m3816897097_MethodInfo_var);
		Mesh_t4241756145 * L_24 = __this->get__mesh_8();
		NullCheck(L_23);
		MeshFilter_set_sharedMesh_m793190055(L_23, L_24, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
