#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _DIRTY_PAGE_STATISTICS
{
    ULONG DirtyPages;                                                       //0x0
    ULONG DirtyPagesLastScan;                                               //0x4
    ULONG DirtyPagesScheduledLastScan;                                      //0x8
};
/* Used in */
// _CC_EXTERNAL_CACHE_INFO
// _CC_PARTITION
// _LOG_HANDLE_CONTEXT

