#pragma once
/* ------------------ */


//0x28 bytes (sizeof)
struct _IMAGE_SECTION_HEADER
{
    UCHAR Name[8];                                                          //0x0
    union
    {
        ULONG PhysicalAddress;                                              //0x8
        ULONG VirtualSize;                                                  //0x8
    } Misc;                                                                 //0x8
    ULONG VirtualAddress;                                                   //0xc
    ULONG SizeOfRawData;                                                    //0x10
    ULONG PointerToRawData;                                                 //0x14
    ULONG PointerToRelocations;                                             //0x18
    ULONG PointerToLinenumbers;                                             //0x1c
    USHORT NumberOfRelocations;                                             //0x20
    USHORT NumberOfLinenumbers;                                             //0x22
    ULONG Characteristics;                                                  //0x24
};
