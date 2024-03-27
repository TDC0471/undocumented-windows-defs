#pragma once
/* ------------------ */


//0x38 bytes (sizeof)
struct _MCGEN_TRACE_CONTEXT
{
    ULONGLONG RegistrationHandle;                                           //0x0
    ULONGLONG Logger;                                                       //0x8
    ULONGLONG MatchAnyKeyword;                                              //0x10
    ULONGLONG MatchAllKeyword;                                              //0x18
    ULONG Flags;                                                            //0x20
    ULONG IsEnabled;                                                        //0x24
    UCHAR Level;                                                            //0x28
    UCHAR Reserve;                                                          //0x29
    USHORT EnableBitsCount;                                                 //0x2a
    ULONG* EnableBitMask;                                                   //0x2c
    ULONGLONG* EnableKeyWords;                                              //0x30
    UCHAR* EnableLevel;                                                     //0x34
};
