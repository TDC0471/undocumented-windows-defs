#pragma once
/* ------------------ */

#include <_RTL_CSPARSE_BITMAP.h>

//0x50 bytes (sizeof)
struct _RTLP_HP_ALLOC_TRACKER
{
    ULONGLONG BaseAddress;                                                  //0x0
    union
    {
        struct _RTL_CSPARSE_BITMAP AllocTrackerBitmap;                      //0x8
        UCHAR AllocTrackerBitmapBuffer[72];                                 //0x8
    };
};
/* Used in */
// _RTLP_HP_HEAP_MANAGER

