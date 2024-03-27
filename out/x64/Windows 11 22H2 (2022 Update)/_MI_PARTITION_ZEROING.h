#pragma once
/* ------------------ */

#include <_WORK_QUEUE_ITEM.h>
#include <_KEVENT.h>

//0x48 bytes (sizeof)
struct _MI_PARTITION_ZEROING
{
    struct _WORK_QUEUE_ITEM RebalanceZeroFreeWorkItem;                      //0x0
    volatile LONG BackgroundZeroingDisabled;                                //0x20
    volatile LONG BootEnginesCalibrating;                                   //0x24
    struct _KEVENT BootEnginesCalibrationWaiters;                           //0x28
    LONG ZeroFreePageSlistMinimum;                                          //0x40
};
/* Used in */
// _MI_PARTITION

