#pragma once
/* ------------------ */

#include <_PROC_PERF_CHECK_SNAP.h>

//0x118 bytes (sizeof)
struct _PROC_PERF_CHECK
{
    ULONGLONG LastActive;                                                   //0x0
    ULONGLONG LastTime;                                                     //0x8
    ULONGLONG LastStall;                                                    //0x10
    struct _PROC_PERF_CHECK_SNAP LastPerfCheckSnap;                         //0x18
    struct _PROC_PERF_CHECK_SNAP CurrentSnap;                               //0x68
    struct _PROC_PERF_CHECK_SNAP LastDeliveredSnap;                         //0xb8
    ULONG LastDeliveredPerformance;                                         //0x108
    ULONG LastDeliveredFrequency;                                           //0x10c
    UCHAR TaggedThreadPercent[2];                                           //0x110
    UCHAR Class0FloorPerfSelection;                                         //0x112
    UCHAR Class1MinimumPerfSelection;                                       //0x113
};
/* Used in */
// _PROCESSOR_POWER_STATE

