#pragma once
/* ------------------ */

#include <_ETW_DECODE_CONTROL_ENTRY.h>
#include <_GUID.h>

//0x30 bytes (sizeof)
struct _ETW_DECODE_CONTROL_ENTRY
{
    struct _ETW_DECODE_CONTROL_ENTRY* Next;                                 //0x0
    struct _GUID Decode;                                                    //0x8
    struct _GUID Control;                                                   //0x18
    UCHAR ConsumersNotified;                                                //0x28
};
/* Used in */
// _ETW_DECODE_CONTROL_ENTRY
// _WMI_LOGGER_CONTEXT

