#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObstacleControl
struct  ObstacleControl_t429079798  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 ObstacleControl::speed
	int32_t ___speed_2;
	// UnityEngine.Rigidbody ObstacleControl::rb
	Rigidbody_t4233889191 * ___rb_3;
	// UnityEngine.Vector3 ObstacleControl::offset
	Vector3_t2243707580  ___offset_4;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(ObstacleControl_t429079798, ___speed_2)); }
	inline int32_t get_speed_2() const { return ___speed_2; }
	inline int32_t* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(int32_t value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_rb_3() { return static_cast<int32_t>(offsetof(ObstacleControl_t429079798, ___rb_3)); }
	inline Rigidbody_t4233889191 * get_rb_3() const { return ___rb_3; }
	inline Rigidbody_t4233889191 ** get_address_of_rb_3() { return &___rb_3; }
	inline void set_rb_3(Rigidbody_t4233889191 * value)
	{
		___rb_3 = value;
		Il2CppCodeGenWriteBarrier(&___rb_3, value);
	}

	inline static int32_t get_offset_of_offset_4() { return static_cast<int32_t>(offsetof(ObstacleControl_t429079798, ___offset_4)); }
	inline Vector3_t2243707580  get_offset_4() const { return ___offset_4; }
	inline Vector3_t2243707580 * get_address_of_offset_4() { return &___offset_4; }
	inline void set_offset_4(Vector3_t2243707580  value)
	{
		___offset_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
