#pragma once
/* ------------------ */


//0x38 bytes (sizeof)
struct _IMAGE_ROM_OPTIONAL_HEADER
{
    USHORT Magic;                                                           //0x0
    UCHAR MajorLinkerVersion;                                               //0x2
    UCHAR MinorLinkerVersion;                                               //0x3
    ULONG SizeOfCode;                                                       //0x4
    ULONG SizeOfInitializedData;                                            //0x8
    ULONG SizeOfUninitializedData;                                          //0xc
    ULONG AddressOfEntryPoint;                                              //0x10
    ULONG BaseOfCode;                                                       //0x14
    ULONG BaseOfData;                                                       //0x18
    ULONG BaseOfBss;                                                        //0x1c
    ULONG GprMask;                                                          //0x20
    ULONG CprMask[4];                                                       //0x24
    ULONG GpValue;                                                          //0x34
};
