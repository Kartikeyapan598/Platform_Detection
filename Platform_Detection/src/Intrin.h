#pragma once
#include <string>

#if defined (_MSC_VER)
#include <intrin.h>
#else
#include <x86intrin.h>
#endif

namespace Detection
{
	void GetProcessorType(std::string& type)
	{
		type.erase();
#if defined	_M_AMD64
		type.append("x64");
#elif defined _M_IX86
		type.append("x86");
#elif defined _M_ARM
	#if defined _M_ARM64
		type.append("64-bit ARM");
	#else
		type.append("Not 64-bit ARM");
	#endif
#else 
		type.append("Not Defined");
#endif
		type.append("\n");
	}

	void GetFloatingCapability(std::string& str)
	{
		str.erase();

#ifdef _M_IX86_FP
	#if defined(__MMX__)
		str.append("__MMX__, ");
	#endif
	
	#if defined(__AES__)
		str.append("__AES__, ");
	#endif
	
	#if defined(__FMA__)
		str.append("__FMA__, ");
	#endif
	
	#if defined(__SSE__)
		str.append("__SSE__, ");
	#endif
	
	#if defined(__SSE2__)
		str.append("__SSE__2, ");
	#endif
	
	#if defined(__SSE3__)
		str.append("__SSE3__, ");
	#endif
	
	#if defined(__SSSE3__)
		str.append("__SSSE3__, ");
	#endif
	
	#if defined(__SSE4_1__)
		str.append("__SSE4_1__, ");
	#endif
	
	#if defined(__SSE4_2__)
		str.append("__SSE4_2__, ");
	#endif
	
	#if defined(__AVX__)
		str.append("__AVX__, ");
	#endif
	
	#if defined(__AVX2__)
		str.append("__AVX2__, ");
	#endif
	
	#if defined(__AVX512F__) // Foundation
		str.append("__AVX512F__, ");
	#endif
	
	#if defined(__AVX512DQ__) // Double Word and Quadword
		str.append("__AVX512DQ__, ");
	#endif
	
	#if defined(__AVX512BW__) // Byte and Word
		str.append("__AVX512BW__, ");
	#endif
	
	#if defined(__AVX512CD__) // Conflict Detection
		str.append("__AVX512CD__, ");
	#endif
	
	#if defined(__AVX512ER__) // Exponential and Reciprocal
		str.append("__AVX512ER__, ");
	#endif
	
	#if defined(__AVX512PF__) // Prefetch Instructions
		str.append("__AVX512PF__, ");
	#endif
	
	#if defined(__AVX512VL__) // Vector Length
		str.append("__AVX512VL__, ");
	#endif
#else
		str.append("processor x64 type");
#endif
		str.append("\n");
	}
}