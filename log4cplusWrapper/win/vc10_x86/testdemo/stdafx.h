// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>


#ifdef _DEBUG
#pragma comment(lib,"../../../../Debug/log4cplusWrapper.lib")
#pragma comment(lib,"../../../../../log4cplus/win/vc10_x86/log4cplusSD.lib")
#else
#pragma comment(lib,"../../../../Release/log4cplusWrapper.lib")
#pragma comment(lib,"../../../../../log4cplus/win/vc10_x86/log4cplusS.lib")
#endif
// TODO: reference additional headers your program requires here
