#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _POP_FX_LOG_ENTRY
{
    ULONGLONG Timestamp;                                                    //0x0
    UCHAR Operation;                                                        //0x8
    UCHAR Component;                                                        //0x9
    USHORT Processor;                                                       //0xa
    USHORT Process;                                                         //0xc
    USHORT Thread;                                                          //0xe
    ULONGLONG Information;                                                  //0x10
};
/* Used in */
// _POP_FX_DEVICE

