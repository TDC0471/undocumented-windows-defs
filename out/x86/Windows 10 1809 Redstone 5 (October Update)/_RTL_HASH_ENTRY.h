#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>

//0x8 bytes (sizeof)
struct _RTL_HASH_ENTRY
{
    struct _SINGLE_LIST_ENTRY BucketLink;                                   //0x0
    ULONG Key;                                                              //0x4
};
/* Used in */
// _RTL_HASH_TABLE_ITERATOR

