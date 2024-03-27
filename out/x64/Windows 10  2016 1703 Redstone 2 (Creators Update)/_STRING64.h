#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _STRING64
{
    USHORT Length;                                                          //0x0
    USHORT MaximumLength;                                                   //0x2
    ULONGLONG Buffer;                                                       //0x8
};
/* Used in */
// _PEB64
// _TEB64

