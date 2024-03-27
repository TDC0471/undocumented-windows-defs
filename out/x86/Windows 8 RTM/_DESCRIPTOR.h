#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _DESCRIPTOR
{
    USHORT Pad;                                                             //0x0
    USHORT Limit;                                                           //0x2
    ULONG Base;                                                             //0x4
};
/* Used in */
// _KSPECIAL_REGISTERS

