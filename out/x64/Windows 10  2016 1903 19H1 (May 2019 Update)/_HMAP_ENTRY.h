#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _HMAP_ENTRY
{
    ULONGLONG BlockOffset;                                                  //0x0
    ULONGLONG PermanentBinAddress;                                          //0x8
    ULONG MemAlloc;                                                         //0x10
};
/* Used in */
// _HMAP_TABLE

