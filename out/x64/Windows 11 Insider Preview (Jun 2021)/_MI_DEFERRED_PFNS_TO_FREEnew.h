#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x20 bytes (sizeof)
struct _MI_DEFERRED_PFNS_TO_FREE
{
    struct _LIST_ENTRY ListHead;                                            //0x0
    ULONGLONG NumberOfPages;                                                //0x10
    ULONG TbFlushStamp;                                                     //0x18
};
/* Used in */
// _MI_PARTITION_SEGMENTS
// _MI_SYSTEM_NODE_INFORMATION

