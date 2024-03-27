#pragma once
/* ------------------ */

#include <_PPM_DIA_STATS.h>
#include <_PPM_PERF_STATE.h>

//0x78 bytes (sizeof)
struct _PPM_PERF_STATES
{
    ULONG Count;                                                            //0x0
    ULONG MaxFrequency;                                                     //0x4
    ULONG PStateCap;                                                        //0x8
    ULONG TStateCap;                                                        //0xc
    ULONG MaxPerfState;                                                     //0x10
    ULONG MinPerfState;                                                     //0x14
    ULONG LowestPState;                                                     //0x18
    ULONG IncreaseTime;                                                     //0x1c
    ULONG DecreaseTime;                                                     //0x20
    UCHAR BusyAdjThreshold;                                                 //0x24
    UCHAR Reserved;                                                         //0x25
    UCHAR ThrottleStatesOnly;                                               //0x26
    UCHAR PolicyType;                                                       //0x27
    ULONG TimerInterval;                                                    //0x28
    union
    {
        ULONG AsULONG;                                                      //0x2c
        ULONG UsingHypervisor:1;                                            //0x2c
        ULONG NoDomainAccounting:1;                                         //0x2c
        ULONG IncreasePolicy:2;                                             //0x2c
        ULONG DecreasePolicy:2;                                             //0x2c
        ULONG Reserved:26;                                                  //0x2c
    } Flags;                                                                //0x2c
    ULONG TargetProcessors;                                                 //0x30
    LONG (*PStateHandler)(ULONG arg1, ULONGLONG arg2, ULONGLONG arg3);      //0x34
    ULONG PStateContext;                                                    //0x38
    LONG (*TStateHandler)(ULONG arg1, ULONGLONG arg2, ULONGLONG arg3);      //0x3c
    ULONG TStateContext;                                                    //0x40
    ULONG (*FeedbackHandler)(UCHAR arg1);                                   //0x44
    struct _PPM_DIA_STATS* DiaStats;                                        //0x48
    ULONG DiaStatsCount;                                                    //0x4c
    struct _PPM_PERF_STATE State[1];                                        //0x50
};
/* Used in */
// _PROCESSOR_POWER_STATE

