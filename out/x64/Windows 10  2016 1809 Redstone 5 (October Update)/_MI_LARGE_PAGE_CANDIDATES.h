#pragma once
/* ------------------ */


//0x208 bytes (sizeof)
struct _MI_LARGE_PAGE_CANDIDATES
{
    USHORT Hand;                                                            //0x0
    USHORT ActiveEntryCount;                                                //0x2
    UCHAR Overflowed;                                                       //0x4
    ULONGLONG PageFrames[64];                                               //0x8
};
/* Used in */
// _MI_PARTITION_PAGE_LISTS

