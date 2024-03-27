#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x10 bytes (sizeof)
struct _PAE_PAGEINFO
{
    struct _LIST_ENTRY ListHead;                                            //0x0
    ULONG PageFrameNumber;                                                  //0x8
    ULONG EntriesInUse;                                                     //0xc
};
/* Used in */
// _PAE_ENTRY

