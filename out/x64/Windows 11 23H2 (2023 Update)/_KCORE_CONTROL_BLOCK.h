#pragma once
/* ------------------ */

#include <_KPRCB.h>

//0x48 bytes (sizeof)
struct _KCORE_CONTROL_BLOCK
{
    UCHAR ProcessorCount;                                                   //0x0
    UCHAR ScanStartIndex;                                                   //0x1
    UCHAR Spare[6];                                                         //0x2
    struct _KPRCB* Prcbs[8];                                                //0x8
};
/* Used in */
// _KPRCB

