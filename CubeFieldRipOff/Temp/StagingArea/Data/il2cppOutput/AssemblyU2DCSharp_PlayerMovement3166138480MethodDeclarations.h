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

// PlayerMovement
struct PlayerMovement_t3166138480;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.Collision
struct Collision_t2876846408;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collision2876846408.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void PlayerMovement::.ctor()
extern "C"  void PlayerMovement__ctor_m767722651 (PlayerMovement_t3166138480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMovement::Start()
extern "C"  void PlayerMovement_Start_m727481071 (PlayerMovement_t3166138480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMovement::FixedUpdate()
extern "C"  void PlayerMovement_FixedUpdate_m871574404 (PlayerMovement_t3166138480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PlayerMovement::GameOver()
extern "C"  Il2CppObject * PlayerMovement_GameOver_m3983871693 (PlayerMovement_t3166138480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMovement::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void PlayerMovement_OnCollisionEnter_m1703719529 (PlayerMovement_t3166138480 * __this, Collision_t2876846408 * ___collision0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMovement::setTilt(System.Single,System.Single,System.Single,UnityEngine.Transform)
extern "C"  void PlayerMovement_setTilt_m445378770 (PlayerMovement_t3166138480 * __this, float ___move0, float ___max1, float ___min2, Transform_t3275118058 * ___camT3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PlayerMovement::tiltCamera(System.Single,System.Single,System.Single,UnityEngine.Transform)
extern "C"  Vector3_t2243707580  PlayerMovement_tiltCamera_m3576518291 (PlayerMovement_t3166138480 * __this, float ___move0, float ___max1, float ___min2, Transform_t3275118058 * ___camT3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMovement::SetScore()
extern "C"  void PlayerMovement_SetScore_m863898457 (PlayerMovement_t3166138480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
