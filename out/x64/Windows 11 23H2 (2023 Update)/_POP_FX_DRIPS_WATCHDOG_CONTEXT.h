#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_DEVICE_NODE.h>

//0x28 bytes (sizeof)
struct _POP_FX_DRIPS_WATCHDOG_CONTEXT
{
    struct _LIST_ENTRY Link;                                                //0x0
    ULONG ComponentIndex;                                                   //0x10
    struct _DEVICE_NODE** ChildDevices;                                     //0x18
    ULONG ChildDeviceCount;                                                 //0x20
};
/* Used in */
// _POP_FX_DEVICE

