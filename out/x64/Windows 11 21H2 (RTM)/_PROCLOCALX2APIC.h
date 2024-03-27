#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _PROCLOCALX2APIC
{
    UCHAR Type;                                                             //0x0
    UCHAR Length;                                                           //0x1
    USHORT Reserved;                                                        //0x2
    ULONG APICID;                                                           //0x4
    ULONG Flags;                                                            //0x8
    ULONG ACPIProcessorID;                                                  //0xc
};
