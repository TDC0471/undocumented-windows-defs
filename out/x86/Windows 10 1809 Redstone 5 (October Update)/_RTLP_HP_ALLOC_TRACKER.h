#pragma once
/* ------------------ */

#include <_RTL_CSPARSE_BITMAP.h>

//0x24 bytes (sizeof)
struct _RTLP_HP_ALLOC_TRACKER
{
    struct _RTL_CSPARSE_BITMAP AllocTrackerBitmap;                          //0x0
    ULONG BaseAddress;                                                      //0x20
};
/* Used in */
// _RTLP_HP_HEAP_MANAGER

