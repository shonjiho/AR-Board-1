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

// WebSocketSharp.Net.WebHeaderCollection
struct WebHeaderCollection_t1932982249;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t633582367;
// System.String
struct String_t;
// System.Action`2<System.String,System.String>
struct Action_2_t4234541925;
// WebSocketSharp.Net.HttpHeaderInfo
struct HttpHeaderInfo_t2096319561;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_String2029220233.h"
#include "websocketU2Dsharp_WebSocketSharp_Net_HttpHeaderTyp1518115223.h"
#include "websocketU2Dsharp_WebSocketSharp_Net_HttpHeaderInf2096319561.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void WebSocketSharp.Net.WebHeaderCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebHeaderCollection__ctor_m4110470603 (WebHeaderCollection_t1932982249 * __this, SerializationInfo_t228987430 * ___serializationInfo0, StreamingContext_t1417235061  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::.ctor()
extern "C"  void WebHeaderCollection__ctor_m648964198 (WebHeaderCollection_t1932982249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::.cctor()
extern "C"  void WebHeaderCollection__cctor_m4052197875 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebHeaderCollection_System_Runtime_Serialization_ISerializable_GetObjectData_m1194935359 (WebHeaderCollection_t1932982249 * __this, SerializationInfo_t228987430 * ___serializationInfo0, StreamingContext_t1417235061  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] WebSocketSharp.Net.WebHeaderCollection::get_AllKeys()
extern "C"  StringU5BU5D_t1642385972* WebHeaderCollection_get_AllKeys_m546917123 (WebHeaderCollection_t1932982249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.WebHeaderCollection::get_Count()
extern "C"  int32_t WebHeaderCollection_get_Count_m297968716 (WebHeaderCollection_t1932982249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection WebSocketSharp.Net.WebHeaderCollection::get_Keys()
extern "C"  KeysCollection_t633582367 * WebHeaderCollection_get_Keys_m4089646907 (WebHeaderCollection_t1932982249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::Add(System.String,System.String,System.Boolean)
extern "C"  void WebHeaderCollection_Add_m1033873524 (WebHeaderCollection_t1932982249 * __this, String_t* ___name0, String_t* ___value1, bool ___ignoreRestricted2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::AddWithoutCheckingName(System.String,System.String)
extern "C"  void WebHeaderCollection_AddWithoutCheckingName_m1823676308 (WebHeaderCollection_t1932982249 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::AddWithoutCheckingNameAndRestricted(System.String,System.String)
extern "C"  void WebHeaderCollection_AddWithoutCheckingNameAndRestricted_m3700051846 (WebHeaderCollection_t1932982249 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocketSharp.Net.WebHeaderCollection::CheckColonSeparated(System.String)
extern "C"  int32_t WebHeaderCollection_CheckColonSeparated_m3246298356 (Il2CppObject * __this /* static, unused */, String_t* ___header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpHeaderType WebSocketSharp.Net.WebHeaderCollection::CheckHeaderType(System.String)
extern "C"  int32_t WebHeaderCollection_CheckHeaderType_m1619399265 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebHeaderCollection::CheckName(System.String)
extern "C"  String_t* WebHeaderCollection_CheckName_m2385078644 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::CheckRestricted(System.String)
extern "C"  void WebHeaderCollection_CheckRestricted_m2126026325 (WebHeaderCollection_t1932982249 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::CheckState(System.Boolean)
extern "C"  void WebHeaderCollection_CheckState_m3482770364 (WebHeaderCollection_t1932982249 * __this, bool ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebHeaderCollection::CheckValue(System.String)
extern "C"  String_t* WebHeaderCollection_CheckValue_m1419917778 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.WebHeaderCollection::ContainsInRestricted(System.String,System.Boolean)
extern "C"  bool WebHeaderCollection_ContainsInRestricted_m881771776 (Il2CppObject * __this /* static, unused */, String_t* ___name0, bool ___response1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::DoWithCheckingState(System.Action`2<System.String,System.String>,System.String,System.String,System.Boolean)
extern "C"  void WebHeaderCollection_DoWithCheckingState_m1122814058 (WebHeaderCollection_t1932982249 * __this, Action_2_t4234541925 * ___act0, String_t* ___name1, String_t* ___value2, bool ___setState3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::DoWithCheckingState(System.Action`2<System.String,System.String>,System.String,System.String,System.Boolean,System.Boolean)
extern "C"  void WebHeaderCollection_DoWithCheckingState_m3012575929 (WebHeaderCollection_t1932982249 * __this, Action_2_t4234541925 * ___act0, String_t* ___name1, String_t* ___value2, bool ___response3, bool ___setState4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::DoWithoutCheckingName(System.Action`2<System.String,System.String>,System.String,System.String)
extern "C"  void WebHeaderCollection_DoWithoutCheckingName_m1874393535 (WebHeaderCollection_t1932982249 * __this, Action_2_t4234541925 * ___act0, String_t* ___name1, String_t* ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WebSocketSharp.Net.HttpHeaderInfo WebSocketSharp.Net.WebHeaderCollection::GetHeaderInfo(System.String)
extern "C"  HttpHeaderInfo_t2096319561 * WebHeaderCollection_GetHeaderInfo_m2589462925 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::SetState(System.Boolean)
extern "C"  void WebHeaderCollection_SetState_m3752676128 (WebHeaderCollection_t1932982249 * __this, bool ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::SetWithoutCheckingName(System.String,System.String)
extern "C"  void WebHeaderCollection_SetWithoutCheckingName_m1885800567 (WebHeaderCollection_t1932982249 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.WebHeaderCollection::TryGetHeaderInfo(System.String,WebSocketSharp.Net.HttpHeaderInfo&)
extern "C"  bool WebHeaderCollection_TryGetHeaderInfo_m2611042535 (Il2CppObject * __this /* static, unused */, String_t* ___name0, HttpHeaderInfo_t2096319561 ** ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.WebHeaderCollection::IsHeaderName(System.String)
extern "C"  bool WebHeaderCollection_IsHeaderName_m1718848626 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.WebHeaderCollection::IsHeaderValue(System.String)
extern "C"  bool WebHeaderCollection_IsHeaderValue_m1729483932 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.WebHeaderCollection::IsMultiValue(System.String,System.Boolean)
extern "C"  bool WebHeaderCollection_IsMultiValue_m3564922921 (Il2CppObject * __this /* static, unused */, String_t* ___headerName0, bool ___response1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::SetInternal(System.String,System.Boolean)
extern "C"  void WebHeaderCollection_SetInternal_m960201366 (WebHeaderCollection_t1932982249 * __this, String_t* ___header0, bool ___response1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::SetInternal(System.String,System.String,System.Boolean)
extern "C"  void WebHeaderCollection_SetInternal_m2256435146 (WebHeaderCollection_t1932982249 * __this, String_t* ___name0, String_t* ___value1, bool ___response2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::Add(System.String,System.String)
extern "C"  void WebHeaderCollection_Add_m1096468729 (WebHeaderCollection_t1932982249 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebHeaderCollection::Get(System.Int32)
extern "C"  String_t* WebHeaderCollection_Get_m3063241044 (WebHeaderCollection_t1932982249 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebHeaderCollection::Get(System.String)
extern "C"  String_t* WebHeaderCollection_Get_m720961545 (WebHeaderCollection_t1932982249 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator WebSocketSharp.Net.WebHeaderCollection::GetEnumerator()
extern "C"  Il2CppObject * WebHeaderCollection_GetEnumerator_m276714436 (WebHeaderCollection_t1932982249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebHeaderCollection::GetKey(System.Int32)
extern "C"  String_t* WebHeaderCollection_GetKey_m2630998537 (WebHeaderCollection_t1932982249 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebHeaderCollection_GetObjectData_m3154505602 (WebHeaderCollection_t1932982249 * __this, SerializationInfo_t228987430 * ___serializationInfo0, StreamingContext_t1417235061  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::OnDeserialization(System.Object)
extern "C"  void WebHeaderCollection_OnDeserialization_m3543128932 (WebHeaderCollection_t1932982249 * __this, Il2CppObject * ___sender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.WebHeaderCollection::Set(System.String,System.String)
extern "C"  void WebHeaderCollection_Set_m3105981884 (WebHeaderCollection_t1932982249 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.WebHeaderCollection::ToString()
extern "C"  String_t* WebHeaderCollection_ToString_m2251909035 (WebHeaderCollection_t1932982249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
