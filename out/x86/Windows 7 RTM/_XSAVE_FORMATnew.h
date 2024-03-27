#pragma once
/* ------------------ */

#include <_M128A.h>

//0x200 bytes (sizeof)
struct _XSAVE_FORMAT
{
    USHORT ControlWord;                                                     //0x0
    USHORT StatusWord;                                                      //0x2
    UCHAR TagWord;                                                          //0x4
    UCHAR Reserved1;                                                        //0x5
    USHORT ErrorOpcode;                                                     //0x6
    ULONG ErrorOffset;                                                      //0x8
    USHORT ErrorSelector;                                                   //0xc
    USHORT Reserved2;                                                       //0xe
    ULONG DataOffset;                                                       //0x10
    USHORT DataSelector;                                                    //0x14
    USHORT Reserved3;                                                       //0x16
    ULONG MxCsr;                                                            //0x18
    ULONG MxCsr_Mask;                                                       //0x1c
    struct _M128A FloatRegisters[8];                                        //0x20
    struct _M128A XmmRegisters[8];                                          //0xa0
    UCHAR Reserved4[192];                                                   //0x120
    ULONG StackControl[7];                                                  //0x1e0
    ULONG Cr0NpxState;                                                      //0x1fc
};
/* Used in */
// _XSAVE_AREA

