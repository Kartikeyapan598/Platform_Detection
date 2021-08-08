#pragma once
#include <string>

namespace Detection
{
	void GetRunnerPlatform(std::string& runner)
	{
		runner.erase();
#if defined(_WIN32) || defined(_WIN64)
	#define OS_WIN
		runner.append("Windows");
#elif defined(__linux__) || defined(__FreeBSD__)
	#define OS_LINUX
		runner.append("Linux");
#elif defined(__APPLE__)
	#define OS_X
		runner.append("Mac OS");
#else
	#define UNDEFINED_OS
		runner.append("unknown OS");
#endif
		runner.append("\n");
	}
}