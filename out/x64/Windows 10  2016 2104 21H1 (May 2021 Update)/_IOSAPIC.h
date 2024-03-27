#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _IOSAPIC
{
    UCHAR Type;                                                             //0x0
    UCHAR Length;                                                           //0x1
    UCHAR IOSAPICID;                                                        //0x2
    UCHAR Reserved;                                                         //0x3
    ULONG SystemVectorBase;                                                 //0x4
    ULONGLONG IOSAPICAddress;                                               //0x8
};
