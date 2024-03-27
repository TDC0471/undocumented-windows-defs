#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_LIST_ENTRY.h>

//0x80 bytes (sizeof)
struct _PO_NOTIFY_ORDER_LEVEL
{
    struct _KEVENT LevelReady;                                              //0x0
    ULONG DeviceCount;                                                      //0x18
    ULONG ActiveCount;                                                      //0x1c
    struct _LIST_ENTRY WaitSleep;                                           //0x20
    struct _LIST_ENTRY ReadySleep;                                          //0x30
    struct _LIST_ENTRY Pending;                                             //0x40
    struct _LIST_ENTRY Complete;                                            //0x50
    struct _LIST_ENTRY ReadyS0;                                             //0x60
    struct _LIST_ENTRY WaitS0;                                              //0x70
};
/* Used in */
// _PO_DEVICE_NOTIFY_ORDER

