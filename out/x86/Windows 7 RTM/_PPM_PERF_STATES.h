#pragma once
/* ------------------ */

#include <_KAFFINITY_EX.h>
#include <_PPM_PERF_STATE.h>

//0x80 bytes (sizeof)
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
        ULONG IncreasePolicy:2;                                             //0x2c
        ULONG DecreasePolicy:2;                                             //0x2c
        ULONG Reserved:28;                                                  //0x2c
    } Flags;                                                                //0x2c
    struct _KAFFINITY_EX TargetProcessors;                                  //0x30
    LONG (*PStateHandler)(ULONG arg1, ULONGLONG arg2, ULONGLONG arg3);      //0x3c
    ULONG PStateContext;                                                    //0x40
    LONG (*TStateHandler)(ULONG arg1, ULONGLONG arg2, ULONGLONG arg3);      //0x44
    ULONG TStateContext;                                                    //0x48
    UCHAR (*FeedbackHandler)(ULONG* arg1, ULONG arg2, UCHAR arg3);          //0x4c
    VOID (*GetFFHThrottleState)(ULONGLONG* arg1);                           //0x50
    struct _PPM_PERF_STATE State[1];                                        //0x58
};
