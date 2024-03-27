#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_KGATE.h>
#include <_MI_ZERO_THREAD_CONTEXT.h>

//0x40 bytes (sizeof)
struct _MI_PARTITION_ZEROING
{
    struct _KEVENT PageEvent;                                               //0x0
    UCHAR ThreadActive;                                                     //0x10
    UCHAR ThreadPriorityStatic;                                             //0x11
    LONG ZeroFreePageSlistMinimum;                                          //0x14
    struct _WORK_QUEUE_ITEM RebalanceZeroFreeWorkItem;                      //0x18
    volatile LONG ThreadCount;                                              //0x28
    struct _KGATE Gate;                                                     //0x2c
    struct _MI_ZERO_THREAD_CONTEXT* ThreadContext;                          //0x3c
};
/* Used in */
// _MI_PARTITION

