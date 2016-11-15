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

// gameLogic
struct gameLogic_t983456396;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"

// System.Void gameLogic::.ctor()
extern "C"  void gameLogic__ctor_m3190544479 (gameLogic_t983456396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void gameLogic::Start()
extern "C"  void gameLogic_Start_m2137682271 (gameLogic_t983456396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void gameLogic::Update()
extern "C"  void gameLogic_Update_m1849493134 (gameLogic_t983456396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void gameLogic::playerSelection(UnityEngine.GameObject)
extern "C"  void gameLogic_playerSelection_m1694732544 (gameLogic_t983456396 * __this, GameObject_t3674682005 * ___sphere0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void gameLogic::solutionCheck(System.Int32)
extern "C"  void gameLogic_solutionCheck_m2617745469 (gameLogic_t983456396 * __this, int32_t ___playerSelectionIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void gameLogic::startPuzzle()
extern "C"  void gameLogic_startPuzzle_m2693013469 (gameLogic_t983456396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void gameLogic::displayPattern()
extern "C"  void gameLogic_displayPattern_m585784531 (gameLogic_t983456396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void gameLogic::generatePuzzleSequence()
extern "C"  void gameLogic_generatePuzzleSequence_m2376303065 (gameLogic_t983456396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void gameLogic::resetPuzzle()
extern "C"  void gameLogic_resetPuzzle_m1324497866 (gameLogic_t983456396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void gameLogic::resetGame()
extern "C"  void gameLogic_resetGame_m234332478 (gameLogic_t983456396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void gameLogic::puzzleFailure()
extern "C"  void gameLogic_puzzleFailure_m1873606153 (gameLogic_t983456396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void gameLogic::puzzleSuccess()
extern "C"  void gameLogic_puzzleSuccess_m3340520002 (gameLogic_t983456396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void gameLogic::finishingFlourish()
extern "C"  void gameLogic_finishingFlourish_m1389309796 (gameLogic_t983456396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
