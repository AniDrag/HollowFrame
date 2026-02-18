#pragma once
namespace HollowFrame {

#ifdef HF_PLATFORM_WINDOWS
	#ifdef HF_BUILD_DLL
		#define HOLLOWFRAME_API __declspec(dllexport)
	#else
		#define HOLLOWFRAME_API __declspec(dllimport)
	#endif
#else
	#error Supports only windows! error from core.h
#endif
}