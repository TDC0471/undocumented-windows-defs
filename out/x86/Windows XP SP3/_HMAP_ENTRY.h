#pragma once
/* ------------------ */

#include <_CM_VIEW_OF_FILE.h>

//0x10 bytes (sizeof)
struct _HMAP_ENTRY
{
    ULONG BlockAddress;                                                     //0x0
    ULONG BinAddress;                                                       //0x4
    struct _CM_VIEW_OF_FILE* CmView;                                        //0x8
    ULONG MemAlloc;                                                         //0xc
};
/* Used in */
// _HMAP_TABLE

