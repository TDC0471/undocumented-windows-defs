#pragma once
/* ------------------ */

#include <_KAFFINITY_EX.h>
#include <_PROCESSOR_IDLE_PREPARE_INFO.h>
#include <_PROCESSOR_IDLE_CONSTRAINTS.h>
#include <_PERFINFO_PPM_STATE_SELECTION.h>
#include <_PPM_SELECTION_MENU.h>
#include <_PPM_COORDINATED_SELECTION.h>
#include <_PPM_IDLE_STATE.h>

//0x150 bytes (sizeof)
struct _PPM_IDLE_STATES
{
    UCHAR InterfaceVersion;                                                 //0x0
    UCHAR IdleOverride;                                                     //0x1
    UCHAR EstimateIdleDuration;                                             //0x2
    UCHAR ExitLatencyTraceEnabled;                                          //0x3
    UCHAR NonInterruptibleTransition;                                       //0x4
    UCHAR UnaccountedTransition;                                            //0x5
    UCHAR IdleDurationLimited;                                              //0x6
    UCHAR IdleCheckLimited;                                                 //0x7
    ULONG ExitLatencyCountdown;                                             //0x8
    ULONG TargetState;                                                      //0xc
    ULONG ActualState;                                                      //0x10
    ULONG OldState;                                                         //0x14
    ULONG OverrideIndex;                                                    //0x18
    ULONG ProcessorIdleCount;                                               //0x1c
    ULONG Type;                                                             //0x20
    ULONGLONG LevelId;                                                      //0x28
    USHORT ReasonFlags;                                                     //0x30
    volatile ULONGLONG InitiateWakeStamp;                                   //0x38
    LONG PreviousStatus;                                                    //0x40
    ULONG PreviousCancelReason;                                             //0x44
    struct _KAFFINITY_EX PrimaryProcessorMask;                              //0x48
    struct _KAFFINITY_EX SecondaryProcessorMask;                            //0x54
    VOID (*IdlePrepare)(struct _PROCESSOR_IDLE_PREPARE_INFO* arg1);         //0x60
    LONG (*IdlePreExecute)(VOID* arg1, ULONG arg2, ULONG arg3, ULONG arg4, ULONG* arg5); //0x64
    LONG (*IdleExecute)(VOID* arg1, ULONGLONG arg2, ULONG arg3, ULONG arg4, ULONG arg5, ULONG* arg6); //0x68
    ULONG (*IdlePreselect)(VOID* arg1, struct _PROCESSOR_IDLE_CONSTRAINTS* arg2); //0x6c
    ULONG (*IdleTest)(VOID* arg1, ULONG arg2, ULONG arg3);                  //0x70
    ULONG (*IdleAvailabilityCheck)(VOID* arg1, ULONG arg2);                 //0x74
    VOID (*IdleComplete)(VOID* arg1, ULONG arg2, ULONG arg3, ULONG arg4, ULONG* arg5); //0x78
    VOID (*IdleCancel)(VOID* arg1, ULONG arg2);                             //0x7c
    UCHAR (*IdleIsHalted)(VOID* arg1);                                      //0x80
    UCHAR (*IdleInitiateWake)(VOID* arg1);                                  //0x84
    struct _PROCESSOR_IDLE_PREPARE_INFO PrepareInfo;                        //0x88
    struct _KAFFINITY_EX DeepIdleSnapshot;                                  //0xd8
    struct _PERFINFO_PPM_STATE_SELECTION* Tracing;                          //0xe4
    struct _PERFINFO_PPM_STATE_SELECTION* CoordinatedTracing;               //0xe8
    struct _PPM_SELECTION_MENU ProcessorMenu;                               //0xec
    struct _PPM_SELECTION_MENU CoordinatedMenu;                             //0xf4
    struct _PPM_COORDINATED_SELECTION CoordinatedSelection;                 //0xfc
    struct _PPM_IDLE_STATE State[1];                                        //0x10c
};
/* Used in */
// _PROCESSOR_POWER_STATE

