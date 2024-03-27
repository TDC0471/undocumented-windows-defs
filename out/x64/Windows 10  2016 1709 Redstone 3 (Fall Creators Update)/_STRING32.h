#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _STRING32
{
    USHORT Length;                                                          //0x0
    USHORT MaximumLength;                                                   //0x2
    ULONG Buffer;                                                           //0x4
};
/* Used in */
// _PEB32
// _TEB32

