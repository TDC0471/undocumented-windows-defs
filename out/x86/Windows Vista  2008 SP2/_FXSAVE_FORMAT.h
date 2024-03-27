#pragma once
/* ------------------ */


//0x208 bytes (sizeof)
struct _FXSAVE_FORMAT
{
    USHORT ControlWord;                                                     //0x0
    USHORT StatusWord;                                                      //0x2
    USHORT TagWord;                                                         //0x4
    USHORT ErrorOpcode;                                                     //0x6
    ULONG ErrorOffset;                                                      //0x8
    ULONG ErrorSelector;                                                    //0xc
    ULONG DataOffset;                                                       //0x10
    ULONG DataSelector;                                                     //0x14
    ULONG MXCsr;                                                            //0x18
    ULONG MXCsrMask;                                                        //0x1c
    UCHAR RegisterArea[128];                                                //0x20
    UCHAR Reserved3[128];                                                   //0xa0
    UCHAR Reserved4[224];                                                   //0x120
    UCHAR Align16Byte[8];                                                   //0x200
};
/* Used in */
// _FX_SAVE_AREA

