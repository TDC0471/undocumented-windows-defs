#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>

//0x8 bytes (sizeof)
struct _MMPAGING_FILE_FREE_ENTRY
{
    struct _SINGLE_LIST_ENTRY ListEntry;                                    //0x0
    ULONG FreeBit;                                                          //0x4
};
