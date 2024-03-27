#pragma once
/* ------------------ */

#include <_PROC_PERF_CHECK_SNAP.h>

//0x158 bytes (sizeof)
struct _PROC_PERF_CHECK
{
    ULONGLONG LastActive;                                                   //0x0
    ULONGLONG LastTime;                                                     //0x8
    ULONGLONG LastStall;                                                    //0x10
    ULONG LastResponsivenessEvents;                                         //0x18
    struct _PROC_PERF_CHECK_SNAP LastPerfCheckSnap;                         //0x20
    struct _PROC_PERF_CHECK_SNAP CurrentSnap;                               //0x80
    struct _PROC_PERF_CHECK_SNAP LastDeliveredSnap;                         //0xe0
    ULONG LastDeliveredPerformance;                                         //0x140
    ULONG LastDeliveredFrequency;                                           //0x144
    UCHAR TaggedThreadPercent[3];                                           //0x148
    UCHAR Class0FloorPerfSelection;                                         //0x14b
    UCHAR Class1MinimumPerfSelection;                                       //0x14c
    ULONG CurrentResponsivenessEvents;                                      //0x150
};
/* Used in */
// _PROC_PERF_CHECK_CONTEXT

