#pragma once
/* ------------------ */

#include <_MI_PAGING_FILE_SPACE_BITMAPS.h>
#include <_RTL_BITMAP.h>

//0x30 bytes (sizeof)
struct _MI_PAGING_FILE_SPACE_BITMAPS
{
    union
    {
        ULONG RefCount;                                                     //0x0
        struct _MI_PAGING_FILE_SPACE_BITMAPS* Anchor;                       //0x0
    };
    struct _RTL_BITMAP AllocationBitmap;                                    //0x8
    struct _RTL_BITMAP ReservationBitmap;                                   //0x18
    struct _RTL_BITMAP* EvictStoreBitmap;                                   //0x28
};
/* Used in */
// _MI_PAGING_FILE_SPACE_BITMAPS
// _MMPAGING_FILE

