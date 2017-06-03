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

// WebSocketSharp.HandshakeBase
struct HandshakeBase_t1218024076;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3047564564;
// System.Version
struct Version_t1755874712;
// System.Text.Encoding
struct Encoding_t663144255;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Specialized_NameValueCol3047564564.h"
#include "mscorlib_System_Version1755874712.h"
#include "mscorlib_System_String2029220233.h"

// System.Void WebSocketSharp.HandshakeBase::.ctor()
extern "C"  void HandshakeBase__ctor_m1896839796 (HandshakeBase_t1218024076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.HandshakeBase::set_EntityBodyData(System.Byte[])
extern "C"  void HandshakeBase_set_EntityBodyData_m3507733671 (HandshakeBase_t1218024076 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.HandshakeBase::get_EntityBody()
extern "C"  String_t* HandshakeBase_get_EntityBody_m4072540301 (HandshakeBase_t1218024076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection WebSocketSharp.HandshakeBase::get_Headers()
extern "C"  NameValueCollection_t3047564564 * HandshakeBase_get_Headers_m2267692159 (HandshakeBase_t1218024076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.HandshakeBase::set_Headers(System.Collections.Specialized.NameValueCollection)
extern "C"  void HandshakeBase_set_Headers_m2600406396 (HandshakeBase_t1218024076 * __this, NameValueCollection_t3047564564 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version WebSocketSharp.HandshakeBase::get_ProtocolVersion()
extern "C"  Version_t1755874712 * HandshakeBase_get_ProtocolVersion_m2498263077 (HandshakeBase_t1218024076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.HandshakeBase::set_ProtocolVersion(System.Version)
extern "C"  void HandshakeBase_set_ProtocolVersion_m3674082402 (HandshakeBase_t1218024076 * __this, Version_t1755874712 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding WebSocketSharp.HandshakeBase::getEncoding(System.String)
extern "C"  Encoding_t663144255 * HandshakeBase_getEncoding_m2501932981 (Il2CppObject * __this /* static, unused */, String_t* ___contentType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocketSharp.HandshakeBase::ToByteArray()
extern "C"  ByteU5BU5D_t3397334013* HandshakeBase_ToByteArray_m2566572896 (HandshakeBase_t1218024076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
