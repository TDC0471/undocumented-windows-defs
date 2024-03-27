#pragma once
/* ------------------ */

#include <_PROC_PERF_CHECK_SNAP.h>

//0x138 bytes (sizeof)
struct _PROC_PERF_CHECK
{
    ULONGLONG LastActive;                                                   //0x0
    ULONGLONG LastTime;                                                     //0x8
    ULONGLONG LastStall;                                                    //0x10
    ULONG LastResponsivenessEvents;                                         //0x18
    struct _PROC_PERF_CHECK_SNAP LastPerfCheckSnap;                         //0x20
    struct _PROC_PERF_CHECK_SNAP CurrentSnap;                               //0x78
    struct _PROC_PERF_CHECK_SNAP LastDeliveredSnap;                         //0xd0
    ULONG LastDeliveredPerformance;                                         //0x128
    ULONG LastDeliveredFrequency;                                           //0x12c
    UCHAR TaggedThreadPercent[2];                                           //0x130
    UCHAR Class0FloorPerfSelection;                                         //0x132
    UCHAR Class1MinimumPerfSelection;                                       //0x133
    ULONG CurrentResponsivenessEvents;                                      //0x134
};
/* Used in */
// _PROCESSOR_POWER_STATE

