#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _IOAPIC
{
    UCHAR Type;                                                             //0x0
    UCHAR Length;                                                           //0x1
    UCHAR IOAPICID;                                                         //0x2
    UCHAR Reserved;                                                         //0x3
    ULONG IOAPICAddress;                                                    //0x4
    ULONG SystemVectorBase;                                                 //0x8
};
