#pragma once


#if PINE_API_BUILD

	#define PINE_API __declspec(dllexport)

#else
	
	#define PINE_API __declspec(dllimport)

#endif