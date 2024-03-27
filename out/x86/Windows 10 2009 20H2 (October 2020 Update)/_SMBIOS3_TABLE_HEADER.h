#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _SMBIOS3_TABLE_HEADER
{
    UCHAR Signature[5];                                                     //0x0
    UCHAR Checksum;                                                         //0x5
    UCHAR Length;                                                           //0x6
    UCHAR MajorVersion;                                                     //0x7
    UCHAR MinorVersion;                                                     //0x8
    UCHAR Docrev;                                                           //0x9
    UCHAR EntryPointRevision;                                               //0xa
    UCHAR Reserved;                                                         //0xb
    ULONG StructureTableMaximumSize;                                        //0xc
    ULONGLONG StructureTableAddress;                                        //0x10
};
/* Used in */
// _LOADER_PARAMETER_EXTENSION

