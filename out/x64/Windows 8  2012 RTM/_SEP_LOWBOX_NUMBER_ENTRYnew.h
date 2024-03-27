#pragma once
/* ------------------ */

#include <_RTL_DYNAMIC_HASH_TABLE_ENTRY.h>

//0x38 bytes (sizeof)
struct _SEP_LOWBOX_NUMBER_ENTRY
{
    struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry;                         //0x0
    ULONG ReferenceCount;                                                   //0x18
    VOID* PackageSid;                                                       //0x20
    ULONG LowboxNumber;                                                     //0x28
    VOID* AtomTable;                                                        //0x30
};
/* Used in */
// _TOKEN

