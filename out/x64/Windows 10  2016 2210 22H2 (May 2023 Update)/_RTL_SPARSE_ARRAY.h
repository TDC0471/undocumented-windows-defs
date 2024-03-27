#pragma once
/* ------------------ */

#include <_RTL_CSPARSE_BITMAP.h>

//0x50 bytes (sizeof)
struct _RTL_SPARSE_ARRAY
{
    ULONGLONG ElementCount;                                                 //0x0
    ULONG ElementSizeShift;                                                 //0x8
    struct _RTL_CSPARSE_BITMAP Bitmap;                                      //0x10
};
/* Used in */
// _HEAP_VAMGR_VASPACE

