#pragma once
/* ------------------ */

#include <_RTL_DYNAMIC_HASH_TABLE_ENTRY.h>

//0x38 bytes (sizeof)
struct _SEP_LOWBOX_HANDLES_ENTRY
{
    struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry;                         //0x0
    ULONG ReferenceCount;                                                   //0x18
    VOID* PackageSid;                                                       //0x20
    ULONG HandleCount;                                                      //0x28
    VOID** Handles;                                                         //0x30
};
/* Used in */
// _TOKEN

