#pragma once
/* ------------------ */


//0x1c bytes (sizeof)
struct _DEVICE_DSM_DEFINITION
{
    ULONG Action;                                                           //0x0
    UCHAR SingleRange;                                                      //0x4
    ULONG ParameterBlockAlignment;                                          //0x8
    ULONG ParameterBlockLength;                                             //0xc
    UCHAR HasOutput;                                                        //0x10
    ULONG OutputBlockAlignment;                                             //0x14
    ULONG OutputBlockLength;                                                //0x18
};
