#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _HMAP_ENTRY
{
    ULONG BlockAddress;                                                     //0x0
    ULONG BinAddress;                                                       //0x4
    ULONG MemAlloc;                                                         //0x8
};
/* Used in */
// _HMAP_TABLE

