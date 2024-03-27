#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KTHREAD.h>
#include <_KQUEUE.h>
#include <_KDPC.h>

//0x30 bytes (sizeof)
struct _KWAIT_BLOCK
{
    struct _LIST_ENTRY WaitListEntry;                                       //0x0
    UCHAR WaitType;                                                         //0x10
    volatile UCHAR BlockState;                                              //0x11
    USHORT WaitKey;                                                         //0x12
    LONG SpareLong;                                                         //0x14
    union
    {
        struct _KTHREAD* Thread;                                            //0x18
        struct _KQUEUE* NotificationQueue;                                  //0x18
        struct _KDPC* Dpc;                                                  //0x18
    };
    VOID* Object;                                                           //0x20
    VOID* SparePtr;                                                         //0x28
};
/* Used in */
// _KTHREAD

