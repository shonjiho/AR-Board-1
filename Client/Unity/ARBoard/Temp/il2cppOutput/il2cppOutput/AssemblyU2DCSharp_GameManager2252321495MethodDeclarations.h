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
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UIButton
struct UIButton_t3377238306;
// UILabel
struct UILabel_t1795115428;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_GameManager_E_DiceState3739036110.h"
#include "AssemblyU2DCSharp_UIButton3377238306.h"
#include "AssemblyU2DCSharp_UILabel1795115428.h"

// System.Void GameManager::.ctor()
extern "C"  void GameManager__ctor_m293624896 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameManager GameManager::get_Instance()
extern "C"  GameManager_t2252321495 * GameManager_get_Instance_m638970098 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Load(UnityEngine.GameObject)
extern "C"  void GameManager_Load_m2178321288 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___gameObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Init()
extern "C"  void GameManager_Init_m3690781476 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::GameStart(System.Int32,System.Int32)
extern "C"  void GameManager_GameStart_m3663018370 (GameManager_t2252321495 * __this, int32_t ___userCount0, int32_t ___myUserNum1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::DiceInput()
extern "C"  void GameManager_DiceInput_m2073602047 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameManager/E_DiceState GameManager::get_DiceState()
extern "C"  int32_t GameManager_get_DiceState_m4901920 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::set_DiceState(GameManager/E_DiceState)
extern "C"  void GameManager_set_DiceState_m2033167979 (GameManager_t2252321495 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::DiceStart()
extern "C"  void GameManager_DiceStart_m615453845 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameManager::DiceProcess(UIButton,UILabel)
extern "C"  Il2CppObject * GameManager_DiceProcess_m1874416958 (GameManager_t2252321495 * __this, UIButton_t3377238306 * ___diceButton0, UILabel_t1795115428 * ___diceLabel1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::UserMove(System.Int32,System.Int32)
extern "C"  void GameManager_UserMove_m1788891504 (GameManager_t2252321495 * __this, int32_t ___userNum0, int32_t ___moveValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameManager::UserMoveCoroutine(System.Int32,System.Int32)
extern "C"  Il2CppObject * GameManager_UserMoveCoroutine_m2320523904 (GameManager_t2252321495 * __this, int32_t ___userNum0, int32_t ___moveValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::BuildGameObject(System.Int32,System.Int32)
extern "C"  void GameManager_BuildGameObject_m1705589651 (GameManager_t2252321495 * __this, int32_t ___userNum0, int32_t ___level1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::BuildLevel3()
extern "C"  void GameManager_BuildLevel3_m555061409 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::BuildLevel3(System.Int32)
extern "C"  void GameManager_BuildLevel3_m4126987606 (GameManager_t2252321495 * __this, int32_t ___userNum0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::BuildLevel2()
extern "C"  void GameManager_BuildLevel2_m3304147740 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::BuildLevel2(System.Int32)
extern "C"  void GameManager_BuildLevel2_m1764145937 (GameManager_t2252321495 * __this, int32_t ___userNum0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::BuildLevel1()
extern "C"  void GameManager_BuildLevel1_m837386411 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::BuildLevel1(System.Int32)
extern "C"  void GameManager_BuildLevel1_m4239710284 (GameManager_t2252321495 * __this, int32_t ___userNum0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::BuildCancle()
extern "C"  void GameManager_BuildCancle_m407953748 (GameManager_t2252321495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
