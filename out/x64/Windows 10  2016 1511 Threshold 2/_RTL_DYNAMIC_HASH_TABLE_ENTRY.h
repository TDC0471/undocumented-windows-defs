#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x18 bytes (sizeof)
struct _RTL_DYNAMIC_HASH_TABLE_ENTRY
{
    struct _LIST_ENTRY Linkage;                                             //0x0
    ULONGLONG Signature;                                                    //0x10
};
/* Used in */
// _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR
// _SEP_LOWBOX_HANDLES_ENTRY
// _SEP_LOWBOX_NUMBER_ENTRY
// _SEP_LUID_TO_INDEX_MAP_ENTRY

