#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x10 bytes (sizeof)
struct _ETW_LAST_ENABLE_INFO
{
    union _LARGE_INTEGER EnableFlags;                                       //0x0
    USHORT LoggerId;                                                        //0x8
    UCHAR Level;                                                            //0xa
    UCHAR Enabled:1;                                                        //0xb
    UCHAR InternalFlag:7;                                                   //0xb
};
/* Used in */
// _ETW_GUID_ENTRY

