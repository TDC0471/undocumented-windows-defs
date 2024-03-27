#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x28 bytes (sizeof)
struct _KDEVICE_QUEUE
{
    SHORT Type;                                                             //0x0
    SHORT Size;                                                             //0x2
    struct _LIST_ENTRY DeviceListHead;                                      //0x8
    ULONGLONG Lock;                                                         //0x18
    union
    {
        UCHAR Busy;                                                         //0x20
        struct
        {
            LONGLONG Reserved:8;                                            //0x20
            LONGLONG Hint:56;                                               //0x20
        };
    };
};
/* Used in */
// _DEVICE_OBJECT

