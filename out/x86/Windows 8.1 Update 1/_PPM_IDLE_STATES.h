#pragma once
/* ------------------ */

#include <_KAFFINITY_EX.h>
#include <_PROCESSOR_IDLE_PREPARE_INFO.h>
#include <_PROCESSOR_IDLE_CONSTRAINTS.h>
#include <_PROCESSOR_PLATFORM_STATE_RESIDENCIES.h>
#include <_PERFINFO_PPM_STATE_SELECTION.h>
#include <_PPM_IDLE_STATE.h>

//0x110 bytes (sizeof)
struct _PPM_IDLE_STATES
{
    UCHAR InterfaceVersion;                                                 //0x0
    UCHAR ForceIdle;                                                        //0x1
    UCHAR EstimateIdleDuration;                                             //0x2
    UCHAR ExitLatencyTraceEnabled;                                          //0x3
    UCHAR NonInterruptibleTransition;                                       //0x4
    ULONG ExitLatencyCountdown;                                             //0x8
    ULONG TargetState;                                                      //0xc
    ULONG ActualState;                                                      //0x10
    ULONG OldState;                                                         //0x14
    ULONG OverrideIndex;                                                    //0x18
    ULONG ProcessorIdleCount;                                               //0x1c
    ULONG Type;                                                             //0x20
    USHORT ReasonFlags;                                                     //0x24
    volatile ULONGLONG InitiateWakeStamp;                                   //0x28
    LONG PreviousStatus;                                                    //0x30
    ULONG PreviousCancelReason;                                             //0x34
    struct _KAFFINITY_EX PrimaryProcessorMask;                              //0x38
    struct _KAFFINITY_EX SecondaryProcessorMask;                            //0x44
    VOID (*IdlePrepare)(struct _PROCESSOR_IDLE_PREPARE_INFO* arg1);         //0x50
    LONG (*IdleExecute)(VOID* arg1, ULONG arg2, ULONG arg3);                //0x54
    ULONG (*IdlePreselect)(VOID* arg1, struct _PROCESSOR_IDLE_CONSTRAINTS* arg2); //0x58
    ULONG (*IdleTest)(VOID* arg1, ULONG arg2, ULONG arg3);                  //0x5c
    VOID (*IdleComplete)(VOID* arg1);                                       //0x60
    VOID (*IdleCancel)(VOID* arg1, ULONG arg2);                             //0x64
    UCHAR (*IdleIsHalted)(VOID* arg1);                                      //0x68
    UCHAR (*IdleInitiateWake)(VOID* arg1);                                  //0x6c
    LONG (*QueryPlatformStateResidency)(VOID* arg1, struct _PROCESSOR_PLATFORM_STATE_RESIDENCIES* arg2); //0x70
    struct _PROCESSOR_IDLE_PREPARE_INFO PrepareInfo;                        //0x78
    struct _PERFINFO_PPM_STATE_SELECTION* Tracing;                          //0xd8
    struct _PPM_IDLE_STATE State[1];                                        //0xdc
};
/* Used in */
// _PROCESSOR_POWER_STATE
