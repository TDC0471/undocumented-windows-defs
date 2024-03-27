#pragma once
/* ------------------ */


//0x20 bytes (sizeof)
struct _NON_PAGED_DEBUG_INFO
{
    USHORT Signature;                                                       //0x0
    USHORT Flags;                                                           //0x2
    ULONG Size;                                                             //0x4
    USHORT Machine;                                                         //0x8
    USHORT Characteristics;                                                 //0xa
    ULONG TimeDateStamp;                                                    //0xc
    ULONG CheckSum;                                                         //0x10
    ULONG SizeOfImage;                                                      //0x14
    ULONGLONG ImageBase;                                                    //0x18
};
/* Used in */
// _KLDR_DATA_TABLE_ENTRY

