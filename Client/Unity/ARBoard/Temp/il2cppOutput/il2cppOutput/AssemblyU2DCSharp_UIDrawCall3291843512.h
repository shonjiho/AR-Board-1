#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Mesh
struct Mesh_t1356156583;
// UnityEngine.MeshFilter
struct MeshFilter_t3026937449;
// UnityEngine.MeshRenderer
struct MeshRenderer_t1268241104;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UIDrawCall_Clipping4042448929.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIDrawCall
struct  UIDrawCall_t3291843512  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform UIDrawCall::mTrans
	Transform_t3275118058 * ___mTrans_2;
	// UnityEngine.Material UIDrawCall::mSharedMat
	Material_t193706927 * ___mSharedMat_3;
	// UnityEngine.Mesh UIDrawCall::mMesh0
	Mesh_t1356156583 * ___mMesh0_4;
	// UnityEngine.Mesh UIDrawCall::mMesh1
	Mesh_t1356156583 * ___mMesh1_5;
	// UnityEngine.MeshFilter UIDrawCall::mFilter
	MeshFilter_t3026937449 * ___mFilter_6;
	// UnityEngine.MeshRenderer UIDrawCall::mRen
	MeshRenderer_t1268241104 * ___mRen_7;
	// UIDrawCall/Clipping UIDrawCall::mClipping
	int32_t ___mClipping_8;
	// UnityEngine.Vector4 UIDrawCall::mClipRange
	Vector4_t2243707581  ___mClipRange_9;
	// UnityEngine.Vector2 UIDrawCall::mClipSoft
	Vector2_t2243707579  ___mClipSoft_10;
	// UnityEngine.Material UIDrawCall::mMat
	Material_t193706927 * ___mMat_11;
	// UnityEngine.Material UIDrawCall::mDepthMat
	Material_t193706927 * ___mDepthMat_12;
	// System.Int32[] UIDrawCall::mIndices
	Int32U5BU5D_t3030399641* ___mIndices_13;
	// System.Boolean UIDrawCall::mUseDepth
	bool ___mUseDepth_14;
	// System.Boolean UIDrawCall::mReset
	bool ___mReset_15;
	// System.Boolean UIDrawCall::mEven
	bool ___mEven_16;
	// System.Int32 UIDrawCall::mDepth
	int32_t ___mDepth_17;

public:
	inline static int32_t get_offset_of_mTrans_2() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mTrans_2)); }
	inline Transform_t3275118058 * get_mTrans_2() const { return ___mTrans_2; }
	inline Transform_t3275118058 ** get_address_of_mTrans_2() { return &___mTrans_2; }
	inline void set_mTrans_2(Transform_t3275118058 * value)
	{
		___mTrans_2 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_2, value);
	}

	inline static int32_t get_offset_of_mSharedMat_3() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mSharedMat_3)); }
	inline Material_t193706927 * get_mSharedMat_3() const { return ___mSharedMat_3; }
	inline Material_t193706927 ** get_address_of_mSharedMat_3() { return &___mSharedMat_3; }
	inline void set_mSharedMat_3(Material_t193706927 * value)
	{
		___mSharedMat_3 = value;
		Il2CppCodeGenWriteBarrier(&___mSharedMat_3, value);
	}

	inline static int32_t get_offset_of_mMesh0_4() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mMesh0_4)); }
	inline Mesh_t1356156583 * get_mMesh0_4() const { return ___mMesh0_4; }
	inline Mesh_t1356156583 ** get_address_of_mMesh0_4() { return &___mMesh0_4; }
	inline void set_mMesh0_4(Mesh_t1356156583 * value)
	{
		___mMesh0_4 = value;
		Il2CppCodeGenWriteBarrier(&___mMesh0_4, value);
	}

	inline static int32_t get_offset_of_mMesh1_5() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mMesh1_5)); }
	inline Mesh_t1356156583 * get_mMesh1_5() const { return ___mMesh1_5; }
	inline Mesh_t1356156583 ** get_address_of_mMesh1_5() { return &___mMesh1_5; }
	inline void set_mMesh1_5(Mesh_t1356156583 * value)
	{
		___mMesh1_5 = value;
		Il2CppCodeGenWriteBarrier(&___mMesh1_5, value);
	}

	inline static int32_t get_offset_of_mFilter_6() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mFilter_6)); }
	inline MeshFilter_t3026937449 * get_mFilter_6() const { return ___mFilter_6; }
	inline MeshFilter_t3026937449 ** get_address_of_mFilter_6() { return &___mFilter_6; }
	inline void set_mFilter_6(MeshFilter_t3026937449 * value)
	{
		___mFilter_6 = value;
		Il2CppCodeGenWriteBarrier(&___mFilter_6, value);
	}

	inline static int32_t get_offset_of_mRen_7() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mRen_7)); }
	inline MeshRenderer_t1268241104 * get_mRen_7() const { return ___mRen_7; }
	inline MeshRenderer_t1268241104 ** get_address_of_mRen_7() { return &___mRen_7; }
	inline void set_mRen_7(MeshRenderer_t1268241104 * value)
	{
		___mRen_7 = value;
		Il2CppCodeGenWriteBarrier(&___mRen_7, value);
	}

	inline static int32_t get_offset_of_mClipping_8() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mClipping_8)); }
	inline int32_t get_mClipping_8() const { return ___mClipping_8; }
	inline int32_t* get_address_of_mClipping_8() { return &___mClipping_8; }
	inline void set_mClipping_8(int32_t value)
	{
		___mClipping_8 = value;
	}

	inline static int32_t get_offset_of_mClipRange_9() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mClipRange_9)); }
	inline Vector4_t2243707581  get_mClipRange_9() const { return ___mClipRange_9; }
	inline Vector4_t2243707581 * get_address_of_mClipRange_9() { return &___mClipRange_9; }
	inline void set_mClipRange_9(Vector4_t2243707581  value)
	{
		___mClipRange_9 = value;
	}

	inline static int32_t get_offset_of_mClipSoft_10() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mClipSoft_10)); }
	inline Vector2_t2243707579  get_mClipSoft_10() const { return ___mClipSoft_10; }
	inline Vector2_t2243707579 * get_address_of_mClipSoft_10() { return &___mClipSoft_10; }
	inline void set_mClipSoft_10(Vector2_t2243707579  value)
	{
		___mClipSoft_10 = value;
	}

	inline static int32_t get_offset_of_mMat_11() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mMat_11)); }
	inline Material_t193706927 * get_mMat_11() const { return ___mMat_11; }
	inline Material_t193706927 ** get_address_of_mMat_11() { return &___mMat_11; }
	inline void set_mMat_11(Material_t193706927 * value)
	{
		___mMat_11 = value;
		Il2CppCodeGenWriteBarrier(&___mMat_11, value);
	}

	inline static int32_t get_offset_of_mDepthMat_12() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mDepthMat_12)); }
	inline Material_t193706927 * get_mDepthMat_12() const { return ___mDepthMat_12; }
	inline Material_t193706927 ** get_address_of_mDepthMat_12() { return &___mDepthMat_12; }
	inline void set_mDepthMat_12(Material_t193706927 * value)
	{
		___mDepthMat_12 = value;
		Il2CppCodeGenWriteBarrier(&___mDepthMat_12, value);
	}

	inline static int32_t get_offset_of_mIndices_13() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mIndices_13)); }
	inline Int32U5BU5D_t3030399641* get_mIndices_13() const { return ___mIndices_13; }
	inline Int32U5BU5D_t3030399641** get_address_of_mIndices_13() { return &___mIndices_13; }
	inline void set_mIndices_13(Int32U5BU5D_t3030399641* value)
	{
		___mIndices_13 = value;
		Il2CppCodeGenWriteBarrier(&___mIndices_13, value);
	}

	inline static int32_t get_offset_of_mUseDepth_14() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mUseDepth_14)); }
	inline bool get_mUseDepth_14() const { return ___mUseDepth_14; }
	inline bool* get_address_of_mUseDepth_14() { return &___mUseDepth_14; }
	inline void set_mUseDepth_14(bool value)
	{
		___mUseDepth_14 = value;
	}

	inline static int32_t get_offset_of_mReset_15() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mReset_15)); }
	inline bool get_mReset_15() const { return ___mReset_15; }
	inline bool* get_address_of_mReset_15() { return &___mReset_15; }
	inline void set_mReset_15(bool value)
	{
		___mReset_15 = value;
	}

	inline static int32_t get_offset_of_mEven_16() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mEven_16)); }
	inline bool get_mEven_16() const { return ___mEven_16; }
	inline bool* get_address_of_mEven_16() { return &___mEven_16; }
	inline void set_mEven_16(bool value)
	{
		___mEven_16 = value;
	}

	inline static int32_t get_offset_of_mDepth_17() { return static_cast<int32_t>(offsetof(UIDrawCall_t3291843512, ___mDepth_17)); }
	inline int32_t get_mDepth_17() const { return ___mDepth_17; }
	inline int32_t* get_address_of_mDepth_17() { return &___mDepth_17; }
	inline void set_mDepth_17(int32_t value)
	{
		___mDepth_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
