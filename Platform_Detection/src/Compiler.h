#pragma once

// Compiler Detection 

namespace Detection
{

#if defined(__clang__)
	#define COMPILER_CLANG

#elif defined(__INTEL_COMPILER)
	#define COMPILER_INTEL

#elif defined(_MSC_VER)
	#define COMPILER_MSVC

#elif defined(__GNUC__) || defined(__GNUG__)
	#define COMPILER_GNUC

#else 
	#define COMPILER_OTHER

#endif

}