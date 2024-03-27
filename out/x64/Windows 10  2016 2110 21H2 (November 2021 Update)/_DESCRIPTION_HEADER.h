#pragma once
/* ------------------ */


//0x24 bytes (sizeof)
struct _DESCRIPTION_HEADER
{
    ULONG Signature;                                                        //0x0
    ULONG Length;                                                           //0x4
    UCHAR Revision;                                                         //0x8
    UCHAR Checksum;                                                         //0x9
    CHAR OEMID[6];                                                          //0xa
    CHAR OEMTableID[8];                                                     //0x10
    ULONG OEMRevision;                                                      //0x18
    CHAR CreatorID[4];                                                      //0x1c
    ULONG CreatorRev;                                                       //0x20
};
/* Used in */
// _ACPI_CACHED_TABLE
// _FADT
// _MAPIC
// _RSDT_32
// _XSDT

