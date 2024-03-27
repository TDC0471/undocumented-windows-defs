#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x10 bytes (sizeof)
struct _RTL_ATOM_TABLE_REFERENCE
{
    struct _LIST_ENTRY LowBoxList;                                          //0x0
    ULONG LowBoxID;                                                         //0x8
    USHORT ReferenceCount;                                                  //0xc
    USHORT Flags;                                                           //0xe
};
/* Used in */
// _RTL_ATOM_TABLE_ENTRY

