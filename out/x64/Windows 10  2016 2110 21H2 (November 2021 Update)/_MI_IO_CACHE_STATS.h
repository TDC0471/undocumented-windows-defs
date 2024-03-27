#pragma once
/* ------------------ */


//0x28 bytes (sizeof)
struct _MI_IO_CACHE_STATS
{
    ULONGLONG UnusedBlocks;                                                 //0x0
    ULONG ActiveCacheMatch;                                                 //0x8
    ULONG ActiveCacheOverride;                                              //0xc
    ULONG UnmappedCacheFlush;                                               //0x10
    ULONG UnmappedCacheMatch;                                               //0x14
    ULONG UnmappedCacheConflict;                                            //0x18
    ULONG PermanentIoAttributeConflict;                                     //0x1c
    ULONG PermanentIoNodeConflict;                                          //0x20
};
/* Used in */
// _MI_IO_PAGE_STATE

