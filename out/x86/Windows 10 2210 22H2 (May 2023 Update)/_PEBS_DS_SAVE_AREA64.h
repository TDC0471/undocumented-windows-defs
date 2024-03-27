#pragma once
/* ------------------ */


//0xa0 bytes (sizeof)
struct _PEBS_DS_SAVE_AREA64
{
    ULONGLONG BtsBufferBase;                                                //0x0
    ULONGLONG BtsIndex;                                                     //0x8
    ULONGLONG BtsAbsoluteMaximum;                                           //0x10
    ULONGLONG BtsInterruptThreshold;                                        //0x18
    ULONGLONG PebsBufferBase;                                               //0x20
    ULONGLONG PebsIndex;                                                    //0x28
    ULONGLONG PebsAbsoluteMaximum;                                          //0x30
    ULONGLONG PebsInterruptThreshold;                                       //0x38
    ULONGLONG PebsGpCounterReset[8];                                        //0x40
    ULONGLONG PebsFixedCounterReset[4];                                     //0x80
};
/* Used in */
// _PEBS_DS_SAVE_AREA

