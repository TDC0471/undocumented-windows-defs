#pragma once
/* ------------------ */

#include <_PROC_PERF_DOMAIN.h>
#include <_PROC_PERF_CONSTRAINT.h>
#include <_PROC_PERF_CHECK.h>
#include <_PROC_PERF_LOAD.h>
#include <_PROC_PERF_HISTORY.h>

//0x40 bytes (sizeof)
struct _PROC_PERF_CHECK_CONTEXT
{
    struct _PROC_PERF_DOMAIN* Domain;                                       //0x0
    struct _PROC_PERF_CONSTRAINT* Constraint;                               //0x8
    struct _PROC_PERF_CHECK* PerfCheck;                                     //0x10
    struct _PROC_PERF_LOAD* Load;                                           //0x18
    struct _PROC_PERF_HISTORY* PerfHistory;                                 //0x20
    ULONG Utility;                                                          //0x28
    ULONG AffinitizedUtility;                                               //0x2c
    ULONG MediaUtility;                                                     //0x30
    USHORT LatestAffinitizedPercent;                                        //0x34
    USHORT AveragePerformancePercent;                                       //0x36
    ULONG RelativePerformance;                                              //0x38
    UCHAR NtProcessor;                                                      //0x3c
};
/* Used in */
// _PROCESSOR_POWER_STATE
// _PROC_PERF_CONSTRAINT
// _PROC_PERF_DOMAIN

