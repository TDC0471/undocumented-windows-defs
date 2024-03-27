#pragma once
/* ------------------ */

#include <_RTL_HASH_TABLE.h>
#include <_RTL_HASH_ENTRY.h>
#include <_SINGLE_LIST_ENTRY.h>

//0xc bytes (sizeof)
struct _RTL_HASH_TABLE_ITERATOR
{
    struct _RTL_HASH_TABLE* Hash;                                           //0x0
    struct _RTL_HASH_ENTRY* HashEntry;                                      //0x4
    struct _SINGLE_LIST_ENTRY* Bucket;                                      //0x8
};
