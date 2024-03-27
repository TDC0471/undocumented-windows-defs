#pragma once
/* ------------------ */

#include <_RTL_DYNAMIC_HASH_TABLE_ENTRY.h>
#include <_SEP_CACHED_HANDLES_ENTRY_DESCRIPTOR.h>

//0x24 bytes (sizeof)
struct _SEP_CACHED_HANDLES_ENTRY
{
    struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry;                         //0x0
    LONG ReferenceCount;                                                    //0xc
    struct _SEP_CACHED_HANDLES_ENTRY_DESCRIPTOR EntryDescriptor;            //0x10
    ULONG HandleCount;                                                      //0x1c
    VOID** Handles;                                                         //0x20
};
/* Used in */
// _TOKEN

