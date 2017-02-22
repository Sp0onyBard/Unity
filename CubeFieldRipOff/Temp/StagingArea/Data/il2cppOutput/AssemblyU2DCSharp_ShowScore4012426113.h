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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShowScore
struct  ShowScore_t4012426113  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text ShowScore::score
	Text_t356221433 * ___score_2;

public:
	inline static int32_t get_offset_of_score_2() { return static_cast<int32_t>(offsetof(ShowScore_t4012426113, ___score_2)); }
	inline Text_t356221433 * get_score_2() const { return ___score_2; }
	inline Text_t356221433 ** get_address_of_score_2() { return &___score_2; }
	inline void set_score_2(Text_t356221433 * value)
	{
		___score_2 = value;
		Il2CppCodeGenWriteBarrier(&___score_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
