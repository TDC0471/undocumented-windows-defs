#pragma once
/* ------------------ */


//0xa bytes (sizeof)
struct _ISA_VECTOR
{
    UCHAR Type;                                                             //0x0
    UCHAR Length;                                                           //0x1
    UCHAR Bus;                                                              //0x2
    UCHAR Source;                                                           //0x3
    ULONG GlobalSystemInterruptVector;                                      //0x4
    USHORT Flags;                                                           //0x8
};
