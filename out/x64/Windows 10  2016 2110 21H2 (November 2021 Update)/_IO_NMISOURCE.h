#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _IO_NMISOURCE
{
    UCHAR Type;                                                             //0x0
    UCHAR Length;                                                           //0x1
    USHORT Flags;                                                           //0x2
    ULONG GlobalSystemInterruptVector;                                      //0x4
};
