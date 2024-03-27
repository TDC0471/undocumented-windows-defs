#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _PROCLOCALAPIC
{
    UCHAR Type;                                                             //0x0
    UCHAR Length;                                                           //0x1
    UCHAR ACPIProcessorID;                                                  //0x2
    UCHAR APICID;                                                           //0x3
    ULONG Flags;                                                            //0x4
};
