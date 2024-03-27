#pragma once
/* ------------------ */

#include <_KTHREAD.h>
#include <_KEVENT.h>

//0x20 bytes (sizeof)
struct _FAST_MUTEX
{
    LONG Count;                                                             //0x0
    struct _KTHREAD* Owner;                                                 //0x4
    ULONG Contention;                                                       //0x8
    struct _KEVENT Event;                                                   //0xc
    ULONG OldIrql;                                                          //0x1c
};
/* Used in */
// _CMHIVE
// _EJOB
// _EPROCESS
// _MMSESSION
// _MM_SESSION_SPACE
// _PAGED_LOOKASIDE_LIST
// _PNP_DEVICE_EVENT_LIST

