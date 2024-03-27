#pragma once
/* ------------------ */


//0x20 bytes (sizeof)
struct _MI_IO_CACHE_STATS
{
    ULONG UnusedBlocks;                                                     //0x0
    ULONG ActiveCacheMatch;                                                 //0x4
    ULONG ActiveCacheOverride;                                              //0x8
    ULONG UnmappedCacheFlush;                                               //0xc
    ULONG UnmappedCacheMatch;                                               //0x10
    ULONG UnmappedCacheConflict;                                            //0x14
    ULONG PermanentIoAttributeConflict;                                     //0x18
    ULONG PermanentIoNodeConflict;                                          //0x1c
};
/* Used in */
// _MI_IO_PAGE_STATE

