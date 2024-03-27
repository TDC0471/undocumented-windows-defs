#pragma once
/* ------------------ */

#include <_SECURITY_QUALITY_OF_SERVICE.h>
#include <_TOKEN_CONTROL.h>

//0x48 bytes (sizeof)
struct _SECURITY_CLIENT_CONTEXT
{
    struct _SECURITY_QUALITY_OF_SERVICE SecurityQos;                        //0x0
    VOID* ClientToken;                                                      //0x10
    UCHAR DirectlyAccessClientToken;                                        //0x18
    UCHAR DirectAccessEffectiveOnly;                                        //0x19
    UCHAR ServerIsRemote;                                                   //0x1a
    struct _TOKEN_CONTROL ClientTokenControl;                               //0x1c
};
/* Used in */
// _LPCP_PORT_OBJECT
// _WMI_LOGGER_CONTEXT

