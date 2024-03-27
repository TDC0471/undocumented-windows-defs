#pragma once
/* ------------------ */

#include <_KAFFINITY_EX.h>
#include <_PROCESSOR_IDLE_PREPARE_INFO.h>
#include <_PPM_IDLE_STATE.h>

//0x2d8 bytes (sizeof)
struct _PPM_IDLE_STATES
{
    UCHAR ForceIdle;                                                        //0x0
    UCHAR EstimateIdleDuration;                                             //0x1
    UCHAR ExitLatencyTraceEnabled;                                          //0x2
    ULONG ExitLatencyCountdown;                                             //0x4
    ULONG TargetState;                                                      //0x8
    ULONG ActualState;                                                      //0xc
    ULONG ActualPlatformState;                                              //0x10
    ULONG OldState;                                                         //0x14
    ULONG OverrideIndex;                                                    //0x18
    ULONG PlatformIdleCount;                                                //0x1c
    ULONG ProcessorIdleCount;                                               //0x20
    ULONG Type;                                                             //0x24
    ULONG ReasonFlags;                                                      //0x28
    volatile LONGLONG InitiateWakeStamp;                                    //0x30
    LONG PreviousStatus;                                                    //0x38
    struct _KAFFINITY_EX PrimaryProcessorMask;                              //0x40
    struct _KAFFINITY_EX SecondaryProcessorMask;                            //0xe8
    VOID (*IdlePrepare)(struct _PROCESSOR_IDLE_PREPARE_INFO* arg1);         //0x190
    LONG (*IdleExecute)(VOID* arg1);                                        //0x198
    VOID (*IdleComplete)(VOID* arg1);                                       //0x1a0
    VOID (*IdleCancel)(VOID* arg1, ULONG arg2);                             //0x1a8
    UCHAR (*IdleIsHalted)(VOID* arg1);                                      //0x1b0
    UCHAR (*IdleInitiateWake)(VOID* arg1);                                  //0x1b8
    struct _PROCESSOR_IDLE_PREPARE_INFO PrepareInfo;                        //0x1c0
    struct _PPM_IDLE_STATE State[1];                                        //0x218
};
/* Used in */
// _PROCESSOR_POWER_STATE

