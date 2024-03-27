#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_KGATE.h>

//0x60 bytes (sizeof)
struct _MI_PARTITION_ZEROING
{
    struct _KEVENT PageEvent;                                               //0x0
    UCHAR ThreadActive;                                                     //0x18
    LONG ZeroFreePageSlistMinimum;                                          //0x1c
    struct _WORK_QUEUE_ITEM RebalanceZeroFreeWorkItem;                      //0x20
    volatile LONG ThreadCount;                                              //0x40
    struct _KGATE Gate;                                                     //0x48
};
/* Used in */
// _MI_PARTITION

