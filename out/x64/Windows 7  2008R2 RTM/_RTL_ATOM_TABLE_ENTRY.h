#pragma once
/* ------------------ */

#include <_RTL_ATOM_TABLE_ENTRY.h>

//0x18 bytes (sizeof)
struct _RTL_ATOM_TABLE_ENTRY
{
    struct _RTL_ATOM_TABLE_ENTRY* HashLink;                                 //0x0
    USHORT HandleIndex;                                                     //0x8
    USHORT Atom;                                                            //0xa
    USHORT ReferenceCount;                                                  //0xc
    UCHAR Flags;                                                            //0xe
    UCHAR NameLength;                                                       //0xf
    WCHAR Name[1];                                                          //0x10
};
/* Used in */
// _RTL_ATOM_TABLE
// _RTL_ATOM_TABLE_ENTRY

