#pragma once
/* ------------------ */

#include <_RTL_ATOM_TABLE_ENTRY.h>

//0x10 bytes (sizeof)
struct _RTL_ATOM_TABLE_ENTRY
{
    struct _RTL_ATOM_TABLE_ENTRY* HashLink;                                 //0x0
    USHORT HandleIndex;                                                     //0x4
    USHORT Atom;                                                            //0x6
    USHORT ReferenceCount;                                                  //0x8
    UCHAR Flags;                                                            //0xa
    UCHAR NameLength;                                                       //0xb
    WCHAR Name[1];                                                          //0xc
};
/* Used in */
// _RTL_ATOM_TABLE
// _RTL_ATOM_TABLE_ENTRY

