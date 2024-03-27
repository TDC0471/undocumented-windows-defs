#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _PCW_COUNTER_DESCRIPTOR
{
    USHORT Id;                                                              //0x0
    USHORT StructIndex;                                                     //0x2
    USHORT Offset;                                                          //0x4
    USHORT Size;                                                            //0x6
};
/* Used in */
// _PCW_REGISTRATION_INFORMATION

