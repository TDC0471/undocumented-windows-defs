#pragma once
/* ------------------ */

#include <_PROC_PERF_DOMAIN.h>
#include <_PROC_PERF_CONSTRAINT.h>
#include <_PROC_PERF_CHECK.h>
#include <_PROC_PERF_LOAD.h>
#include <_PROC_PERF_HISTORY.h>

//0x28 bytes (sizeof)
struct _PROC_PERF_CHECK_CONTEXT
{
    struct _PROC_PERF_DOMAIN* Domain;                                       //0x0
    struct _PROC_PERF_CONSTRAINT* Constraint;                               //0x4
    struct _PROC_PERF_CHECK* PerfCheck;                                     //0x8
    struct _PROC_PERF_LOAD* Load;                                           //0xc
    struct _PROC_PERF_HISTORY* PerfHistory;                                 //0x10
    ULONG Utility;                                                          //0x14
    ULONG AffinitizedUtility;                                               //0x18
    ULONG MediaUtility;                                                     //0x1c
    USHORT LatestAffinitizedPercent;                                        //0x20
    USHORT AveragePerformancePercent;                                       //0x22
    ULONG RelativePerformance;                                              //0x24
};
/* Used in */
// _PROCESSOR_POWER_STATE
// _PROC_PERF_CONSTRAINT
// _PROC_PERF_DOMAIN

