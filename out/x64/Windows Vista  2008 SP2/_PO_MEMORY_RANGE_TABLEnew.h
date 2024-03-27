#pragma once
/* ------------------ */

#include <_PO_MEMORY_RANGE_TABLE.h>
#include <_PO_MEMORY_RANGE.h>

//0x28 bytes (sizeof)
struct _PO_MEMORY_RANGE_TABLE
{
    struct _PO_MEMORY_RANGE_TABLE* Next;                                    //0x0
    ULONGLONG NextTable;                                                    //0x8
    ULONG EntryCount;                                                       //0x10
    struct _PO_MEMORY_RANGE Range[1];                                       //0x18
};
/* Used in */
// _POP_HIBER_CONTEXT
// _PO_MEMORY_RANGE_TABLE

