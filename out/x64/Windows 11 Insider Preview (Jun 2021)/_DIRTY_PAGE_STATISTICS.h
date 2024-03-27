#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _DIRTY_PAGE_STATISTICS
{
    ULONGLONG DirtyPages;                                                   //0x0
    ULONGLONG DirtyPagesLastScan;                                           //0x8
    ULONG DirtyPagesScheduledLastScan;                                      //0x10
};
/* Used in */
// _CC_EXTERNAL_CACHE_INFO
// _CC_PARTITION
// _LOG_HANDLE_CONTEXT
// _PRIVATE_VOLUME_CACHEMAP

