#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KTHREAD.h>
#include <_KQUEUE.h>

//0x18 bytes (sizeof)
struct _KWAIT_BLOCK
{
    struct _LIST_ENTRY WaitListEntry;                                       //0x0
    UCHAR WaitType;                                                         //0x8
    volatile UCHAR BlockState;                                              //0x9
    USHORT WaitKey;                                                         //0xa
    union
    {
        struct _KTHREAD* Thread;                                            //0xc
        struct _KQUEUE* NotificationQueue;                                  //0xc
    };
    VOID* Object;                                                           //0x10
    VOID* SparePtr;                                                         //0x14
};
/* Used in */
// _KTHREAD

