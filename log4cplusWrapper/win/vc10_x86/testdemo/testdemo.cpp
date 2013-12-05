// testdemo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <yrx_logmodule.h>
int _tmain(int argc, _TCHAR* argv[])
{
	yrx_logInitLog4cplus("log4cplus.Client_properties");
	yrx_logDebug(__FILE__,__LINE__,"a=%d",1);
	return 0;
}

