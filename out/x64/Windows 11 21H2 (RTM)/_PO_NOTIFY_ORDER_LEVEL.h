#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x48 bytes (sizeof)
struct _PO_NOTIFY_ORDER_LEVEL
{
    ULONG DeviceCount;                                                      //0x0
    ULONG ActiveCount;                                                      //0x4
    struct _LIST_ENTRY WaitSleep;                                           //0x8
    struct _LIST_ENTRY ReadySleep;                                          //0x18
    struct _LIST_ENTRY ReadyS0;                                             //0x28
    struct _LIST_ENTRY WaitS0;                                              //0x38
};
/* Used in */
// _PO_DEVICE_NOTIFY_ORDER

