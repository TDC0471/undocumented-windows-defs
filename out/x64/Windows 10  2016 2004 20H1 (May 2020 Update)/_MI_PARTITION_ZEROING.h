#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_KGATE.h>
#include <_MI_WRITE_CALIBRATION.h>
#include <_MI_ZERO_THREAD_CONTEXT.h>

//0xb0 bytes (sizeof)
struct _MI_PARTITION_ZEROING
{
    struct _KEVENT PageEvent;                                               //0x0
    UCHAR ThreadPriorityStatic;                                             //0x18
    UCHAR AdaptiveZeroingEnabled;                                           //0x19
    LONG ZeroFreePageSlistMinimum;                                          //0x1c
    struct _WORK_QUEUE_ITEM RebalanceZeroFreeWorkItem;                      //0x20
    volatile LONG NodeCount;                                                //0x40
    struct _KGATE LargeBootZeroingComplete;                                 //0x48
    struct _MI_WRITE_CALIBRATION WriteCalibration;                          //0x60
    UCHAR IpiCalibrationFailed;                                             //0x80
    volatile LONG ActiveProcessorsForIpiCalibration;                        //0x84
    volatile LONG NodesReadyForIpiCalibration;                              //0x88
    struct _KEVENT ReleaseNodeZeroingThreads;                               //0x90
    struct _MI_ZERO_THREAD_CONTEXT* ThreadContext;                          //0xa8
};
/* Used in */
// _MI_PARTITION

