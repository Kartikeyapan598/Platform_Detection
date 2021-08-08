#pragma once
#include <string>
// Compiler Detection

namespace Detection
{
	void GetCompilerType(std::string& compiler)
	{
		compiler.erase();
#if defined(__clang__)
		compiler.append("Clang");
		#define CLANG
#elif defined(__INTEL_COMPILER)
		compiler.append("Intel Compiler");
		#define INTEL
#elif defined(_MSC_VER)
		compiler.append("MSVC");
		#define MSVC
#elif defined(__GNUC__) || defined(__GNUG__)
		compiler.append("GNU Compiler");
		#define GNU
#else 
		compiler = "undefined";
		#define CompilerError
#endif
		compiler.append("\n");
	}
}