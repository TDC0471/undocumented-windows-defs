#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x24 bytes (sizeof)
struct _RSDP
{
    ULONGLONG Signature;                                                    //0x0
    UCHAR Checksum;                                                         //0x8
    UCHAR OEMID[6];                                                         //0x9
    UCHAR Revision;                                                         //0xf
    ULONG RsdtAddress;                                                      //0x10
    ULONG Length;                                                           //0x14
    union _LARGE_INTEGER XsdtAddress;                                       //0x18
    UCHAR XChecksum;                                                        //0x20
    UCHAR Reserved[3];                                                      //0x21
};
