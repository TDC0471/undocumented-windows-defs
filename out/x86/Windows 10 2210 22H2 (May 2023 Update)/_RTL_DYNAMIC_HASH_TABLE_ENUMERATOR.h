#pragma once
/* ------------------ */

#include <_RTL_DYNAMIC_HASH_TABLE_ENTRY.h>
#include <_LIST_ENTRY.h>

//0x14 bytes (sizeof)
struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR
{
    union
    {
        struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry;                     //0x0
        struct _LIST_ENTRY* CurEntry;                                       //0x0
    };
    struct _LIST_ENTRY* ChainHead;                                          //0xc
    ULONG BucketIndex;                                                      //0x10
};
