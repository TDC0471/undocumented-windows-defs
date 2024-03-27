#pragma once
/* ------------------ */

#include <_PROC_PERF_CHECK_SNAP.h>
#include <_PROC_PERF_CHECK_CYCLE_SNAP.h>

//0x578 bytes (sizeof)
struct _PROC_PERF_CHECK
{
    ULONGLONG LastActive;                                                   //0x0
    ULONGLONG LastTime;                                                     //0x8
    ULONGLONG LastStall;                                                    //0x10
    ULONG LastResponsivenessEvents;                                         //0x18
    struct _PROC_PERF_CHECK_SNAP LastPerfCheckSnap;                         //0x20
    struct _PROC_PERF_CHECK_CYCLE_SNAP* LastPerfCheckCycleSnap;             //0x58
    struct _PROC_PERF_CHECK_SNAP CurrentSnap;                               //0x60
    struct _PROC_PERF_CHECK_CYCLE_SNAP* CurrentCycleSnap;                   //0x98
    struct _PROC_PERF_CHECK_SNAP LastDeliveredSnap;                         //0xa0
    struct _PROC_PERF_CHECK_CYCLE_SNAP* LastDeliveredCycleSnap;             //0xd8
    ULONG LastDeliveredPerformance;                                         //0xe0
    ULONG LastDeliveredFrequency;                                           //0xe4
    UCHAR TaggedThreadPercent[4];                                           //0xe8
    UCHAR ImportantPercent;                                                 //0xec
    UCHAR IdealPercent;                                                     //0xed
    UCHAR Class0FloorPerfSelection;                                         //0xee
    UCHAR Class1MinimumPerfSelection;                                       //0xef
    ULONG CurrentResponsivenessEvents;                                      //0xf0
    ULONGLONG CyclesByFreqBand[3][48];                                      //0xf8
};
/* Used in */
// _PROC_PERF_CHECK_CONTEXT

