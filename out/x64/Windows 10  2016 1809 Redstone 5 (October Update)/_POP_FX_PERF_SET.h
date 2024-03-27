#pragma once
/* ------------------ */

#include <_PO_FX_COMPONENT_PERF_SET.h>

//0x20 bytes (sizeof)
struct _POP_FX_PERF_SET
{
    struct _PO_FX_COMPONENT_PERF_SET* PerfSet;                              //0x0
    ULONGLONG CurrentPerf;                                                  //0x8
    ULONGLONG CurrentPerfStamp;                                             //0x10
    UCHAR CurrentPerfNominal;                                               //0x18
};
/* Used in */
// _POP_FX_PERF_INFO

