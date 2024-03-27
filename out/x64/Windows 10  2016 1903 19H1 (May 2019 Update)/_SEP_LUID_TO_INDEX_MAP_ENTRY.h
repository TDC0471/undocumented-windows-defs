#pragma once
/* ------------------ */

#include <_RTL_DYNAMIC_HASH_TABLE_ENTRY.h>

//0x38 bytes (sizeof)
struct _SEP_LUID_TO_INDEX_MAP_ENTRY
{
    struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry;                         //0x0
    LONGLONG ReferenceCount;                                                //0x18
    ULONGLONG Luid;                                                         //0x20
    ULONGLONG IndexIntoGlobalSingletonTable;                                //0x28
    UCHAR MarkedForDeletion;                                                //0x30
};
/* Used in */
// _TOKEN

