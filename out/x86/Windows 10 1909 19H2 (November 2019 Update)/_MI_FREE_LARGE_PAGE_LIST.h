#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0xc bytes (sizeof)
struct _MI_FREE_LARGE_PAGE_LIST
{
    struct _LIST_ENTRY ListHead;                                            //0x0
    ULONG EntryCount;                                                       //0x8
};
/* Used in */
// _MI_FREE_LARGE_PAGES
// _MI_PARTITION_PAGE_LISTS

