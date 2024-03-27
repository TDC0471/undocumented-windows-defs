#pragma once
/* ------------------ */

#include <_RTL_DYNAMIC_HASH_TABLE_ENTRY.h>
#include <_SEP_CACHED_HANDLES_ENTRY_DESCRIPTOR.h>

//0x48 bytes (sizeof)
struct _SEP_CACHED_HANDLES_ENTRY
{
    struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry;                         //0x0
    LONGLONG ReferenceCount;                                                //0x18
    struct _SEP_CACHED_HANDLES_ENTRY_DESCRIPTOR EntryDescriptor;            //0x20
    ULONG HandleCount;                                                      //0x38
    VOID** Handles;                                                         //0x40
};
/* Used in */
// _TOKEN

