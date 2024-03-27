#pragma once
/* ------------------ */

#include <_PO_MEMORY_RANGE_ARRAY.h>

//0x10 bytes (sizeof)
struct _PO_MEMORY_RANGE_ARRAY_LINK
{
    struct _PO_MEMORY_RANGE_ARRAY* Next;                                    //0x0
    ULONG NextTable;                                                        //0x4
    ULONG CheckSum;                                                         //0x8
    ULONG EntryCount;                                                       //0xc
};
/* Used in */
// _PO_MEMORY_RANGE_ARRAY

