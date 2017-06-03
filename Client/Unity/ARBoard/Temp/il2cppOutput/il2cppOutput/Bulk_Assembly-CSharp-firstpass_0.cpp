#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// WebSocket
struct WebSocket_t1213274227;
// System.Uri
struct Uri_t19570940;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// WebSocketSharp.Net.Cookie
struct Cookie_t1826188460;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// WebSocket/<Connect>c__Iterator0
struct U3CConnectU3Ec__Iterator0_t738167129;
// System.Object
struct Il2CppObject;
// WebSocketSharp.MessageEventArgs
struct MessageEventArgs_t2890051726;
// System.EventArgs
struct EventArgs_t3289624707;
// WebSocketSharp.ErrorEventArgs
struct ErrorEventArgs_t502222999;
// WebSocket/<ConnectByCookie>c__Iterator1
struct U3CConnectByCookieU3Ec__Iterator1_t2716392159;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocket1213274227.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocket1213274227MethodDeclarations.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_Void1841601450.h"
#include "System_System_Collections_Generic_Queue_1_gen3216990848MethodDeclarations.h"
#include "mscorlib_System_Object2689449295MethodDeclarations.h"
#include "System_System_Uri19570940MethodDeclarations.h"
#include "mscorlib_System_String2029220233MethodDeclarations.h"
#include "mscorlib_System_ArgumentException3259014390MethodDeclarations.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Collections_Generic_Queue_1_gen3216990848.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_ArgumentException3259014390.h"
#include "mscorlib_System_Text_Encoding663144255MethodDeclarations.h"
#include "mscorlib_System_Text_Encoding663144255.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Byte3683104436.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocket_U3CConnectU738167129MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocket_U3CConnectU738167129.h"
#include "websocketU2Dsharp_WebSocketSharp_Net_Cookie1826188460.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocket_U3CConnect2716392159MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebSocket_U3CConnect2716392159.h"
#include "websocketU2Dsharp_WebSocketSharp_WebSocket3268376029MethodDeclarations.h"
#include "websocketU2Dsharp_WebSocketSharp_WebSocket3268376029.h"
#include "mscorlib_System_Int322071877448.h"
#include "mscorlib_System_EventHandler_1_gen1481358898MethodDeclarations.h"
#include "mscorlib_System_EventHandler277755526MethodDeclarations.h"
#include "mscorlib_System_EventHandler_1_gen3388497467MethodDeclarations.h"
#include "mscorlib_System_UInt322149682021.h"
#include "mscorlib_System_Object2689449295.h"
#include "websocketU2Dsharp_WebSocketSharp_MessageEventArgs2890051726.h"
#include "mscorlib_System_EventHandler_1_gen1481358898.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_EventArgs3289624707.h"
#include "mscorlib_System_EventHandler277755526.h"
#include "websocketU2Dsharp_WebSocketSharp_ErrorEventArgs502222999.h"
#include "mscorlib_System_EventHandler_1_gen3388497467.h"
#include "mscorlib_System_NotSupportedException1793819818MethodDeclarations.h"
#include "mscorlib_System_NotSupportedException1793819818.h"
#include "websocketU2Dsharp_WebSocketSharp_MessageEventArgs2890051726MethodDeclarations.h"
#include "websocketU2Dsharp_WebSocketSharp_ErrorEventArgs502222999MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebSocket::.ctor(System.Uri)
extern Il2CppClass* Queue_1_t3216990848_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* ArgumentException_t3259014390_il2cpp_TypeInfo_var;
extern const MethodInfo* Queue_1__ctor_m1708203475_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3110053184;
extern Il2CppCodeGenString* _stringLiteral3115737039;
extern Il2CppCodeGenString* _stringLiteral2470049881;
extern const uint32_t WebSocket__ctor_m2447929677_MetadataUsageId;
extern "C"  void WebSocket__ctor_m2447929677 (WebSocket_t1213274227 * __this, Uri_t19570940 * ___url0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocket__ctor_m2447929677_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Queue_1_t3216990848 * L_0 = (Queue_1_t3216990848 *)il2cpp_codegen_object_new(Queue_1_t3216990848_il2cpp_TypeInfo_var);
		Queue_1__ctor_m1708203475(L_0, /*hidden argument*/Queue_1__ctor_m1708203475_MethodInfo_var);
		__this->set_m_Messages_2(L_0);
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		Uri_t19570940 * L_1 = ___url0;
		__this->set_mUrl_0(L_1);
		Uri_t19570940 * L_2 = __this->get_mUrl_0();
		NullCheck(L_2);
		String_t* L_3 = Uri_get_Scheme_m55908894(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = V_0;
		NullCheck(L_4);
		bool L_5 = String_Equals_m2633592423(L_4, _stringLiteral3110053184, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0055;
		}
	}
	{
		String_t* L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = String_Equals_m2633592423(L_6, _stringLiteral3115737039, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0055;
		}
	}
	{
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m2596409543(NULL /*static, unused*/, _stringLiteral2470049881, L_8, /*hidden argument*/NULL);
		ArgumentException_t3259014390 * L_10 = (ArgumentException_t3259014390 *)il2cpp_codegen_object_new(ArgumentException_t3259014390_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3739475201(L_10, L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10);
	}

IL_0055:
	{
		return;
	}
}
// System.Void WebSocket::SendString(System.String)
extern Il2CppClass* Encoding_t663144255_il2cpp_TypeInfo_var;
extern const uint32_t WebSocket_SendString_m4293857515_MetadataUsageId;
extern "C"  void WebSocket_SendString_m4293857515 (WebSocket_t1213274227 * __this, String_t* ___str0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocket_SendString_m4293857515_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t663144255_il2cpp_TypeInfo_var);
		Encoding_t663144255 * L_0 = Encoding_get_UTF8_m1752852937(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___str0;
		NullCheck(L_0);
		ByteU5BU5D_t3397334013* L_2 = VirtFuncInvoker1< ByteU5BU5D_t3397334013*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		WebSocket_Send_m2905861795(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.String WebSocket::RecvString()
extern Il2CppClass* Encoding_t663144255_il2cpp_TypeInfo_var;
extern const uint32_t WebSocket_RecvString_m716708100_MetadataUsageId;
extern "C"  String_t* WebSocket_RecvString_m716708100 (WebSocket_t1213274227 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocket_RecvString_m716708100_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t3397334013* V_0 = NULL;
	{
		ByteU5BU5D_t3397334013* L_0 = WebSocket_Recv_m3676309770(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		ByteU5BU5D_t3397334013* L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_000f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t663144255_il2cpp_TypeInfo_var);
		Encoding_t663144255 * L_2 = Encoding_get_UTF8_m1752852937(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t3397334013* L_3 = V_0;
		NullCheck(L_2);
		String_t* L_4 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t3397334013* >::Invoke(22 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_2, L_3);
		return L_4;
	}
}
// System.Collections.IEnumerator WebSocket::Connect()
extern Il2CppClass* U3CConnectU3Ec__Iterator0_t738167129_il2cpp_TypeInfo_var;
extern const uint32_t WebSocket_Connect_m2620683194_MetadataUsageId;
extern "C"  Il2CppObject * WebSocket_Connect_m2620683194 (WebSocket_t1213274227 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocket_Connect_m2620683194_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CConnectU3Ec__Iterator0_t738167129 * V_0 = NULL;
	{
		U3CConnectU3Ec__Iterator0_t738167129 * L_0 = (U3CConnectU3Ec__Iterator0_t738167129 *)il2cpp_codegen_object_new(U3CConnectU3Ec__Iterator0_t738167129_il2cpp_TypeInfo_var);
		U3CConnectU3Ec__Iterator0__ctor_m280435780(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CConnectU3Ec__Iterator0_t738167129 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_0(__this);
		U3CConnectU3Ec__Iterator0_t738167129 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator WebSocket::ConnectByCookie(WebSocketSharp.Net.Cookie)
extern Il2CppClass* U3CConnectByCookieU3Ec__Iterator1_t2716392159_il2cpp_TypeInfo_var;
extern const uint32_t WebSocket_ConnectByCookie_m4170072457_MetadataUsageId;
extern "C"  Il2CppObject * WebSocket_ConnectByCookie_m4170072457 (WebSocket_t1213274227 * __this, Cookie_t1826188460 * ___cookie0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocket_ConnectByCookie_m4170072457_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CConnectByCookieU3Ec__Iterator1_t2716392159 * V_0 = NULL;
	{
		U3CConnectByCookieU3Ec__Iterator1_t2716392159 * L_0 = (U3CConnectByCookieU3Ec__Iterator1_t2716392159 *)il2cpp_codegen_object_new(U3CConnectByCookieU3Ec__Iterator1_t2716392159_il2cpp_TypeInfo_var);
		U3CConnectByCookieU3Ec__Iterator1__ctor_m1601238202(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CConnectByCookieU3Ec__Iterator1_t2716392159 * L_1 = V_0;
		Cookie_t1826188460 * L_2 = ___cookie0;
		NullCheck(L_1);
		L_1->set_cookie_0(L_2);
		U3CConnectByCookieU3Ec__Iterator1_t2716392159 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_1(__this);
		U3CConnectByCookieU3Ec__Iterator1_t2716392159 * L_4 = V_0;
		return L_4;
	}
}
// System.Void WebSocket::Send(System.Byte[])
extern "C"  void WebSocket_Send_m2905861795 (WebSocket_t1213274227 * __this, ByteU5BU5D_t3397334013* ___buffer0, const MethodInfo* method)
{
	{
		WebSocket_t3268376029 * L_0 = __this->get_m_Socket_1();
		ByteU5BU5D_t3397334013* L_1 = ___buffer0;
		NullCheck(L_0);
		WebSocket_Send_m2058475070(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Byte[] WebSocket::Recv()
extern const MethodInfo* Queue_1_get_Count_m3610872939_MethodInfo_var;
extern const MethodInfo* Queue_1_Dequeue_m3256071261_MethodInfo_var;
extern const uint32_t WebSocket_Recv_m3676309770_MetadataUsageId;
extern "C"  ByteU5BU5D_t3397334013* WebSocket_Recv_m3676309770 (WebSocket_t1213274227 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocket_Recv_m3676309770_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_t3216990848 * L_0 = __this->get_m_Messages_2();
		NullCheck(L_0);
		int32_t L_1 = Queue_1_get_Count_m3610872939(L_0, /*hidden argument*/Queue_1_get_Count_m3610872939_MethodInfo_var);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (ByteU5BU5D_t3397334013*)NULL;
	}

IL_0012:
	{
		Queue_1_t3216990848 * L_2 = __this->get_m_Messages_2();
		NullCheck(L_2);
		ByteU5BU5D_t3397334013* L_3 = Queue_1_Dequeue_m3256071261(L_2, /*hidden argument*/Queue_1_Dequeue_m3256071261_MethodInfo_var);
		return L_3;
	}
}
// System.Void WebSocket::Close()
extern "C"  void WebSocket_Close_m13439692 (WebSocket_t1213274227 * __this, const MethodInfo* method)
{
	{
		WebSocket_t3268376029 * L_0 = __this->get_m_Socket_1();
		NullCheck(L_0);
		WebSocket_Close_m790379411(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String WebSocket::get_error()
extern "C"  String_t* WebSocket_get_error_m100672492 (WebSocket_t1213274227 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = __this->get_m_Error_4();
		return L_0;
	}
}
// System.Void WebSocket/<Connect>c__Iterator0::.ctor()
extern "C"  void U3CConnectU3Ec__Iterator0__ctor_m280435780 (U3CConnectU3Ec__Iterator0_t738167129 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean WebSocket/<Connect>c__Iterator0::MoveNext()
extern Il2CppClass* StringU5BU5D_t1642385972_il2cpp_TypeInfo_var;
extern Il2CppClass* WebSocket_t3268376029_il2cpp_TypeInfo_var;
extern Il2CppClass* EventHandler_1_t1481358898_il2cpp_TypeInfo_var;
extern Il2CppClass* EventHandler_t277755526_il2cpp_TypeInfo_var;
extern Il2CppClass* EventHandler_1_t3388497467_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CConnectU3Ec__Iterator0_U3CU3Em__0_m3248327170_MethodInfo_var;
extern const MethodInfo* EventHandler_1__ctor_m3103244352_MethodInfo_var;
extern const MethodInfo* U3CConnectU3Ec__Iterator0_U3CU3Em__1_m809279212_MethodInfo_var;
extern const MethodInfo* U3CConnectU3Ec__Iterator0_U3CU3Em__2_m3535631593_MethodInfo_var;
extern const MethodInfo* EventHandler_1__ctor_m1447405673_MethodInfo_var;
extern const uint32_t U3CConnectU3Ec__Iterator0_MoveNext_m3108191136_MetadataUsageId;
extern "C"  bool U3CConnectU3Ec__Iterator0_MoveNext_m3108191136 (U3CConnectU3Ec__Iterator0_t738167129 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CConnectU3Ec__Iterator0_MoveNext_m3108191136_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_00d0;
		}
	}
	{
		goto IL_00f7;
	}

IL_0021:
	{
		WebSocket_t1213274227 * L_2 = __this->get_U24this_0();
		WebSocket_t1213274227 * L_3 = __this->get_U24this_0();
		NullCheck(L_3);
		Uri_t19570940 * L_4 = L_3->get_mUrl_0();
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		WebSocket_t3268376029 * L_6 = (WebSocket_t3268376029 *)il2cpp_codegen_object_new(WebSocket_t3268376029_il2cpp_TypeInfo_var);
		WebSocket__ctor_m666923799(L_6, L_5, ((StringU5BU5D_t1642385972*)SZArrayNew(StringU5BU5D_t1642385972_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_m_Socket_1(L_6);
		WebSocket_t1213274227 * L_7 = __this->get_U24this_0();
		NullCheck(L_7);
		WebSocket_t3268376029 * L_8 = L_7->get_m_Socket_1();
		IntPtr_t L_9;
		L_9.set_m_value_0((void*)(void*)U3CConnectU3Ec__Iterator0_U3CU3Em__0_m3248327170_MethodInfo_var);
		EventHandler_1_t1481358898 * L_10 = (EventHandler_1_t1481358898 *)il2cpp_codegen_object_new(EventHandler_1_t1481358898_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m3103244352(L_10, __this, L_9, /*hidden argument*/EventHandler_1__ctor_m3103244352_MethodInfo_var);
		NullCheck(L_8);
		WebSocket_add_OnMessage_m2021047116(L_8, L_10, /*hidden argument*/NULL);
		WebSocket_t1213274227 * L_11 = __this->get_U24this_0();
		NullCheck(L_11);
		WebSocket_t3268376029 * L_12 = L_11->get_m_Socket_1();
		IntPtr_t L_13;
		L_13.set_m_value_0((void*)(void*)U3CConnectU3Ec__Iterator0_U3CU3Em__1_m809279212_MethodInfo_var);
		EventHandler_t277755526 * L_14 = (EventHandler_t277755526 *)il2cpp_codegen_object_new(EventHandler_t277755526_il2cpp_TypeInfo_var);
		EventHandler__ctor_m3447735595(L_14, __this, L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		WebSocket_add_OnOpen_m924055045(L_12, L_14, /*hidden argument*/NULL);
		WebSocket_t1213274227 * L_15 = __this->get_U24this_0();
		NullCheck(L_15);
		WebSocket_t3268376029 * L_16 = L_15->get_m_Socket_1();
		IntPtr_t L_17;
		L_17.set_m_value_0((void*)(void*)U3CConnectU3Ec__Iterator0_U3CU3Em__2_m3535631593_MethodInfo_var);
		EventHandler_1_t3388497467 * L_18 = (EventHandler_1_t3388497467 *)il2cpp_codegen_object_new(EventHandler_1_t3388497467_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1447405673(L_18, __this, L_17, /*hidden argument*/EventHandler_1__ctor_m1447405673_MethodInfo_var);
		NullCheck(L_16);
		WebSocket_add_OnError_m3284929358(L_16, L_18, /*hidden argument*/NULL);
		WebSocket_t1213274227 * L_19 = __this->get_U24this_0();
		NullCheck(L_19);
		WebSocket_t3268376029 * L_20 = L_19->get_m_Socket_1();
		NullCheck(L_20);
		WebSocket_ConnectAsync_m77178505(L_20, /*hidden argument*/NULL);
		goto IL_00d0;
	}

IL_00b0:
	{
		int32_t L_21 = 0;
		Il2CppObject * L_22 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_21);
		__this->set_U24current_1(L_22);
		bool L_23 = __this->get_U24disposing_2();
		if (L_23)
		{
			goto IL_00cb;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_00cb:
	{
		goto IL_00f9;
	}

IL_00d0:
	{
		WebSocket_t1213274227 * L_24 = __this->get_U24this_0();
		NullCheck(L_24);
		bool L_25 = L_24->get_m_IsConnected_3();
		if (L_25)
		{
			goto IL_00f0;
		}
	}
	{
		WebSocket_t1213274227 * L_26 = __this->get_U24this_0();
		NullCheck(L_26);
		String_t* L_27 = L_26->get_m_Error_4();
		if (!L_27)
		{
			goto IL_00b0;
		}
	}

IL_00f0:
	{
		__this->set_U24PC_3((-1));
	}

IL_00f7:
	{
		return (bool)0;
	}

IL_00f9:
	{
		return (bool)1;
	}
}
// System.Object WebSocket/<Connect>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  Il2CppObject * U3CConnectU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1854700170 (U3CConnectU3Ec__Iterator0_t738167129 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object WebSocket/<Connect>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * U3CConnectU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m381433762 (U3CConnectU3Ec__Iterator0_t738167129 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void WebSocket/<Connect>c__Iterator0::Dispose()
extern "C"  void U3CConnectU3Ec__Iterator0_Dispose_m368446881 (U3CConnectU3Ec__Iterator0_t738167129 * __this, const MethodInfo* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void WebSocket/<Connect>c__Iterator0::Reset()
extern Il2CppClass* NotSupportedException_t1793819818_il2cpp_TypeInfo_var;
extern const uint32_t U3CConnectU3Ec__Iterator0_Reset_m2887649615_MetadataUsageId;
extern "C"  void U3CConnectU3Ec__Iterator0_Reset_m2887649615 (U3CConnectU3Ec__Iterator0_t738167129 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CConnectU3Ec__Iterator0_Reset_m2887649615_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1793819818 * L_0 = (NotSupportedException_t1793819818 *)il2cpp_codegen_object_new(NotSupportedException_t1793819818_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3232764727(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void WebSocket/<Connect>c__Iterator0::<>m__0(System.Object,WebSocketSharp.MessageEventArgs)
extern const MethodInfo* Queue_1_Enqueue_m738440378_MethodInfo_var;
extern const uint32_t U3CConnectU3Ec__Iterator0_U3CU3Em__0_m3248327170_MetadataUsageId;
extern "C"  void U3CConnectU3Ec__Iterator0_U3CU3Em__0_m3248327170 (U3CConnectU3Ec__Iterator0_t738167129 * __this, Il2CppObject * ___sender0, MessageEventArgs_t2890051726 * ___e1, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CConnectU3Ec__Iterator0_U3CU3Em__0_m3248327170_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WebSocket_t1213274227 * L_0 = __this->get_U24this_0();
		NullCheck(L_0);
		Queue_1_t3216990848 * L_1 = L_0->get_m_Messages_2();
		MessageEventArgs_t2890051726 * L_2 = ___e1;
		NullCheck(L_2);
		ByteU5BU5D_t3397334013* L_3 = MessageEventArgs_get_RawData_m2392696113(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Queue_1_Enqueue_m738440378(L_1, L_3, /*hidden argument*/Queue_1_Enqueue_m738440378_MethodInfo_var);
		return;
	}
}
// System.Void WebSocket/<Connect>c__Iterator0::<>m__1(System.Object,System.EventArgs)
extern "C"  void U3CConnectU3Ec__Iterator0_U3CU3Em__1_m809279212 (U3CConnectU3Ec__Iterator0_t738167129 * __this, Il2CppObject * ___sender0, EventArgs_t3289624707 * ___e1, const MethodInfo* method)
{
	{
		WebSocket_t1213274227 * L_0 = __this->get_U24this_0();
		NullCheck(L_0);
		L_0->set_m_IsConnected_3((bool)1);
		return;
	}
}
// System.Void WebSocket/<Connect>c__Iterator0::<>m__2(System.Object,WebSocketSharp.ErrorEventArgs)
extern "C"  void U3CConnectU3Ec__Iterator0_U3CU3Em__2_m3535631593 (U3CConnectU3Ec__Iterator0_t738167129 * __this, Il2CppObject * ___sender0, ErrorEventArgs_t502222999 * ___e1, const MethodInfo* method)
{
	{
		WebSocket_t1213274227 * L_0 = __this->get_U24this_0();
		ErrorEventArgs_t502222999 * L_1 = ___e1;
		NullCheck(L_1);
		String_t* L_2 = ErrorEventArgs_get_Message_m4135312202(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		L_0->set_m_Error_4(L_2);
		return;
	}
}
// System.Void WebSocket/<ConnectByCookie>c__Iterator1::.ctor()
extern "C"  void U3CConnectByCookieU3Ec__Iterator1__ctor_m1601238202 (U3CConnectByCookieU3Ec__Iterator1_t2716392159 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean WebSocket/<ConnectByCookie>c__Iterator1::MoveNext()
extern Il2CppClass* StringU5BU5D_t1642385972_il2cpp_TypeInfo_var;
extern Il2CppClass* WebSocket_t3268376029_il2cpp_TypeInfo_var;
extern Il2CppClass* EventHandler_1_t1481358898_il2cpp_TypeInfo_var;
extern Il2CppClass* EventHandler_t277755526_il2cpp_TypeInfo_var;
extern Il2CppClass* EventHandler_1_t3388497467_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CConnectByCookieU3Ec__Iterator1_U3CU3Em__0_m855393816_MethodInfo_var;
extern const MethodInfo* EventHandler_1__ctor_m3103244352_MethodInfo_var;
extern const MethodInfo* U3CConnectByCookieU3Ec__Iterator1_U3CU3Em__1_m2451733234_MethodInfo_var;
extern const MethodInfo* U3CConnectByCookieU3Ec__Iterator1_U3CU3Em__2_m2072919827_MethodInfo_var;
extern const MethodInfo* EventHandler_1__ctor_m1447405673_MethodInfo_var;
extern const uint32_t U3CConnectByCookieU3Ec__Iterator1_MoveNext_m856259594_MetadataUsageId;
extern "C"  bool U3CConnectByCookieU3Ec__Iterator1_MoveNext_m856259594 (U3CConnectByCookieU3Ec__Iterator1_t2716392159 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CConnectByCookieU3Ec__Iterator1_MoveNext_m856259594_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_010d;
	}

IL_0021:
	{
		WebSocket_t1213274227 * L_2 = __this->get_U24this_1();
		WebSocket_t1213274227 * L_3 = __this->get_U24this_1();
		NullCheck(L_3);
		Uri_t19570940 * L_4 = L_3->get_mUrl_0();
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		WebSocket_t3268376029 * L_6 = (WebSocket_t3268376029 *)il2cpp_codegen_object_new(WebSocket_t3268376029_il2cpp_TypeInfo_var);
		WebSocket__ctor_m666923799(L_6, L_5, ((StringU5BU5D_t1642385972*)SZArrayNew(StringU5BU5D_t1642385972_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_m_Socket_1(L_6);
		WebSocket_t1213274227 * L_7 = __this->get_U24this_1();
		NullCheck(L_7);
		WebSocket_t3268376029 * L_8 = L_7->get_m_Socket_1();
		Cookie_t1826188460 * L_9 = __this->get_cookie_0();
		NullCheck(L_8);
		WebSocket_SetCookie_m4032961297(L_8, L_9, /*hidden argument*/NULL);
		WebSocket_t1213274227 * L_10 = __this->get_U24this_1();
		NullCheck(L_10);
		WebSocket_t3268376029 * L_11 = L_10->get_m_Socket_1();
		IntPtr_t L_12;
		L_12.set_m_value_0((void*)(void*)U3CConnectByCookieU3Ec__Iterator1_U3CU3Em__0_m855393816_MethodInfo_var);
		EventHandler_1_t1481358898 * L_13 = (EventHandler_1_t1481358898 *)il2cpp_codegen_object_new(EventHandler_1_t1481358898_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m3103244352(L_13, __this, L_12, /*hidden argument*/EventHandler_1__ctor_m3103244352_MethodInfo_var);
		NullCheck(L_11);
		WebSocket_add_OnMessage_m2021047116(L_11, L_13, /*hidden argument*/NULL);
		WebSocket_t1213274227 * L_14 = __this->get_U24this_1();
		NullCheck(L_14);
		WebSocket_t3268376029 * L_15 = L_14->get_m_Socket_1();
		IntPtr_t L_16;
		L_16.set_m_value_0((void*)(void*)U3CConnectByCookieU3Ec__Iterator1_U3CU3Em__1_m2451733234_MethodInfo_var);
		EventHandler_t277755526 * L_17 = (EventHandler_t277755526 *)il2cpp_codegen_object_new(EventHandler_t277755526_il2cpp_TypeInfo_var);
		EventHandler__ctor_m3447735595(L_17, __this, L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		WebSocket_add_OnOpen_m924055045(L_15, L_17, /*hidden argument*/NULL);
		WebSocket_t1213274227 * L_18 = __this->get_U24this_1();
		NullCheck(L_18);
		WebSocket_t3268376029 * L_19 = L_18->get_m_Socket_1();
		IntPtr_t L_20;
		L_20.set_m_value_0((void*)(void*)U3CConnectByCookieU3Ec__Iterator1_U3CU3Em__2_m2072919827_MethodInfo_var);
		EventHandler_1_t3388497467 * L_21 = (EventHandler_1_t3388497467 *)il2cpp_codegen_object_new(EventHandler_1_t3388497467_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1447405673(L_21, __this, L_20, /*hidden argument*/EventHandler_1__ctor_m1447405673_MethodInfo_var);
		NullCheck(L_19);
		WebSocket_add_OnError_m3284929358(L_19, L_21, /*hidden argument*/NULL);
		WebSocket_t1213274227 * L_22 = __this->get_U24this_1();
		NullCheck(L_22);
		WebSocket_t3268376029 * L_23 = L_22->get_m_Socket_1();
		NullCheck(L_23);
		WebSocket_ConnectAsync_m77178505(L_23, /*hidden argument*/NULL);
		goto IL_00e6;
	}

IL_00c6:
	{
		int32_t L_24 = 0;
		Il2CppObject * L_25 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_24);
		__this->set_U24current_2(L_25);
		bool L_26 = __this->get_U24disposing_3();
		if (L_26)
		{
			goto IL_00e1;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_00e1:
	{
		goto IL_010f;
	}

IL_00e6:
	{
		WebSocket_t1213274227 * L_27 = __this->get_U24this_1();
		NullCheck(L_27);
		bool L_28 = L_27->get_m_IsConnected_3();
		if (L_28)
		{
			goto IL_0106;
		}
	}
	{
		WebSocket_t1213274227 * L_29 = __this->get_U24this_1();
		NullCheck(L_29);
		String_t* L_30 = L_29->get_m_Error_4();
		if (!L_30)
		{
			goto IL_00c6;
		}
	}

IL_0106:
	{
		__this->set_U24PC_4((-1));
	}

IL_010d:
	{
		return (bool)0;
	}

IL_010f:
	{
		return (bool)1;
	}
}
// System.Object WebSocket/<ConnectByCookie>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  Il2CppObject * U3CConnectByCookieU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2215490252 (U3CConnectByCookieU3Ec__Iterator1_t2716392159 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object WebSocket/<ConnectByCookie>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * U3CConnectByCookieU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m2637225268 (U3CConnectByCookieU3Ec__Iterator1_t2716392159 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void WebSocket/<ConnectByCookie>c__Iterator1::Dispose()
extern "C"  void U3CConnectByCookieU3Ec__Iterator1_Dispose_m3082742587 (U3CConnectByCookieU3Ec__Iterator1_t2716392159 * __this, const MethodInfo* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void WebSocket/<ConnectByCookie>c__Iterator1::Reset()
extern Il2CppClass* NotSupportedException_t1793819818_il2cpp_TypeInfo_var;
extern const uint32_t U3CConnectByCookieU3Ec__Iterator1_Reset_m4077230173_MetadataUsageId;
extern "C"  void U3CConnectByCookieU3Ec__Iterator1_Reset_m4077230173 (U3CConnectByCookieU3Ec__Iterator1_t2716392159 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CConnectByCookieU3Ec__Iterator1_Reset_m4077230173_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1793819818 * L_0 = (NotSupportedException_t1793819818 *)il2cpp_codegen_object_new(NotSupportedException_t1793819818_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3232764727(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void WebSocket/<ConnectByCookie>c__Iterator1::<>m__0(System.Object,WebSocketSharp.MessageEventArgs)
extern const MethodInfo* Queue_1_Enqueue_m738440378_MethodInfo_var;
extern const uint32_t U3CConnectByCookieU3Ec__Iterator1_U3CU3Em__0_m855393816_MetadataUsageId;
extern "C"  void U3CConnectByCookieU3Ec__Iterator1_U3CU3Em__0_m855393816 (U3CConnectByCookieU3Ec__Iterator1_t2716392159 * __this, Il2CppObject * ___sender0, MessageEventArgs_t2890051726 * ___e1, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CConnectByCookieU3Ec__Iterator1_U3CU3Em__0_m855393816_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WebSocket_t1213274227 * L_0 = __this->get_U24this_1();
		NullCheck(L_0);
		Queue_1_t3216990848 * L_1 = L_0->get_m_Messages_2();
		MessageEventArgs_t2890051726 * L_2 = ___e1;
		NullCheck(L_2);
		ByteU5BU5D_t3397334013* L_3 = MessageEventArgs_get_RawData_m2392696113(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Queue_1_Enqueue_m738440378(L_1, L_3, /*hidden argument*/Queue_1_Enqueue_m738440378_MethodInfo_var);
		return;
	}
}
// System.Void WebSocket/<ConnectByCookie>c__Iterator1::<>m__1(System.Object,System.EventArgs)
extern "C"  void U3CConnectByCookieU3Ec__Iterator1_U3CU3Em__1_m2451733234 (U3CConnectByCookieU3Ec__Iterator1_t2716392159 * __this, Il2CppObject * ___sender0, EventArgs_t3289624707 * ___e1, const MethodInfo* method)
{
	{
		WebSocket_t1213274227 * L_0 = __this->get_U24this_1();
		NullCheck(L_0);
		L_0->set_m_IsConnected_3((bool)1);
		return;
	}
}
// System.Void WebSocket/<ConnectByCookie>c__Iterator1::<>m__2(System.Object,WebSocketSharp.ErrorEventArgs)
extern "C"  void U3CConnectByCookieU3Ec__Iterator1_U3CU3Em__2_m2072919827 (U3CConnectByCookieU3Ec__Iterator1_t2716392159 * __this, Il2CppObject * ___sender0, ErrorEventArgs_t502222999 * ___e1, const MethodInfo* method)
{
	{
		WebSocket_t1213274227 * L_0 = __this->get_U24this_1();
		ErrorEventArgs_t502222999 * L_1 = ___e1;
		NullCheck(L_1);
		String_t* L_2 = ErrorEventArgs_get_Message_m4135312202(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		L_0->set_m_Error_4(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
