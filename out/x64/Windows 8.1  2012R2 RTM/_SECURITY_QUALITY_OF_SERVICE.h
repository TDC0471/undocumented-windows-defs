#pragma once
/* ------------------ */

#include <_SECURITY_IMPERSONATION_LEVEL.h>

//0xc bytes (sizeof)
struct _SECURITY_QUALITY_OF_SERVICE
{
    ULONG Length;                                                           //0x0
    enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;                  //0x4
    UCHAR ContextTrackingMode;                                              //0x8
    UCHAR EffectiveOnly;                                                    //0x9
};
/* Used in */
// _ALPC_PORT_ATTRIBUTES
// _IO_SECURITY_CONTEXT
// _LPCP_PORT_OBJECT
// _OBJECT_CREATE_INFORMATION
// _OBJECT_TYPE_INITIALIZER
// _SECURITY_CLIENT_CONTEXT

