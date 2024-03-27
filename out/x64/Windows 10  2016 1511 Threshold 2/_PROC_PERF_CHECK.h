#pragma once
/* ------------------ */

#include <_PROC_PERF_CHECK_SNAP.h>

//0xc0 bytes (sizeof)
struct _PROC_PERF_CHECK
{
    ULONGLONG LastActive;                                                   //0x0
    ULONGLONG LastTime;                                                     //0x8
    ULONGLONG LastStall;                                                    //0x10
    struct _PROC_PERF_CHECK_SNAP Snap;                                      //0x18
    struct _PROC_PERF_CHECK_SNAP TempSnap;                                  //0x68
    UCHAR TaggedThreadPercent[2];                                           //0xb8
    UCHAR Class0FloorPerfSelection;                                         //0xba
    UCHAR Class1MinimumPerfSelection;                                       //0xbb
};
/* Used in */
// _PROCESSOR_POWER_STATE

