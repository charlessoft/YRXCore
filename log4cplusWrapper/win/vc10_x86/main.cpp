#include <stdio.h>
#include <stdlib.h>
#include <yrx_logmodule.h>
int main(int argc, const char *argv[])
{
    yrx_logInitLog4cplus("log4cplus.Client_properties");
    yrx_logDebug(__FILE__,__LINE__,"a=%d",1);
    printf("hello\r\n");
    return 0;
}
