#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _EVENT_DESCRIPTOR
{
    USHORT Id;                                                              //0x0
    UCHAR Version;                                                          //0x2
    UCHAR Channel;                                                          //0x3
    UCHAR Level;                                                            //0x4
    UCHAR Opcode;                                                           //0x5
    USHORT Task;                                                            //0x6
    ULONGLONG Keyword;                                                      //0x8
};
/* Used in */
// _EVENT_HEADER

