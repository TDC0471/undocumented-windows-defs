#pragma once
/* ------------------ */

#include <_SECURITY_QUALITY_OF_SERVICE.h>
#include <_TOKEN_CONTROL.h>

//0x3c bytes (sizeof)
struct _SECURITY_CLIENT_CONTEXT
{
    struct _SECURITY_QUALITY_OF_SERVICE SecurityQos;                        //0x0
    VOID* ClientToken;                                                      //0xc
    UCHAR DirectlyAccessClientToken;                                        //0x10
    UCHAR DirectAccessEffectiveOnly;                                        //0x11
    UCHAR ServerIsRemote;                                                   //0x12
    struct _TOKEN_CONTROL ClientTokenControl;                               //0x14
};
/* Used in */
// _ALPC_PORT
// _KALPC_SECURITY_DATA
// _LPCP_PORT_OBJECT
// _WMI_LOGGER_CONTEXT

