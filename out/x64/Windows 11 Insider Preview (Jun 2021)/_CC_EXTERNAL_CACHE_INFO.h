#pragma once
/* ------------------ */

#include <_DIRTY_PAGE_STATISTICS.h>
#include <_LIST_ENTRY.h>
#include <_CC_PARTITION.h>
#include <_PRIVATE_VOLUME_CACHEMAP.h>

//0x40 bytes (sizeof)
struct _CC_EXTERNAL_CACHE_INFO
{
    VOID (*Callback)(VOID* arg1, ULONGLONG arg2, ULONG arg3);               //0x0
    struct _DIRTY_PAGE_STATISTICS DirtyPageStatistics;                      //0x8
    struct _LIST_ENTRY Links;                                               //0x20
    struct _CC_PARTITION* Partition;                                        //0x30
    struct _PRIVATE_VOLUME_CACHEMAP* PrivateVolumeCacheMap;                 //0x38
};
