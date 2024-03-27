#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x18 bytes (sizeof)
struct _SHARED_CACHE_MAP_LIST_CURSOR
{
    struct _LIST_ENTRY SharedCacheMapLinks;                                 //0x0
    ULONG Flags;                                                            //0x10
};
