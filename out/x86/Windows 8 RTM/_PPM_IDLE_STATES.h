#pragma once
/* ------------------ */

#include <_KAFFINITY_EX.h>
#include <_PROCESSOR_IDLE_PREPARE_INFO.h>
#include <_PPM_IDLE_STATE.h>

//0xe0 bytes (sizeof)
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
    struct _KAFFINITY_EX PrimaryProcessorMask;                              //0x3c
    struct _KAFFINITY_EX SecondaryProcessorMask;                            //0x48
    VOID (*IdlePrepare)(struct _PROCESSOR_IDLE_PREPARE_INFO* arg1);         //0x54
    LONG (*IdleExecute)(VOID* arg1);                                        //0x58
    VOID (*IdleComplete)(VOID* arg1);                                       //0x5c
    VOID (*IdleCancel)(VOID* arg1, ULONG arg2);                             //0x60
    UCHAR (*IdleIsHalted)(VOID* arg1);                                      //0x64
    UCHAR (*IdleInitiateWake)(VOID* arg1);                                  //0x68
    struct _PROCESSOR_IDLE_PREPARE_INFO PrepareInfo;                        //0x70
    struct _PPM_IDLE_STATE State[1];                                        //0xc0
};
/* Used in */
// _PROCESSOR_POWER_STATE

