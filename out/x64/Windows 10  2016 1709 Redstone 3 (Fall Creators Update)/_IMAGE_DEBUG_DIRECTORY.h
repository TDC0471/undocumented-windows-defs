#pragma once
/* ------------------ */


//0x1c bytes (sizeof)
struct _IMAGE_DEBUG_DIRECTORY
{
    ULONG Characteristics;                                                  //0x0
    ULONG TimeDateStamp;                                                    //0x4
    USHORT MajorVersion;                                                    //0x8
    USHORT MinorVersion;                                                    //0xa
    ULONG Type;                                                             //0xc
    ULONG SizeOfData;                                                       //0x10
    ULONG AddressOfRawData;                                                 //0x14
    ULONG PointerToRawData;                                                 //0x18
};
