#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_MMPTE.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_KGATE.h>

//0x40 bytes (sizeof)
struct _MI_PARTITION_ZEROING
{
    struct _KEVENT PageEvent;                                               //0x0
    UCHAR ThreadActive;                                                     //0x10
    LONG ZeroFreePageSlistMinimum;                                          //0x14
    struct _MMPTE* FirstReservedZeroingPte;                                 //0x18
    struct _WORK_QUEUE_ITEM RebalanceZeroFreeWorkItem;                      //0x1c
    volatile LONG ThreadCount;                                              //0x2c
    struct _KGATE Gate;                                                     //0x30
};
/* Used in */
// _MI_PARTITION

