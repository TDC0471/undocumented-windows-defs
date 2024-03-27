#pragma once
/* ------------------ */

#include <_CM_VIEW_OF_FILE.h>

//0x20 bytes (sizeof)
struct _HMAP_ENTRY
{
    ULONGLONG BlockAddress;                                                 //0x0
    ULONGLONG BinAddress;                                                   //0x8
    struct _CM_VIEW_OF_FILE* CmView;                                        //0x10
    ULONG MemAlloc;                                                         //0x18
};
/* Used in */
// _HMAP_TABLE

