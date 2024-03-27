#pragma once
/* ------------------ */

#include <_RTL_CSPARSE_BITMAP.h>

//0x50 bytes (sizeof)
struct _RTL_SPARSE_ARRAY
{
    struct _RTL_CSPARSE_BITMAP Bitmap;                                      //0x0
    ULONGLONG ElementCount;                                                 //0x40
    ULONG ElementSizeShift;                                                 //0x48
};
/* Used in */
// _HEAP_VAMGR_VASPACE

