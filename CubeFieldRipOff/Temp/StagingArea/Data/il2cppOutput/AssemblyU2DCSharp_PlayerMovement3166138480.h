#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;
// PlayerMovement
struct PlayerMovement_t3166138480;
// UnityEngine.MeshRenderer
struct MeshRenderer_t1268241104;
// UnityEngine.BoxCollider
struct BoxCollider_t22920061;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerMovement
struct  PlayerMovement_t3166138480  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PlayerMovement::speed
	float ___speed_2;
	// UnityEngine.UI.Text PlayerMovement::score
	Text_t356221433 * ___score_3;
	// System.Single PlayerMovement::maximum
	float ___maximum_5;
	// System.Single PlayerMovement::minimum
	float ___minimum_6;
	// UnityEngine.Rigidbody PlayerMovement::rb
	Rigidbody_t4233889191 * ___rb_7;
	// UnityEngine.Camera PlayerMovement::cam
	Camera_t189460977 * ___cam_8;
	// UnityEngine.Transform PlayerMovement::camtran
	Transform_t3275118058 * ___camtran_9;
	// System.Single PlayerMovement::sensitivity
	float ___sensitivity_10;
	// UnityEngine.GameObject PlayerMovement::camera
	GameObject_t1756533147 * ___camera_11;
	// UnityEngine.GameObject PlayerMovement::spawner
	GameObject_t1756533147 * ___spawner_12;
	// UnityEngine.GameObject PlayerMovement::particles
	GameObject_t1756533147 * ___particles_13;
	// UnityEngine.ParticleSystem PlayerMovement::ps
	ParticleSystem_t3394631041 * ___ps_14;
	// PlayerMovement PlayerMovement::pm
	PlayerMovement_t3166138480 * ___pm_15;
	// UnityEngine.MeshRenderer PlayerMovement::mr
	MeshRenderer_t1268241104 * ___mr_16;
	// UnityEngine.BoxCollider PlayerMovement::bc
	BoxCollider_t22920061 * ___bc_17;
	// System.Boolean PlayerMovement::dying
	bool ___dying_18;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_score_3() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___score_3)); }
	inline Text_t356221433 * get_score_3() const { return ___score_3; }
	inline Text_t356221433 ** get_address_of_score_3() { return &___score_3; }
	inline void set_score_3(Text_t356221433 * value)
	{
		___score_3 = value;
		Il2CppCodeGenWriteBarrier(&___score_3, value);
	}

	inline static int32_t get_offset_of_maximum_5() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___maximum_5)); }
	inline float get_maximum_5() const { return ___maximum_5; }
	inline float* get_address_of_maximum_5() { return &___maximum_5; }
	inline void set_maximum_5(float value)
	{
		___maximum_5 = value;
	}

	inline static int32_t get_offset_of_minimum_6() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___minimum_6)); }
	inline float get_minimum_6() const { return ___minimum_6; }
	inline float* get_address_of_minimum_6() { return &___minimum_6; }
	inline void set_minimum_6(float value)
	{
		___minimum_6 = value;
	}

	inline static int32_t get_offset_of_rb_7() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___rb_7)); }
	inline Rigidbody_t4233889191 * get_rb_7() const { return ___rb_7; }
	inline Rigidbody_t4233889191 ** get_address_of_rb_7() { return &___rb_7; }
	inline void set_rb_7(Rigidbody_t4233889191 * value)
	{
		___rb_7 = value;
		Il2CppCodeGenWriteBarrier(&___rb_7, value);
	}

	inline static int32_t get_offset_of_cam_8() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___cam_8)); }
	inline Camera_t189460977 * get_cam_8() const { return ___cam_8; }
	inline Camera_t189460977 ** get_address_of_cam_8() { return &___cam_8; }
	inline void set_cam_8(Camera_t189460977 * value)
	{
		___cam_8 = value;
		Il2CppCodeGenWriteBarrier(&___cam_8, value);
	}

	inline static int32_t get_offset_of_camtran_9() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___camtran_9)); }
	inline Transform_t3275118058 * get_camtran_9() const { return ___camtran_9; }
	inline Transform_t3275118058 ** get_address_of_camtran_9() { return &___camtran_9; }
	inline void set_camtran_9(Transform_t3275118058 * value)
	{
		___camtran_9 = value;
		Il2CppCodeGenWriteBarrier(&___camtran_9, value);
	}

	inline static int32_t get_offset_of_sensitivity_10() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___sensitivity_10)); }
	inline float get_sensitivity_10() const { return ___sensitivity_10; }
	inline float* get_address_of_sensitivity_10() { return &___sensitivity_10; }
	inline void set_sensitivity_10(float value)
	{
		___sensitivity_10 = value;
	}

	inline static int32_t get_offset_of_camera_11() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___camera_11)); }
	inline GameObject_t1756533147 * get_camera_11() const { return ___camera_11; }
	inline GameObject_t1756533147 ** get_address_of_camera_11() { return &___camera_11; }
	inline void set_camera_11(GameObject_t1756533147 * value)
	{
		___camera_11 = value;
		Il2CppCodeGenWriteBarrier(&___camera_11, value);
	}

	inline static int32_t get_offset_of_spawner_12() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___spawner_12)); }
	inline GameObject_t1756533147 * get_spawner_12() const { return ___spawner_12; }
	inline GameObject_t1756533147 ** get_address_of_spawner_12() { return &___spawner_12; }
	inline void set_spawner_12(GameObject_t1756533147 * value)
	{
		___spawner_12 = value;
		Il2CppCodeGenWriteBarrier(&___spawner_12, value);
	}

	inline static int32_t get_offset_of_particles_13() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___particles_13)); }
	inline GameObject_t1756533147 * get_particles_13() const { return ___particles_13; }
	inline GameObject_t1756533147 ** get_address_of_particles_13() { return &___particles_13; }
	inline void set_particles_13(GameObject_t1756533147 * value)
	{
		___particles_13 = value;
		Il2CppCodeGenWriteBarrier(&___particles_13, value);
	}

	inline static int32_t get_offset_of_ps_14() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___ps_14)); }
	inline ParticleSystem_t3394631041 * get_ps_14() const { return ___ps_14; }
	inline ParticleSystem_t3394631041 ** get_address_of_ps_14() { return &___ps_14; }
	inline void set_ps_14(ParticleSystem_t3394631041 * value)
	{
		___ps_14 = value;
		Il2CppCodeGenWriteBarrier(&___ps_14, value);
	}

	inline static int32_t get_offset_of_pm_15() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___pm_15)); }
	inline PlayerMovement_t3166138480 * get_pm_15() const { return ___pm_15; }
	inline PlayerMovement_t3166138480 ** get_address_of_pm_15() { return &___pm_15; }
	inline void set_pm_15(PlayerMovement_t3166138480 * value)
	{
		___pm_15 = value;
		Il2CppCodeGenWriteBarrier(&___pm_15, value);
	}

	inline static int32_t get_offset_of_mr_16() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___mr_16)); }
	inline MeshRenderer_t1268241104 * get_mr_16() const { return ___mr_16; }
	inline MeshRenderer_t1268241104 ** get_address_of_mr_16() { return &___mr_16; }
	inline void set_mr_16(MeshRenderer_t1268241104 * value)
	{
		___mr_16 = value;
		Il2CppCodeGenWriteBarrier(&___mr_16, value);
	}

	inline static int32_t get_offset_of_bc_17() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___bc_17)); }
	inline BoxCollider_t22920061 * get_bc_17() const { return ___bc_17; }
	inline BoxCollider_t22920061 ** get_address_of_bc_17() { return &___bc_17; }
	inline void set_bc_17(BoxCollider_t22920061 * value)
	{
		___bc_17 = value;
		Il2CppCodeGenWriteBarrier(&___bc_17, value);
	}

	inline static int32_t get_offset_of_dying_18() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___dying_18)); }
	inline bool get_dying_18() const { return ___dying_18; }
	inline bool* get_address_of_dying_18() { return &___dying_18; }
	inline void set_dying_18(bool value)
	{
		___dying_18 = value;
	}
};

struct PlayerMovement_t3166138480_StaticFields
{
public:
	// System.Int32 PlayerMovement::scoren
	int32_t ___scoren_4;

public:
	inline static int32_t get_offset_of_scoren_4() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480_StaticFields, ___scoren_4)); }
	inline int32_t get_scoren_4() const { return ___scoren_4; }
	inline int32_t* get_address_of_scoren_4() { return &___scoren_4; }
	inline void set_scoren_4(int32_t value)
	{
		___scoren_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
