#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _CM_KEY_VALUE
{
    USHORT Signature;                                                       //0x0
    USHORT NameLength;                                                      //0x2
    ULONG DataLength;                                                       //0x4
    ULONG Data;                                                             //0x8
    ULONG Type;                                                             //0xc
    USHORT Flags;                                                           //0x10
    USHORT Spare;                                                           //0x12
    WCHAR Name[1];                                                          //0x14
};
/* Used in */
// _u

