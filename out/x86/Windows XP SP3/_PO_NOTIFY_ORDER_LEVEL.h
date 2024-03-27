#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_LIST_ENTRY.h>

//0x48 bytes (sizeof)
struct _PO_NOTIFY_ORDER_LEVEL
{
    struct _KEVENT LevelReady;                                              //0x0
    ULONG DeviceCount;                                                      //0x10
    ULONG ActiveCount;                                                      //0x14
    struct _LIST_ENTRY WaitSleep;                                           //0x18
    struct _LIST_ENTRY ReadySleep;                                          //0x20
    struct _LIST_ENTRY Pending;                                             //0x28
    struct _LIST_ENTRY Complete;                                            //0x30
    struct _LIST_ENTRY ReadyS0;                                             //0x38
    struct _LIST_ENTRY WaitS0;                                              //0x40
};
/* Used in */
// _PO_DEVICE_NOTIFY_ORDER

