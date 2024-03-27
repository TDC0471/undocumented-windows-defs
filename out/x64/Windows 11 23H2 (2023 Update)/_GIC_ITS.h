#pragma once
/* ------------------ */


//0x14 bytes (sizeof)
struct _GIC_ITS
{
    UCHAR Type;                                                             //0x0
    UCHAR Length;                                                           //0x1
    USHORT Reserved1;                                                       //0x2
    ULONG Identifier;                                                       //0x4
    ULONGLONG PhysicalAddress;                                              //0x8
    ULONG Reserved2;                                                        //0x10
};
