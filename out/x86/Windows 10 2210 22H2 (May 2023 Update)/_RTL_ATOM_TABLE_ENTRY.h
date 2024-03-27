#pragma once
/* ------------------ */

#include <_RTL_ATOM_TABLE_ENTRY.h>
#include <_RTL_ATOM_TABLE_REFERENCE.h>

//0x1c bytes (sizeof)
struct _RTL_ATOM_TABLE_ENTRY
{
    struct _RTL_ATOM_TABLE_ENTRY* HashLink;                                 //0x0
    USHORT HandleIndex;                                                     //0x4
    USHORT Atom;                                                            //0x6
    struct _RTL_ATOM_TABLE_REFERENCE Reference;                             //0x8
    UCHAR NameLength;                                                       //0x18
    WCHAR Name[1];                                                          //0x1a
};
/* Used in */
// _RTL_ATOM_TABLE
// _RTL_ATOM_TABLE_ENTRY

