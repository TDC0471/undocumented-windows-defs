#pragma once
/* ------------------ */

#include <_MI_PAGING_FILE_SPACE_BITMAPS.h>
#include <_RTL_BITMAP.h>

//0x14 bytes (sizeof)
struct _MI_PAGING_FILE_SPACE_BITMAPS
{
    union
    {
        ULONG RefCount;                                                     //0x0
        struct _MI_PAGING_FILE_SPACE_BITMAPS* Anchor;                       //0x0
    };
    struct _RTL_BITMAP AllocationBitmap;                                    //0x4
    union
    {
        struct _RTL_BITMAP ReservationBitmap;                               //0xc
        struct _RTL_BITMAP EvictedBitmap;                                   //0xc
    };
};
/* Used in */
// _MI_PAGING_FILE_SPACE_BITMAPS
// _MMPAGING_FILE

