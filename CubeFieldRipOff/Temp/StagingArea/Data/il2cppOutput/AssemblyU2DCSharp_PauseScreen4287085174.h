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

// PauseScreen
struct  PauseScreen_t4287085174  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject PauseScreen::pause
	GameObject_t1756533147 * ___pause_2;
	// UnityEngine.GameObject PauseScreen::screen
	GameObject_t1756533147 * ___screen_3;

public:
	inline static int32_t get_offset_of_pause_2() { return static_cast<int32_t>(offsetof(PauseScreen_t4287085174, ___pause_2)); }
	inline GameObject_t1756533147 * get_pause_2() const { return ___pause_2; }
	inline GameObject_t1756533147 ** get_address_of_pause_2() { return &___pause_2; }
	inline void set_pause_2(GameObject_t1756533147 * value)
	{
		___pause_2 = value;
		Il2CppCodeGenWriteBarrier(&___pause_2, value);
	}

	inline static int32_t get_offset_of_screen_3() { return static_cast<int32_t>(offsetof(PauseScreen_t4287085174, ___screen_3)); }
	inline GameObject_t1756533147 * get_screen_3() const { return ___screen_3; }
	inline GameObject_t1756533147 ** get_address_of_screen_3() { return &___screen_3; }
	inline void set_screen_3(GameObject_t1756533147 * value)
	{
		___screen_3 = value;
		Il2CppCodeGenWriteBarrier(&___screen_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
