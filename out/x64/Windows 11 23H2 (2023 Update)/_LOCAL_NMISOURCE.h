#pragma once
/* ------------------ */


//0x6 bytes (sizeof)
struct _LOCAL_NMISOURCE
{
    UCHAR Type;                                                             //0x0
    UCHAR Length;                                                           //0x1
    UCHAR ProcessorID;                                                      //0x2
    USHORT Flags;                                                           //0x3
    UCHAR LINTIN;                                                           //0x5
};
