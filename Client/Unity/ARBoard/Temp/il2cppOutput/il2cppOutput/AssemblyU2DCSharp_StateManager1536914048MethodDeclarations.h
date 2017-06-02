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

// StateManager
struct StateManager_t1536914048;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String[]
struct StringU5BU5D_t1642385972;
// PlayerState
struct PlayerState_t2629781050;
// Scaffolding
struct Scaffolding_t1214675190;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_PlayerState2629781050.h"

// System.Void StateManager::.ctor()
extern "C"  void StateManager__ctor_m2851136447 (StateManager_t1536914048 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// StateManager StateManager::get_Instance()
extern "C"  StateManager_t1536914048 * StateManager_get_Instance_m1699997634 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StateManager::Load(UnityEngine.GameObject)
extern "C"  void StateManager_Load_m1472344769 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StateManager::Init()
extern "C"  void StateManager_Init_m742564269 (StateManager_t1536914048 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 StateManager::get_CurrentTurn()
extern "C"  int32_t StateManager_get_CurrentTurn_m1588229960 (StateManager_t1536914048 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StateManager::SetNextTurn()
extern "C"  void StateManager_SetNextTurn_m1279588039 (StateManager_t1536914048 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StateManager::SetNewGameState(System.String[])
extern "C"  void StateManager_SetNewGameState_m3615806820 (StateManager_t1536914048 * __this, StringU5BU5D_t1642385972* ___replySplitArr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 StateManager::GetMyPlayerNumber()
extern "C"  int32_t StateManager_GetMyPlayerNumber_m117360139 (StateManager_t1536914048 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StateManager::TestAddMyPlayerNumber()
extern "C"  void StateManager_TestAddMyPlayerNumber_m822703770 (StateManager_t1536914048 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 StateManager::GetPlayerScaffoldingLocatePosition(PlayerState)
extern "C"  Vector3_t2243707580  StateManager_GetPlayerScaffoldingLocatePosition_m1208786639 (StateManager_t1536914048 * __this, PlayerState_t2629781050 * ___playerState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Scaffolding StateManager::GetScaffolding(System.Int32)
extern "C"  Scaffolding_t1214675190 * StateManager_GetScaffolding_m3680515575 (StateManager_t1536914048 * __this, int32_t ___location0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StateManager::IsSurviveOne()
extern "C"  bool StateManager_IsSurviveOne_m2271723153 (StateManager_t1536914048 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
