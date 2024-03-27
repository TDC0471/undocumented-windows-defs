#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_KGATE.h>
#include <_MI_WRITE_CALIBRATION.h>
#include <_MI_ZERO_THREAD_CONTEXT.h>

//0x74 bytes (sizeof)
struct _MI_PARTITION_ZEROING
{
    struct _KEVENT PageEvent;                                               //0x0
    UCHAR ThreadPriorityStatic;                                             //0x10
    UCHAR AdaptiveZeroingEnabled;                                           //0x11
    LONG ZeroFreePageSlistMinimum;                                          //0x14
    struct _WORK_QUEUE_ITEM RebalanceZeroFreeWorkItem;                      //0x18
    volatile LONG NodeCount;                                                //0x28
    struct _KGATE LargeBootZeroingComplete;                                 //0x2c
    struct _MI_WRITE_CALIBRATION WriteCalibration;                          //0x3c
    UCHAR IpiCalibrationFailed;                                             //0x54
    volatile LONG ActiveProcessorsForIpiCalibration;                        //0x58
    volatile LONG NodesReadyForIpiCalibration;                              //0x5c
    struct _KEVENT ReleaseNodeZeroingThreads;                               //0x60
    struct _MI_ZERO_THREAD_CONTEXT* ThreadContext;                          //0x70
};
/* Used in */
// _MI_PARTITION

