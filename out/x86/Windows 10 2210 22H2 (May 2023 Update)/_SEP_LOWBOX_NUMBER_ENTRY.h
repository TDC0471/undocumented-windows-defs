#pragma once
/* ------------------ */

#include <_RTL_DYNAMIC_HASH_TABLE_ENTRY.h>

//0x1c bytes (sizeof)
struct _SEP_LOWBOX_NUMBER_ENTRY
{
    struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry;                         //0x0
    LONG ReferenceCount;                                                    //0xc
    VOID* PackageSid;                                                       //0x10
    ULONG LowboxNumber;                                                     //0x14
    VOID* AtomTable;                                                        //0x18
};
/* Used in */
// _TOKEN

