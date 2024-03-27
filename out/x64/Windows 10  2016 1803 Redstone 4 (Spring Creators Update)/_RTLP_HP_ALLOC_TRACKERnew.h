#pragma once
/* ------------------ */

#include <_RTL_CSPARSE_BITMAP.h>

//0x48 bytes (sizeof)
struct _RTLP_HP_ALLOC_TRACKER
{
    struct _RTL_CSPARSE_BITMAP AllocTrackerBitmap;                          //0x0
    ULONGLONG BaseAddress;                                                  //0x40
};
/* Used in */
// _RTLP_HP_HEAP_MANAGER

