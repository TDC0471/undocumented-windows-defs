#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _EVENT_FILTER_HEADER
{
    USHORT Id;                                                              //0x0
    UCHAR Version;                                                          //0x2
    UCHAR Reserved[5];                                                      //0x3
    ULONGLONG InstanceId;                                                   //0x8
    ULONG Size;                                                             //0x10
    ULONG NextOffset;                                                       //0x14
};
/* Used in */
// _ETW_GUID_ENTRY

