#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _GIC_MSIFRAME_ENTRY
{
    UCHAR Type;                                                             //0x0
    UCHAR Length;                                                           //0x1
    USHORT Reserved1;                                                       //0x2
    ULONG Identifier;                                                       //0x4
    ULONGLONG PhysicalAddress;                                              //0x8
    ULONG Flags;                                                            //0x10
    USHORT SpiCount;                                                        //0x14
    USHORT SpiBase;                                                         //0x16
};
