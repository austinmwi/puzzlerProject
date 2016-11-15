#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// ProceduralAudio
struct ProceduralAudio_t94483001;
// System.Single[]
struct SingleU5BU5D_t2316563989;

#include "codegen/il2cpp-codegen.h"

// System.Void ProceduralAudio::.ctor()
extern "C"  void ProceduralAudio__ctor_m111707474 (ProceduralAudio_t94483001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProceduralAudio::Awake()
extern "C"  void ProceduralAudio_Awake_m349312693 (ProceduralAudio_t94483001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProceduralAudio::OnAudioFilterRead(System.Single[],System.Int32)
extern "C"  void ProceduralAudio_OnAudioFilterRead_m2134591587 (ProceduralAudio_t94483001 * __this, SingleU5BU5D_t2316563989* ___buffer0, int32_t ___channels1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProceduralAudio::OnGUI()
extern "C"  void ProceduralAudio_OnGUI_m3902073420 (ProceduralAudio_t94483001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProceduralAudio::SetSourcePosition()
extern "C"  void ProceduralAudio_SetSourcePosition_m3227601366 (ProceduralAudio_t94483001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProceduralAudio::SetGain()
extern "C"  void ProceduralAudio_SetGain_m4147120497 (ProceduralAudio_t94483001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProceduralAudio::SetCelerity()
extern "C"  void ProceduralAudio_SetCelerity_m3249952329 (ProceduralAudio_t94483001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProceduralAudio::SetTheta()
extern "C"  void ProceduralAudio_SetTheta_m2856273294 (ProceduralAudio_t94483001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProceduralAudio::GenerateSineWave(System.Single[],System.Int32)
extern "C"  void ProceduralAudio_GenerateSineWave_m3218067739 (ProceduralAudio_t94483001 * __this, SingleU5BU5D_t2316563989* ___buffer0, int32_t ___channels1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double ProceduralAudio::Lerp(System.Double,System.Double,System.Double)
extern "C"  double ProceduralAudio_Lerp_m2303293268 (ProceduralAudio_t94483001 * __this, double ___x0, double ___y1, double ___a2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
