#pragma once
/* ------------------ */


//0x80 bytes (sizeof)
struct _PEBS_DS_SAVE_AREA32
{
    ULONG BtsBufferBase;                                                    //0x0
    ULONG BtsIndex;                                                         //0x4
    ULONG BtsAbsoluteMaximum;                                               //0x8
    ULONG BtsInterruptThreshold;                                            //0xc
    ULONG PebsBufferBase;                                                   //0x10
    ULONG PebsIndex;                                                        //0x14
    ULONG PebsAbsoluteMaximum;                                              //0x18
    ULONG PebsInterruptThreshold;                                           //0x1c
    ULONGLONG PebsGpCounterReset[8];                                        //0x20
    ULONGLONG PebsFixedCounterReset[4];                                     //0x60
};
/* Used in */
// _PEBS_DS_SAVE_AREA

