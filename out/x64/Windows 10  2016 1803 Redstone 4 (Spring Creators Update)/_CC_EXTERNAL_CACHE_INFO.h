#pragma once
/* ------------------ */

#include <_DIRTY_PAGE_STATISTICS.h>
#include <_LIST_ENTRY.h>

//0x30 bytes (sizeof)
struct _CC_EXTERNAL_CACHE_INFO
{
    VOID (*Callback)(VOID* arg1, ULONGLONG arg2, ULONG arg3);               //0x0
    struct _DIRTY_PAGE_STATISTICS DirtyPageStatistics;                      //0x8
    struct _LIST_ENTRY Links;                                               //0x20
};
