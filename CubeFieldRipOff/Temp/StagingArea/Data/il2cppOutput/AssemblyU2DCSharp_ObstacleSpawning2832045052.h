#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObstacleSpawning
struct  ObstacleSpawning_t2832045052  : public MonoBehaviour_t1158329972
{
public:
	// System.Single ObstacleSpawning::rate
	float ___rate_2;
	// System.Boolean ObstacleSpawning::cubeActive
	bool ___cubeActive_3;
	// System.Single ObstacleSpawning::max
	float ___max_4;
	// System.Single ObstacleSpawning::min
	float ___min_5;
	// UnityEngine.GameObject ObstacleSpawning::cube
	GameObject_t1756533147 * ___cube_6;

public:
	inline static int32_t get_offset_of_rate_2() { return static_cast<int32_t>(offsetof(ObstacleSpawning_t2832045052, ___rate_2)); }
	inline float get_rate_2() const { return ___rate_2; }
	inline float* get_address_of_rate_2() { return &___rate_2; }
	inline void set_rate_2(float value)
	{
		___rate_2 = value;
	}

	inline static int32_t get_offset_of_cubeActive_3() { return static_cast<int32_t>(offsetof(ObstacleSpawning_t2832045052, ___cubeActive_3)); }
	inline bool get_cubeActive_3() const { return ___cubeActive_3; }
	inline bool* get_address_of_cubeActive_3() { return &___cubeActive_3; }
	inline void set_cubeActive_3(bool value)
	{
		___cubeActive_3 = value;
	}

	inline static int32_t get_offset_of_max_4() { return static_cast<int32_t>(offsetof(ObstacleSpawning_t2832045052, ___max_4)); }
	inline float get_max_4() const { return ___max_4; }
	inline float* get_address_of_max_4() { return &___max_4; }
	inline void set_max_4(float value)
	{
		___max_4 = value;
	}

	inline static int32_t get_offset_of_min_5() { return static_cast<int32_t>(offsetof(ObstacleSpawning_t2832045052, ___min_5)); }
	inline float get_min_5() const { return ___min_5; }
	inline float* get_address_of_min_5() { return &___min_5; }
	inline void set_min_5(float value)
	{
		___min_5 = value;
	}

	inline static int32_t get_offset_of_cube_6() { return static_cast<int32_t>(offsetof(ObstacleSpawning_t2832045052, ___cube_6)); }
	inline GameObject_t1756533147 * get_cube_6() const { return ___cube_6; }
	inline GameObject_t1756533147 ** get_address_of_cube_6() { return &___cube_6; }
	inline void set_cube_6(GameObject_t1756533147 * value)
	{
		___cube_6 = value;
		Il2CppCodeGenWriteBarrier(&___cube_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
