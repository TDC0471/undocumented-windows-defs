#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x18 bytes (sizeof)
struct _RTL_ATOM_TABLE_REFERENCE
{
    struct _LIST_ENTRY LowBoxList;                                          //0x0
    ULONG LowBoxID;                                                         //0x10
    USHORT ReferenceCount;                                                  //0x14
    USHORT Flags;                                                           //0x16
};
/* Used in */
// _RTL_ATOM_TABLE_ENTRY

