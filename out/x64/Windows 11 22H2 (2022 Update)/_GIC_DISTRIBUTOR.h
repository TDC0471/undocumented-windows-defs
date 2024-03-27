#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _GIC_DISTRIBUTOR
{
    UCHAR Type;                                                             //0x0
    UCHAR Length;                                                           //0x1
    USHORT Reserved1;                                                       //0x2
    ULONG Identifier;                                                       //0x4
    ULONGLONG ControllerPhysicalAddress;                                    //0x8
    ULONG GsivBase;                                                         //0x10
    UCHAR Version;                                                          //0x14
    UCHAR Reserved[3];                                                      //0x15
};
