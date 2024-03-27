#pragma once
/* ------------------ */

#include <_RTL_CSPARSE_BITMAP.h>

//0x2c bytes (sizeof)
struct _RTL_SPARSE_ARRAY
{
    ULONG ElementCount;                                                     //0x0
    ULONG ElementSizeShift;                                                 //0x4
    struct _RTL_CSPARSE_BITMAP Bitmap;                                      //0x8
};
/* Used in */
// _HEAP_VAMGR_VASPACE

