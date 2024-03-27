#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _MI_IO_CACHE_STATS
{
    ULONG UnmappedCacheFlush;                                               //0x0
    ULONG UnmappedCacheConflict;                                            //0x4
    ULONG PermanentIoAttributeConflict;                                     //0x8
    ULONG PermanentIoNodeConflict;                                          //0xc
};
/* Used in */
// _MI_IO_PAGE_STATE

