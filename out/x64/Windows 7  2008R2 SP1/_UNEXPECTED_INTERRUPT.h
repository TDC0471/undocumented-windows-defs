#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _UNEXPECTED_INTERRUPT
{
    UCHAR PushImmOp;                                                        //0x0
    ULONG PushImm;                                                          //0x1
    UCHAR PushRbp;                                                          //0x5
    UCHAR JmpOp;                                                            //0x6
    LONG JmpOffset;                                                         //0x7
};
