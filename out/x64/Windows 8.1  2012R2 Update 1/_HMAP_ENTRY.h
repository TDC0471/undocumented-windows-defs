#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _HMAP_ENTRY
{
    ULONGLONG BlockAddress;                                                 //0x0
    ULONGLONG BinAddress;                                                   //0x8
    ULONG MemAlloc;                                                         //0x10
};
/* Used in */
// _HMAP_TABLE

