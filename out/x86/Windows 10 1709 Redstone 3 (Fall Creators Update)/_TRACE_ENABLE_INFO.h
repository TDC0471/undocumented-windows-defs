#pragma once
/* ------------------ */


//0x20 bytes (sizeof)
struct _TRACE_ENABLE_INFO
{
    ULONG IsEnabled;                                                        //0x0
    UCHAR Level;                                                            //0x4
    UCHAR Reserved1;                                                        //0x5
    USHORT LoggerId;                                                        //0x6
    ULONG EnableProperty;                                                   //0x8
    ULONG Reserved2;                                                        //0xc
    ULONGLONG MatchAnyKeyword;                                              //0x10
    ULONGLONG MatchAllKeyword;                                              //0x18
};
/* Used in */
// _ETW_GUID_ENTRY

