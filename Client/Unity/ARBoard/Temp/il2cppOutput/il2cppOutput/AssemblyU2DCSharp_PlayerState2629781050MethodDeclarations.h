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

// PlayerState
struct PlayerState_t2629781050;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void PlayerState::.ctor()
extern "C"  void PlayerState__ctor_m1873562519 (PlayerState_t2629781050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerState::RefreshState(System.Int32,System.String)
extern "C"  void PlayerState_RefreshState_m712955532 (PlayerState_t2629781050 * __this, int32_t ___playerNum0, String_t* ___playerName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerState::IsEnd()
extern "C"  bool PlayerState_IsEnd_m176851522 (PlayerState_t2629781050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerState::Dead()
extern "C"  void PlayerState_Dead_m1245199247 (PlayerState_t2629781050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerState::get_Money()
extern "C"  int32_t PlayerState_get_Money_m1550302980 (PlayerState_t2629781050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerState::set_Money(System.Int32)
extern "C"  void PlayerState_set_Money_m1657994427 (PlayerState_t2629781050 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerState::get_Location()
extern "C"  int32_t PlayerState_get_Location_m2878111349 (PlayerState_t2629781050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerState::set_Location(System.Int32)
extern "C"  void PlayerState_set_Location_m3030006438 (PlayerState_t2629781050 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerState::get_PlayerNum()
extern "C"  int32_t PlayerState_get_PlayerNum_m725697913 (PlayerState_t2629781050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerState::set_PlayerNum(System.Int32)
extern "C"  void PlayerState_set_PlayerNum_m579356684 (PlayerState_t2629781050 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlayerState::get_PlayerName()
extern "C"  String_t* PlayerState_get_PlayerName_m195886051 (PlayerState_t2629781050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerState::set_PlayerName(System.String)
extern "C"  void PlayerState_set_PlayerName_m1094676976 (PlayerState_t2629781050 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
