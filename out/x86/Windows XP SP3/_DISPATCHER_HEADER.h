#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x10 bytes (sizeof)
struct _DISPATCHER_HEADER
{
    UCHAR Type;                                                             //0x0
    UCHAR Absolute;                                                         //0x1
    UCHAR Size;                                                             //0x2
    UCHAR Inserted;                                                         //0x3
    LONG SignalState;                                                       //0x4
    struct _LIST_ENTRY WaitListHead;                                        //0x8
};
/* Used in */
// _KEVENT
// _KMUTANT
// _KPROCESS
// _KQUEUE
// _KSEMAPHORE
// _KTHREAD
// _KTIMER

