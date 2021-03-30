#pragma once

#if defined (_MSC_VER)
#include <intrin.h>
#else
#include <x86intrin.h>
#endif

namespace Detection
{

#if defined(__MMX__)
	#define INTRIN_MMX
#endif

#if defined(__AES__)
	#define INTRIN_AES
#endif

#if defined(__FMA__)
	#define INTRIN_FMA
#endif

#if defined(__SSE__)
	#define INTRIN_SSE
#endif

#if defined(__SSE2__)
	#define INTRIN_SSE2
#endif

#if defined(__SSE3__)
	#define INTRIN_SSE3
#endif

#if defined(__SSSE3__)
	#define INTRIN_SSSE3
#endif

#if defined(__SSE4_1__)
	#define INTRIN_SSE4_1
#endif

#if defined(__SSE4_2__)
	#define INTRIN_SSE4_2
#endif

#if defined(__AVX__)
	#define INTRIN_AVX
#endif

#if defined(__AVX2__)
	#define INTRIN_AVX2
#endif

#if defined(__AVX512F__) // Foundation
	#define INTRIN_AVX512
#endif

#if defined(__AVX512DQ__) // Double Word and Quadword
	#define INTRIN_AVX512DQ
#endif

#if defined(__AVX512BW__) // Byte and Word
	#define INTRIN_AVX512BW
#endif

#if defined(__AVX512CD__) // Conflict Detection
	#define INTRIN_AVX512CD
#endif

#if defined(__AVX512ER__) // Exponential and Reciprocal
#define INTRIN_AVX512ER
#endif

#if defined(__AVX512PF__) // Prefetch Instructions
	#define INTRIN_AVX512PF
#endif

#if defined(__AVX512VL__) // Vector Length
	#define INTRIN_AVX512VL
#endif

}