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

// GameManager
struct GameManager_t2252321495;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.String[]
struct StringU5BU5D_t1642385972;
// PlayerState
struct PlayerState_t2629781050;
// Scaffolding
struct Scaffolding_t1214675190;
// System.Boolean[]
struct BooleanU5BU5D_t3568034315;
// System.Collections.Generic.List`1<Scaffolding>
struct List_1_t583796322;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GameManager_E_DiceState3739036110.h"
#include "AssemblyU2DCSharp_PlayerState2629781050.h"
#include "AssemblyU2DCSharp_Scaffolding1214675190.h"

// System.Void GameManager::.ctor()
extern "C"  void GameManager__ctor_m293624896 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::UnityPluginSetSession()
extern "C"  void GameManager_UnityPluginSetSession_m107154406 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::UnityPluginGameEnd()
extern "C"  void GameManager_UnityPluginGameEnd_m3133557621 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameManager GameManager::get_Instance()
extern "C"  GameManager_t2252321495 * GameManager_get_Instance_m638970098 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Load(UnityEngine.GameObject)
extern "C"  void GameManager_Load_m2178321288 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Init()
extern "C"  void GameManager_Init_m3690781476 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::GameSetting()
extern "C"  void GameManager_GameSetting_m3378211310 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::GetSessionID(System.String)
extern "C"  void GameManager_GetSessionID_m3263297209 (GameManager_t2252321495 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameManager::ServerConnect(System.String)
extern "C"  Il2CppObject * GameManager_ServerConnect_m3409400065 (GameManager_t2252321495 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::ReplyProcess(System.String)
extern "C"  void GameManager_ReplyProcess_m3488811681 (GameManager_t2252321495 * __this, String_t* ___reply0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::DiceInput()
extern "C"  void GameManager_DiceInput_m2073602047 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameManager/E_DiceState GameManager::get_DiceState()
extern "C"  int32_t GameManager_get_DiceState_m4901920 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::set_DiceState(GameManager/E_DiceState)
extern "C"  void GameManager_set_DiceState_m2033167979 (GameManager_t2252321495 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::SetNewGame(System.String[])
extern "C"  void GameManager_SetNewGame_m2669399596 (GameManager_t2252321495 * __this, StringU5BU5D_t1642385972* ___replySplitArr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::StartGame()
extern "C"  void GameManager_StartGame_m4019248290 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameManager::DiceProcess()
extern "C"  Il2CppObject * GameManager_DiceProcess_m2891723652 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::MovePlayer(System.String[])
extern "C"  void GameManager_MovePlayer_m526380336 (GameManager_t2252321495 * __this, StringU5BU5D_t1642385972* ___replySplitArr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameManager::MoveProcess(System.Int32,System.Int32)
extern "C"  Il2CppObject * GameManager_MoveProcess_m3497893170 (GameManager_t2252321495 * __this, int32_t ___playerNum0, int32_t ___moveValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::CalculateCost(PlayerState,Scaffolding)
extern "C"  void GameManager_CalculateCost_m175569423 (GameManager_t2252321495 * __this, PlayerState_t2629781050 * ___playerState0, Scaffolding_t1214675190 * ___scaffolding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::CalculateCostSell(System.Boolean[],System.Collections.Generic.List`1<Scaffolding>,System.Int32)
extern "C"  void GameManager_CalculateCostSell_m2932004087 (GameManager_t2252321495 * __this, BooleanU5BU5D_t3568034315* ___checkArr0, List_1_t583796322 * ___scaffoldings1, int32_t ___cost2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Charge(System.String[])
extern "C"  void GameManager_Charge_m1812032028 (GameManager_t2252321495 * __this, StringU5BU5D_t1642385972* ___replySplitArr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::PlayerDead(System.Int32)
extern "C"  void GameManager_PlayerDead_m2518621540 (GameManager_t2252321495 * __this, int32_t ___playerNum0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::PlayerDead(System.String[])
extern "C"  void GameManager_PlayerDead_m3521903065 (GameManager_t2252321495 * __this, StringU5BU5D_t1642385972* ___replySplitArr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::BuildObject(System.String[])
extern "C"  void GameManager_BuildObject_m466309141 (GameManager_t2252321495 * __this, StringU5BU5D_t1642385972* ___replySplitArr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::EndTurn()
extern "C"  void GameManager_EndTurn_m3168103454 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::NextTurn(System.String[])
extern "C"  void GameManager_NextTurn_m4027694354 (GameManager_t2252321495 * __this, StringU5BU5D_t1642385972* ___replySplitArr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameManager::CheckMoney(System.Int32)
extern "C"  bool GameManager_CheckMoney_m3564917389 (GameManager_t2252321495 * __this, int32_t ___money0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::BuildHotel()
extern "C"  void GameManager_BuildHotel_m3750999760 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::BuildBuilding()
extern "C"  void GameManager_BuildBuilding_m3634260516 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::BuildMotel()
extern "C"  void GameManager_BuildMotel_m3750830635 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::BuildCancle()
extern "C"  void GameManager_BuildCancle_m407953748 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
