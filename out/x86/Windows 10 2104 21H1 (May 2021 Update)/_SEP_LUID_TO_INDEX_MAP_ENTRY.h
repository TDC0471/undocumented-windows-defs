#pragma once
/* ------------------ */

#include <_RTL_DYNAMIC_HASH_TABLE_ENTRY.h>

//0x28 bytes (sizeof)
struct _SEP_LUID_TO_INDEX_MAP_ENTRY
{
    struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry;                         //0x0
    LONG ReferenceCount;                                                    //0xc
    ULONGLONG Luid;                                                         //0x10
    ULONGLONG IndexIntoGlobalSingletonTable;                                //0x18
    UCHAR MarkedForDeletion;                                                //0x20
};
/* Used in */
// _TOKEN

