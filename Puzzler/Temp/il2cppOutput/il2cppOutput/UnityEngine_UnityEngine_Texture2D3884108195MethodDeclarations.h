﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// UnityEngine.Color[]
struct ColorU5BU5D_t2441545636;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_TextureFormat4189619560.h"
#include "UnityEngine_UnityEngine_Texture2D3884108195.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"

// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
extern "C"  void Texture2D__ctor_m1883511258 (Texture2D_t3884108195 * __this, int32_t ___width0, int32_t ___height1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C"  void Texture2D__ctor_m3705883154 (Texture2D_t3884108195 * __this, int32_t ___width0, int32_t ___height1, int32_t ___format2, bool ___mipmap3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
extern "C"  void Texture2D__ctor_m1918985003 (Texture2D_t3884108195 * __this, int32_t ___width0, int32_t ___height1, int32_t ___format2, bool ___mipmap3, bool ___linear4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Internal_Create(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)
extern "C"  void Texture2D_Internal_Create_m457592211 (Il2CppObject * __this /* static, unused */, Texture2D_t3884108195 * ___mono0, int32_t ___width1, int32_t ___height2, int32_t ___format3, bool ___mipmap4, bool ___linear5, IntPtr_t ___nativeTex6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.Texture2D::get_whiteTexture()
extern "C"  Texture2D_t3884108195 * Texture2D_get_whiteTexture_m1214146742 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Texture2D::GetPixel(System.Int32,System.Int32)
extern "C"  Color_t4194546905  Texture2D_GetPixel_m380515877 (Texture2D_t3884108195 * __this, int32_t ___x0, int32_t ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::INTERNAL_CALL_GetPixel(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.Color&)
extern "C"  void Texture2D_INTERNAL_CALL_GetPixel_m3914095287 (Il2CppObject * __this /* static, unused */, Texture2D_t3884108195 * ___self0, int32_t ___x1, int32_t ___y2, Color_t4194546905 * ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)
extern "C"  Color_t4194546905  Texture2D_GetPixelBilinear_m2169326019 (Texture2D_t3884108195 * __this, float ___u0, float ___v1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::INTERNAL_CALL_GetPixelBilinear(UnityEngine.Texture2D,System.Single,System.Single,UnityEngine.Color&)
extern "C"  void Texture2D_INTERNAL_CALL_GetPixelBilinear_m2056702809 (Il2CppObject * __this /* static, unused */, Texture2D_t3884108195 * ___self0, float ___u1, float ___v2, Color_t4194546905 * ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
extern "C"  void Texture2D_SetPixels_m1289331147 (Texture2D_t3884108195 * __this, ColorU5BU5D_t2441545636* ___colors0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[],System.Int32)
extern "C"  void Texture2D_SetPixels_m2710961388 (Texture2D_t3884108195 * __this, ColorU5BU5D_t2441545636* ___colors0, int32_t ___miplevel1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixels(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color[],System.Int32)
extern "C"  void Texture2D_SetPixels_m3304189612 (Texture2D_t3884108195 * __this, int32_t ___x0, int32_t ___y1, int32_t ___blockWidth2, int32_t ___blockHeight3, ColorU5BU5D_t2441545636* ___colors4, int32_t ___miplevel5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)
extern "C"  void Texture2D_Apply_m2754532430 (Texture2D_t3884108195 * __this, bool ___updateMipmaps0, bool ___makeNoLongerReadable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Apply()
extern "C"  void Texture2D_Apply_m1364130776 (Texture2D_t3884108195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32)
extern "C"  void Texture2D_ReadPixels_m1334301696 (Texture2D_t3884108195 * __this, Rect_t4241904616  ___source0, int32_t ___destX1, int32_t ___destY2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::INTERNAL_CALL_ReadPixels(UnityEngine.Texture2D,UnityEngine.Rect&,System.Int32,System.Int32,System.Boolean)
extern "C"  void Texture2D_INTERNAL_CALL_ReadPixels_m388307610 (Il2CppObject * __this /* static, unused */, Texture2D_t3884108195 * ___self0, Rect_t4241904616 * ___source1, int32_t ___destX2, int32_t ___destY3, bool ___recalculateMipMaps4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Texture2D::EncodeToPNG()
extern "C"  ByteU5BU5D_t4260760469* Texture2D_EncodeToPNG_m2464495756 (Texture2D_t3884108195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
