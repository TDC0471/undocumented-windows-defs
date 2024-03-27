#pragma once
/* ------------------ */

#include <_EX_RUNDOWN_REF.h>

//0x28 bytes (sizeof)
struct _HMAP_ENTRY
{
    ULONGLONG BlockOffset;                                                  //0x0
    ULONGLONG PermanentBinAddress;                                          //0x8
    ULONGLONG TemporaryBinAddress;                                          //0x10
    struct _EX_RUNDOWN_REF TemporaryBinRundown;                             //0x18
    ULONG MemAlloc;                                                         //0x20
};
/* Used in */
// _HMAP_TABLE

