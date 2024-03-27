#pragma once
/* ------------------ */


//0x70 bytes (sizeof)
struct _FLOATING_SAVE_AREA
{
    ULONG ControlWord;                                                      //0x0
    ULONG StatusWord;                                                       //0x4
    ULONG TagWord;                                                          //0x8
    ULONG ErrorOffset;                                                      //0xc
    ULONG ErrorSelector;                                                    //0x10
    ULONG DataOffset;                                                       //0x14
    ULONG DataSelector;                                                     //0x18
    UCHAR RegisterArea[80];                                                 //0x1c
    ULONG Cr0NpxState;                                                      //0x6c
};
/* Used in */
// _CONTEXT

