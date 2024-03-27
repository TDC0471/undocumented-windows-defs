#pragma once
/* ------------------ */

#include <_EX_RUNDOWN_REF.h>

//0x14 bytes (sizeof)
struct _HMAP_ENTRY
{
    ULONG BlockOffset;                                                      //0x0
    ULONG PermanentBinAddress;                                              //0x4
    ULONG TemporaryBinAddress;                                              //0x8
    struct _EX_RUNDOWN_REF TemporaryBinRundown;                             //0xc
    ULONG MemAlloc;                                                         //0x10
};
/* Used in */
// _HMAP_TABLE

