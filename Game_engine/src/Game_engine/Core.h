#pragma once

#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define Game_engine_API __declspec(dllexport)
	#else
		#define Game_engine_API __declspec(dllimport)
	#endif

#else
	#error Game_engine only supports Windows!

#endif

