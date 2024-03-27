#pragma once
/* ------------------ */

#include <_RTL_CHASH_ENTRY.h>

//0x18 bytes (sizeof)
struct _RTL_CHASH_TABLE
{
    struct _RTL_CHASH_ENTRY* Table;                                         //0x0
    ULONG EntrySizeShift;                                                   //0x8
    ULONG EntryMax;                                                         //0xc
    ULONG EntryCount;                                                       //0x10
};
