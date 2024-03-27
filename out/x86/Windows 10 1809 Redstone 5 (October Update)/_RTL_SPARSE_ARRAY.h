#pragma once
/* ------------------ */

#include <_RTL_CSPARSE_BITMAP.h>

//0x28 bytes (sizeof)
struct _RTL_SPARSE_ARRAY
{
    struct _RTL_CSPARSE_BITMAP Bitmap;                                      //0x0
    ULONG ElementCount;                                                     //0x20
    ULONG ElementSizeShift;                                                 //0x24
};
/* Used in */
// _HEAP_VAMGR_VASPACE

