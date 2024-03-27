#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0xc bytes (sizeof)
struct _RTL_DYNAMIC_HASH_TABLE_ENTRY
{
    struct _LIST_ENTRY Linkage;                                             //0x0
    ULONG Signature;                                                        //0x8
};
/* Used in */
// _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR
// _SEP_LOWBOX_HANDLES_ENTRY
// _SEP_LOWBOX_NUMBER_ENTRY

