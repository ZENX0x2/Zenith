#pragma once

#ifdef ZT_PLATFORM_WINDOWS
	#ifdef ZT_BUILD_DLL
		#define ZENITH_API __declspec(dllexport)		
	#else
		#define ZENITH_API __declspec(dllimport)
	#endif
#else
	#Error Zenith only supports Windows!
#endif
	