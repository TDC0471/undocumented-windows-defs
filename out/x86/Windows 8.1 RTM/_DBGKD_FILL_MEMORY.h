#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _DBGKD_FILL_MEMORY
{
    ULONGLONG Address;                                                      //0x0
    ULONG Length;                                                           //0x8
    USHORT Flags;                                                           //0xc
    USHORT PatternLength;                                                   //0xe
};
/* Used in */
// _DBGKD_MANIPULATE_STATE64

