#pragma once
/* ------------------ */

#include <PPM_PERF_STATE.h>

//0x68 bytes (sizeof)
struct PPM_PERF_STATES
{
    ULONG Count;                                                            //0x0
    ULONG MaxFrequency;                                                     //0x4
    ULONG MaxPerfState;                                                     //0x8
    ULONG MinPerfState;                                                     //0xc
    ULONG LowestPState;                                                     //0x10
    ULONG IncreaseTime;                                                     //0x14
    ULONG DecreaseTime;                                                     //0x18
    UCHAR BusyAdjThreshold;                                                 //0x1c
    UCHAR Reserved;                                                         //0x1d
    UCHAR ThrottleStatesOnly;                                               //0x1e
    UCHAR PolicyType;                                                       //0x1f
    ULONG TimerInterval;                                                    //0x20
    union
    {
        ULONG AsULONG;                                                      //0x24
        ULONG UsingHypervisor:1;                                            //0x24
        ULONG NoDomainAccounting:1;                                         //0x24
        ULONG IncreasePolicy:2;                                             //0x24
        ULONG DecreasePolicy:2;                                             //0x24
        ULONG Reserved:26;                                                  //0x24
    } Flags;                                                                //0x24
    ULONG TargetProcessors;                                                 //0x28
    LONG (*PStateHandler)(ULONG arg1, ULONGLONG arg2, ULONGLONG arg3);      //0x2c
    ULONG PStateContext;                                                    //0x30
    LONG (*TStateHandler)(ULONG arg1, ULONGLONG arg2, ULONGLONG arg3);      //0x34
    ULONG TStateContext;                                                    //0x38
    ULONG (*FeedbackHandler)(UCHAR arg1);                                   //0x3c
    struct PPM_PERF_STATE State[1];                                         //0x40
};
/* Used in */
// _PROCESSOR_POWER_STATE

