#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _HMAP_ENTRY
{
    ULONG BlockOffset;                                                      //0x0
    ULONG PermanentBinAddress;                                              //0x4
    ULONG MemAlloc;                                                         //0x8
};
/* Used in */
// _HMAP_TABLE

