#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _PLATFORM_INTERRUPT
{
    UCHAR Type;                                                             //0x0
    UCHAR Length;                                                           //0x1
    USHORT Flags;                                                           //0x2
    UCHAR InterruptType;                                                    //0x4
    UCHAR APICID;                                                           //0x5
    UCHAR ACPIEID;                                                          //0x6
    UCHAR IOSAPICVector;                                                    //0x7
    ULONG GlobalVector;                                                     //0x8
    ULONG Reserved;                                                         //0xc
};
