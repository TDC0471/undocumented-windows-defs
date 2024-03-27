#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>

//0x10 bytes (sizeof)
struct _RTL_HASH_TABLE
{
    ULONG EntryCount;                                                       //0x0
    ULONG MaskBitCount:5;                                                   //0x4
    ULONG BucketCount:27;                                                   //0x4
    struct _SINGLE_LIST_ENTRY* Buckets;                                     //0x8
};
/* Used in */
// _ETW_FILTER_EVENT_NAME_DATA
// _RTL_HASH_TABLE_ITERATOR

