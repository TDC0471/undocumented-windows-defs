#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _EVENT_HEADER_EXTENDED_DATA_ITEM
{
    USHORT Reserved1;                                                       //0x0
    USHORT ExtType;                                                         //0x2
    USHORT Linkage:1;                                                       //0x4
    USHORT Reserved2:15;                                                    //0x4
    USHORT DataSize;                                                        //0x6
    ULONGLONG DataPtr;                                                      //0x8
};
/* Used in */
// _EVENT_RECORD

