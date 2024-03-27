#pragma once
/* ------------------ */


//0x28 bytes (sizeof)
struct PPM_PERF_STATE
{
    ULONG Frequency;                                                        //0x0
    ULONG Power;                                                            //0x4
    UCHAR PercentFrequency;                                                 //0x8
    UCHAR IncreaseLevel;                                                    //0x9
    UCHAR DecreaseLevel;                                                    //0xa
    UCHAR Type;                                                             //0xb
    ULONGLONG Control;                                                      //0x10
    ULONGLONG Status;                                                       //0x18
    ULONG TotalHitCount;                                                    //0x20
    ULONG DesiredCount;                                                     //0x24
};
/* Used in */
// PPM_PERF_STATES

