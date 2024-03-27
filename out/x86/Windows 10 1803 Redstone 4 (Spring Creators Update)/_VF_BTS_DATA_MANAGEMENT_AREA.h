#pragma once
/* ------------------ */


//0x34 bytes (sizeof)
struct _VF_BTS_DATA_MANAGEMENT_AREA
{
    VOID* BTSBufferBase;                                                    //0x0
    VOID* BTSIndex;                                                         //0x4
    VOID* BTSMax;                                                           //0x8
    VOID* BTSInterruptThreshold;                                            //0xc
    VOID* PEBSBufferBase;                                                   //0x10
    VOID* PEBSIndex;                                                        //0x14
    VOID* PEBSMax;                                                          //0x18
    VOID* PEBSInterruptThreshold;                                           //0x1c
    VOID* PEBSCounterReset[2];                                              //0x20
    CHAR Reserved[12];                                                      //0x28
};
