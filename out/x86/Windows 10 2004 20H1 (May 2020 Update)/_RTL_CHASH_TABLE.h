#pragma once
/* ------------------ */

#include <_RTL_CHASH_ENTRY.h>

//0x10 bytes (sizeof)
struct _RTL_CHASH_TABLE
{
    struct _RTL_CHASH_ENTRY* Table;                                         //0x0
    ULONG EntrySizeShift;                                                   //0x4
    ULONG EntryMax;                                                         //0x8
    ULONG EntryCount;                                                       //0xc
};
