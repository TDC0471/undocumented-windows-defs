#pragma once
/* ------------------ */

#include <_PROXY_CLASS.h>
#include <_UNICODE_STRING.h>

//0x20 bytes (sizeof)
struct _SECURITY_TOKEN_PROXY_DATA
{
    ULONG Length;                                                           //0x0
    enum _PROXY_CLASS ProxyClass;                                           //0x4
    struct _UNICODE_STRING PathInfo;                                        //0x8
    ULONG ContainerMask;                                                    //0x18
    ULONG ObjectMask;                                                       //0x1c
};
/* Used in */
// _TOKEN

