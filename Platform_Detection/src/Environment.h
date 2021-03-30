#pragma once

namespace Detection
{

#if defined(__MINGW32__) || defined(__MINGW64__)
	#define ENVMT_MINGW
#elif defined(__CYGWIN__)
	#define ENVMT_CYGWIN
#elif defined(__unix__)
	#define ENVMT_UNIX
#endif

}