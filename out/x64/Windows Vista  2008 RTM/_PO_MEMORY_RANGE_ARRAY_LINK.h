#pragma once
/* ------------------ */

#include <_PO_MEMORY_RANGE_ARRAY.h>

//0x18 bytes (sizeof)
struct _PO_MEMORY_RANGE_ARRAY_LINK
{
    struct _PO_MEMORY_RANGE_ARRAY* Next;                                    //0x0
    ULONGLONG NextTable;                                                    //0x8
    ULONG CheckSum;                                                         //0x10
    ULONG EntryCount;                                                       //0x14
};
/* Used in */
// _PO_MEMORY_RANGE_ARRAY

