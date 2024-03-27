#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_MMPTE.h>
#include <_WORK_QUEUE_ITEM.h>

//0x48 bytes (sizeof)
struct _MI_PARTITION_ZEROING
{
    struct _KEVENT PageEvent;                                               //0x0
    UCHAR ThreadActive;                                                     //0x18
    LONG ZeroFreePageSlistMinimum;                                          //0x1c
    struct _MMPTE* FirstReservedZeroingPte;                                 //0x20
    struct _WORK_QUEUE_ITEM RebalanceZeroFreeWorkItem;                      //0x28
};
/* Used in */
// _MI_PARTITION

