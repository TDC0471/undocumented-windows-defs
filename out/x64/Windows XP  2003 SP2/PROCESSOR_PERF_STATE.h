#pragma once
/* ------------------ */


//0x20 bytes (sizeof)
struct PROCESSOR_PERF_STATE
{
    UCHAR PercentFrequency;                                                 //0x0
    UCHAR MinCapacity;                                                      //0x1
    USHORT Power;                                                           //0x2
    UCHAR IncreaseLevel;                                                    //0x4
    UCHAR DecreaseLevel;                                                    //0x5
    USHORT Flags;                                                           //0x6
    ULONG IncreaseTime;                                                     //0x8
    ULONG DecreaseTime;                                                     //0xc
    ULONG IncreaseCount;                                                    //0x10
    ULONG DecreaseCount;                                                    //0x14
    ULONGLONG PerformanceTime;                                              //0x18
};
/* Used in */
// _PROCESSOR_POWER_STATE

