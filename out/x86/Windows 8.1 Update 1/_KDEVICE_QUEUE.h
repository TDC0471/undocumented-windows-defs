#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x14 bytes (sizeof)
struct _KDEVICE_QUEUE
{
    SHORT Type;                                                             //0x0
    SHORT Size;                                                             //0x2
    struct _LIST_ENTRY DeviceListHead;                                      //0x4
    ULONG Lock;                                                             //0xc
    UCHAR Busy;                                                             //0x10
};
/* Used in */
// _DEVICE_OBJECT

