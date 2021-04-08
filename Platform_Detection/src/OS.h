#pragma once

namespace Detection
{

#if defined(_WIN32) || defined(_WIN64)
	#define OS_WIN

#elif defined(__linux__) || defined(__FreeBSD__)
	#define OS_LINUX

#elif defined(__APPLE__)
	#define OS_X

#endif

}