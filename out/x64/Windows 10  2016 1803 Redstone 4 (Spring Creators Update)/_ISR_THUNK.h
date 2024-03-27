#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _ISR_THUNK
{
    UCHAR PushImm;                                                          //0x0
    UCHAR Vector;                                                           //0x1
    UCHAR PushRbp;                                                          //0x2
    UCHAR JmpOp;                                                            //0x3
    LONG JmpOffset;                                                         //0x4
};
