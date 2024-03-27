#pragma once
/* ------------------ */

#include <_TIMELINE_BITMAP.h>

//0xc8 bytes (sizeof)
struct _THREAD_ENERGY_VALUES
{
    ULONGLONG Cycles[4][2];                                                 //0x0
    ULONGLONG AttributedCycles[4][2];                                       //0x40
    ULONGLONG WorkOnBehalfCycles[4][2];                                     //0x80
    union _TIMELINE_BITMAP CpuTimeline;                                     //0xc0
};
/* Used in */
// _ETHREAD

