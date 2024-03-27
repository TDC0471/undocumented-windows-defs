#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_MMPTE.h>
#include <_WORK_QUEUE_ITEM.h>

//0x2c bytes (sizeof)
struct _MI_PARTITION_ZEROING
{
    struct _KEVENT PageEvent;                                               //0x0
    UCHAR ThreadActive;                                                     //0x10
    LONG ZeroFreePageSlistMinimum;                                          //0x14
    struct _MMPTE* FirstReservedZeroingPte;                                 //0x18
    struct _WORK_QUEUE_ITEM RebalanceZeroFreeWorkItem;                      //0x1c
};
/* Used in */
// _MI_PARTITION

