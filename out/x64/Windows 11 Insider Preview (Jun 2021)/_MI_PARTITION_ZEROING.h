#pragma once
/* ------------------ */

#include <_WORK_QUEUE_ITEM.h>
#include <_KGATE.h>
#include <_KEVENT.h>

//0x88 bytes (sizeof)
struct _MI_PARTITION_ZEROING
{
    struct _WORK_QUEUE_ITEM RebalanceZeroFreeWorkItem;                      //0x0
    volatile LONG NodeCount;                                                //0x20
    volatile LONG BackgroundZeroingDisabled;                                //0x24
    struct _KGATE LargeBootZeroingComplete;                                 //0x28
    struct _KEVENT ReleaseNodeZeroingThreads;                               //0x40
    struct _KGATE AllZeroingComplete;                                       //0x58
    UCHAR IpiCalibrationFailed;                                             //0x70
    UCHAR ChildGateInitialized;                                             //0x71
    volatile LONG ActiveProcessorsForIpiCalibration;                        //0x74
    volatile LONG NodesReadyForIpiCalibration;                              //0x78
    LONG ZeroFreePageSlistMinimum;                                          //0x7c
    volatile LONG ExistingThreads;                                          //0x80
};
/* Used in */
// _MI_PARTITION

