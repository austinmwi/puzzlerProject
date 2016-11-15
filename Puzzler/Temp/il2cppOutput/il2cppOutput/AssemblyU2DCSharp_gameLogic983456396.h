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
// System.Int32[]
struct Int32U5BU5D_t3230847821;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// gameLogic
struct  gameLogic_t983456396  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject gameLogic::player
	GameObject_t3674682005 * ___player_2;
	// UnityEngine.GameObject gameLogic::eventSystem
	GameObject_t3674682005 * ___eventSystem_3;
	// UnityEngine.GameObject gameLogic::startUI
	GameObject_t3674682005 * ___startUI_4;
	// UnityEngine.GameObject gameLogic::restartUI
	GameObject_t3674682005 * ___restartUI_5;
	// UnityEngine.GameObject gameLogic::startPoint
	GameObject_t3674682005 * ___startPoint_6;
	// UnityEngine.GameObject gameLogic::playPoint
	GameObject_t3674682005 * ___playPoint_7;
	// UnityEngine.GameObject gameLogic::restartPoint
	GameObject_t3674682005 * ___restartPoint_8;
	// UnityEngine.GameObject[] gameLogic::puzzleSpheres
	GameObjectU5BU5D_t2662109048* ___puzzleSpheres_9;
	// System.Int32 gameLogic::puzzleLength
	int32_t ___puzzleLength_10;
	// System.Single gameLogic::puzzleSpeed
	float ___puzzleSpeed_11;
	// System.Int32[] gameLogic::puzzleOrder
	Int32U5BU5D_t3230847821* ___puzzleOrder_12;
	// System.Int32 gameLogic::currentDisplayIndex
	int32_t ___currentDisplayIndex_13;
	// System.Boolean gameLogic::currentlyDisplayingPattern
	bool ___currentlyDisplayingPattern_14;
	// System.Boolean gameLogic::playerWon
	bool ___playerWon_15;
	// System.Int32 gameLogic::currentSolveIndex
	int32_t ___currentSolveIndex_16;
	// UnityEngine.GameObject gameLogic::failAudioHolder
	GameObject_t3674682005 * ___failAudioHolder_17;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(gameLogic_t983456396, ___player_2)); }
	inline GameObject_t3674682005 * get_player_2() const { return ___player_2; }
	inline GameObject_t3674682005 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t3674682005 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_eventSystem_3() { return static_cast<int32_t>(offsetof(gameLogic_t983456396, ___eventSystem_3)); }
	inline GameObject_t3674682005 * get_eventSystem_3() const { return ___eventSystem_3; }
	inline GameObject_t3674682005 ** get_address_of_eventSystem_3() { return &___eventSystem_3; }
	inline void set_eventSystem_3(GameObject_t3674682005 * value)
	{
		___eventSystem_3 = value;
		Il2CppCodeGenWriteBarrier(&___eventSystem_3, value);
	}

	inline static int32_t get_offset_of_startUI_4() { return static_cast<int32_t>(offsetof(gameLogic_t983456396, ___startUI_4)); }
	inline GameObject_t3674682005 * get_startUI_4() const { return ___startUI_4; }
	inline GameObject_t3674682005 ** get_address_of_startUI_4() { return &___startUI_4; }
	inline void set_startUI_4(GameObject_t3674682005 * value)
	{
		___startUI_4 = value;
		Il2CppCodeGenWriteBarrier(&___startUI_4, value);
	}

	inline static int32_t get_offset_of_restartUI_5() { return static_cast<int32_t>(offsetof(gameLogic_t983456396, ___restartUI_5)); }
	inline GameObject_t3674682005 * get_restartUI_5() const { return ___restartUI_5; }
	inline GameObject_t3674682005 ** get_address_of_restartUI_5() { return &___restartUI_5; }
	inline void set_restartUI_5(GameObject_t3674682005 * value)
	{
		___restartUI_5 = value;
		Il2CppCodeGenWriteBarrier(&___restartUI_5, value);
	}

	inline static int32_t get_offset_of_startPoint_6() { return static_cast<int32_t>(offsetof(gameLogic_t983456396, ___startPoint_6)); }
	inline GameObject_t3674682005 * get_startPoint_6() const { return ___startPoint_6; }
	inline GameObject_t3674682005 ** get_address_of_startPoint_6() { return &___startPoint_6; }
	inline void set_startPoint_6(GameObject_t3674682005 * value)
	{
		___startPoint_6 = value;
		Il2CppCodeGenWriteBarrier(&___startPoint_6, value);
	}

	inline static int32_t get_offset_of_playPoint_7() { return static_cast<int32_t>(offsetof(gameLogic_t983456396, ___playPoint_7)); }
	inline GameObject_t3674682005 * get_playPoint_7() const { return ___playPoint_7; }
	inline GameObject_t3674682005 ** get_address_of_playPoint_7() { return &___playPoint_7; }
	inline void set_playPoint_7(GameObject_t3674682005 * value)
	{
		___playPoint_7 = value;
		Il2CppCodeGenWriteBarrier(&___playPoint_7, value);
	}

	inline static int32_t get_offset_of_restartPoint_8() { return static_cast<int32_t>(offsetof(gameLogic_t983456396, ___restartPoint_8)); }
	inline GameObject_t3674682005 * get_restartPoint_8() const { return ___restartPoint_8; }
	inline GameObject_t3674682005 ** get_address_of_restartPoint_8() { return &___restartPoint_8; }
	inline void set_restartPoint_8(GameObject_t3674682005 * value)
	{
		___restartPoint_8 = value;
		Il2CppCodeGenWriteBarrier(&___restartPoint_8, value);
	}

	inline static int32_t get_offset_of_puzzleSpheres_9() { return static_cast<int32_t>(offsetof(gameLogic_t983456396, ___puzzleSpheres_9)); }
	inline GameObjectU5BU5D_t2662109048* get_puzzleSpheres_9() const { return ___puzzleSpheres_9; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_puzzleSpheres_9() { return &___puzzleSpheres_9; }
	inline void set_puzzleSpheres_9(GameObjectU5BU5D_t2662109048* value)
	{
		___puzzleSpheres_9 = value;
		Il2CppCodeGenWriteBarrier(&___puzzleSpheres_9, value);
	}

	inline static int32_t get_offset_of_puzzleLength_10() { return static_cast<int32_t>(offsetof(gameLogic_t983456396, ___puzzleLength_10)); }
	inline int32_t get_puzzleLength_10() const { return ___puzzleLength_10; }
	inline int32_t* get_address_of_puzzleLength_10() { return &___puzzleLength_10; }
	inline void set_puzzleLength_10(int32_t value)
	{
		___puzzleLength_10 = value;
	}

	inline static int32_t get_offset_of_puzzleSpeed_11() { return static_cast<int32_t>(offsetof(gameLogic_t983456396, ___puzzleSpeed_11)); }
	inline float get_puzzleSpeed_11() const { return ___puzzleSpeed_11; }
	inline float* get_address_of_puzzleSpeed_11() { return &___puzzleSpeed_11; }
	inline void set_puzzleSpeed_11(float value)
	{
		___puzzleSpeed_11 = value;
	}

	inline static int32_t get_offset_of_puzzleOrder_12() { return static_cast<int32_t>(offsetof(gameLogic_t983456396, ___puzzleOrder_12)); }
	inline Int32U5BU5D_t3230847821* get_puzzleOrder_12() const { return ___puzzleOrder_12; }
	inline Int32U5BU5D_t3230847821** get_address_of_puzzleOrder_12() { return &___puzzleOrder_12; }
	inline void set_puzzleOrder_12(Int32U5BU5D_t3230847821* value)
	{
		___puzzleOrder_12 = value;
		Il2CppCodeGenWriteBarrier(&___puzzleOrder_12, value);
	}

	inline static int32_t get_offset_of_currentDisplayIndex_13() { return static_cast<int32_t>(offsetof(gameLogic_t983456396, ___currentDisplayIndex_13)); }
	inline int32_t get_currentDisplayIndex_13() const { return ___currentDisplayIndex_13; }
	inline int32_t* get_address_of_currentDisplayIndex_13() { return &___currentDisplayIndex_13; }
	inline void set_currentDisplayIndex_13(int32_t value)
	{
		___currentDisplayIndex_13 = value;
	}

	inline static int32_t get_offset_of_currentlyDisplayingPattern_14() { return static_cast<int32_t>(offsetof(gameLogic_t983456396, ___currentlyDisplayingPattern_14)); }
	inline bool get_currentlyDisplayingPattern_14() const { return ___currentlyDisplayingPattern_14; }
	inline bool* get_address_of_currentlyDisplayingPattern_14() { return &___currentlyDisplayingPattern_14; }
	inline void set_currentlyDisplayingPattern_14(bool value)
	{
		___currentlyDisplayingPattern_14 = value;
	}

	inline static int32_t get_offset_of_playerWon_15() { return static_cast<int32_t>(offsetof(gameLogic_t983456396, ___playerWon_15)); }
	inline bool get_playerWon_15() const { return ___playerWon_15; }
	inline bool* get_address_of_playerWon_15() { return &___playerWon_15; }
	inline void set_playerWon_15(bool value)
	{
		___playerWon_15 = value;
	}

	inline static int32_t get_offset_of_currentSolveIndex_16() { return static_cast<int32_t>(offsetof(gameLogic_t983456396, ___currentSolveIndex_16)); }
	inline int32_t get_currentSolveIndex_16() const { return ___currentSolveIndex_16; }
	inline int32_t* get_address_of_currentSolveIndex_16() { return &___currentSolveIndex_16; }
	inline void set_currentSolveIndex_16(int32_t value)
	{
		___currentSolveIndex_16 = value;
	}

	inline static int32_t get_offset_of_failAudioHolder_17() { return static_cast<int32_t>(offsetof(gameLogic_t983456396, ___failAudioHolder_17)); }
	inline GameObject_t3674682005 * get_failAudioHolder_17() const { return ___failAudioHolder_17; }
	inline GameObject_t3674682005 ** get_address_of_failAudioHolder_17() { return &___failAudioHolder_17; }
	inline void set_failAudioHolder_17(GameObject_t3674682005 * value)
	{
		___failAudioHolder_17 = value;
		Il2CppCodeGenWriteBarrier(&___failAudioHolder_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
