#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _GIC_REDISTRIBUTOR
{
    UCHAR Type;                                                             //0x0
    UCHAR Length;                                                           //0x1
    USHORT Reserved;                                                        //0x2
    ULONGLONG DiscoveryRangeBaseAddress;                                    //0x4
    ULONG DiscoveryRangeLength;                                             //0xc
};
