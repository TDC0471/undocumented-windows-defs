#pragma once
/* ------------------ */

#include <_RTL_ATOM_TABLE_ENTRY.h>
#include <_RTL_ATOM_TABLE_REFERENCE.h>

//0x30 bytes (sizeof)
struct _RTL_ATOM_TABLE_ENTRY
{
    struct _RTL_ATOM_TABLE_ENTRY* HashLink;                                 //0x0
    USHORT HandleIndex;                                                     //0x8
    USHORT Atom;                                                            //0xa
    struct _RTL_ATOM_TABLE_REFERENCE Reference;                             //0x10
    UCHAR NameLength;                                                       //0x28
    WCHAR Name[1];                                                          //0x2a
};
/* Used in */
// _RTL_ATOM_TABLE
// _RTL_ATOM_TABLE_ENTRY

