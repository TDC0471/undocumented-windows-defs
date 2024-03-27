#pragma once
/* ------------------ */

#include <_RTL_CSPARSE_BITMAP.h>

//0x2c bytes (sizeof)
struct _RTLP_HP_ALLOC_TRACKER
{
    ULONG BaseAddress;                                                      //0x0
    union
    {
        struct _RTL_CSPARSE_BITMAP AllocTrackerBitmap;                      //0x4
        UCHAR AllocTrackerBitmapBuffer[40];                                 //0x4
    };
};
/* Used in */
// _RTLP_HP_HEAP_MANAGER

