#pragma once
/* ------------------ */


//0x60 bytes (sizeof)
struct _PEBS_DS_SAVE_AREA
{
    ULONGLONG BtsBufferBase;                                                //0x0
    ULONGLONG BtsIndex;                                                     //0x8
    ULONGLONG BtsAbsoluteMaximum;                                           //0x10
    ULONGLONG BtsInterruptThreshold;                                        //0x18
    ULONGLONG PebsBufferBase;                                               //0x20
    ULONGLONG PebsIndex;                                                    //0x28
    ULONGLONG PebsAbsoluteMaximum;                                          //0x30
    ULONGLONG PebsInterruptThreshold;                                       //0x38
    ULONGLONG PebsCounterReset0;                                            //0x40
    ULONGLONG PebsCounterReset1;                                            //0x48
    ULONGLONG PebsCounterReset2;                                            //0x50
    ULONGLONG PebsCounterReset3;                                            //0x58
};
/* Used in */
// _PROCESSOR_PROFILE_CONTROL_AREA

