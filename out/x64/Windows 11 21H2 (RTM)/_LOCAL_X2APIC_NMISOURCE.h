#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _LOCAL_X2APIC_NMISOURCE
{
    UCHAR Type;                                                             //0x0
    UCHAR Length;                                                           //0x1
    USHORT Flags;                                                           //0x2
    ULONG ProcessorID;                                                      //0x4
    UCHAR LINTIN;                                                           //0x8
    UCHAR Reserved[3];                                                      //0x9
};
