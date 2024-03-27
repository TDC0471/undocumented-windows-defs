#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_KGATE.h>

//0x3c bytes (sizeof)
struct _MI_PARTITION_ZEROING
{
    struct _KEVENT PageEvent;                                               //0x0
    UCHAR ThreadActive;                                                     //0x10
    LONG ZeroFreePageSlistMinimum;                                          //0x14
    struct _WORK_QUEUE_ITEM RebalanceZeroFreeWorkItem;                      //0x18
    volatile LONG ThreadCount;                                              //0x28
    struct _KGATE Gate;                                                     //0x2c
};
/* Used in */
// _MI_PARTITION

