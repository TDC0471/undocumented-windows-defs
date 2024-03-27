#pragma once
/* ------------------ */

#include <PPM_PERF_STATE.h>

//0x80 bytes (sizeof)
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
    ULONGLONG TargetProcessors;                                             //0x28
    LONG (*PStateHandler)(ULONGLONG arg1, ULONGLONG arg2, ULONGLONG arg3);  //0x30
    ULONGLONG PStateContext;                                                //0x38
    LONG (*TStateHandler)(ULONGLONG arg1, ULONGLONG arg2, ULONGLONG arg3);  //0x40
    ULONGLONG TStateContext;                                                //0x48
    ULONG (*FeedbackHandler)(UCHAR arg1);                                   //0x50
    struct PPM_PERF_STATE State[1];                                         //0x58
};
/* Used in */
// _PROCESSOR_POWER_STATE

