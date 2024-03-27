#pragma once
/* ------------------ */

#include <_PO_MEMORY_RANGE_TABLE.h>
#include <_PO_MEMORY_RANGE.h>

//0x14 bytes (sizeof)
struct _PO_MEMORY_RANGE_TABLE
{
    struct _PO_MEMORY_RANGE_TABLE* Next;                                    //0x0
    ULONG NextTable;                                                        //0x4
    ULONG EntryCount;                                                       //0x8
    struct _PO_MEMORY_RANGE Range[1];                                       //0xc
};
/* Used in */
// _POP_HIBER_CONTEXT
// _PO_MEMORY_RANGE_TABLE

