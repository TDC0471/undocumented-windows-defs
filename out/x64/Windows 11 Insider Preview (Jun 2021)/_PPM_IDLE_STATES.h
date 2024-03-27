#pragma once
/* ------------------ */

#include <_KAFFINITY_EX.h>
#include <_PROCESSOR_IDLE_PREPARE_INFO.h>
#include <_PROCESSOR_IDLE_CONSTRAINTS.h>
#include <_PERFINFO_PPM_STATE_SELECTION.h>
#include <_PPM_SELECTION_MENU.h>
#include <_PPM_COORDINATED_SELECTION.h>
#include <_PPM_IDLE_STATE.h>

//0x5a8 bytes (sizeof)
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
    UCHAR StrictVetoBias;                                                   //0x8
    ULONG ExitLatencyCountdown;                                             //0xc
    ULONG TargetState;                                                      //0x10
    ULONG ActualState;                                                      //0x14
    ULONG OldState;                                                         //0x18
    ULONG OverrideIndex;                                                    //0x1c
    ULONG ProcessorIdleCount;                                               //0x20
    ULONG Type;                                                             //0x24
    ULONGLONG LevelId;                                                      //0x28
    USHORT ReasonFlags;                                                     //0x30
    volatile ULONGLONG InitiateWakeStamp;                                   //0x38
    LONG PreviousStatus;                                                    //0x40
    ULONG PreviousCancelReason;                                             //0x44
    struct _KAFFINITY_EX PrimaryProcessorMask;                              //0x48
    struct _KAFFINITY_EX SecondaryProcessorMask;                            //0x150
    VOID (*IdlePrepare)(struct _PROCESSOR_IDLE_PREPARE_INFO* arg1);         //0x258
    LONG (*IdlePreExecute)(VOID* arg1, ULONG arg2, ULONG arg3, ULONG arg4, ULONG* arg5); //0x260
    LONG (*IdleExecute)(VOID* arg1, ULONGLONG arg2, ULONG arg3, ULONG arg4, ULONG arg5, ULONG arg6, ULONG* arg7); //0x268
    ULONG (*IdlePreselect)(VOID* arg1, struct _PROCESSOR_IDLE_CONSTRAINTS* arg2); //0x270
    ULONG (*IdleTest)(VOID* arg1, ULONG arg2, ULONG arg3);                  //0x278
    ULONG (*IdleAvailabilityCheck)(VOID* arg1, ULONG arg2);                 //0x280
    VOID (*IdleComplete)(VOID* arg1, ULONG arg2, ULONG arg3, ULONG arg4, ULONG* arg5); //0x288
    VOID (*IdleCancel)(VOID* arg1, ULONG arg2);                             //0x290
    UCHAR (*IdleIsHalted)(VOID* arg1);                                      //0x298
    UCHAR (*IdleInitiateWake)(VOID* arg1);                                  //0x2a0
    struct _PROCESSOR_IDLE_PREPARE_INFO PrepareInfo;                        //0x2a8
    struct _KAFFINITY_EX DeepIdleSnapshot;                                  //0x300
    struct _PERFINFO_PPM_STATE_SELECTION* Tracing;                          //0x408
    struct _PERFINFO_PPM_STATE_SELECTION* CoordinatedTracing;               //0x410
    struct _PPM_SELECTION_MENU ProcessorMenu;                               //0x418
    struct _PPM_SELECTION_MENU CoordinatedMenu;                             //0x428
    struct _PPM_COORDINATED_SELECTION CoordinatedSelection;                 //0x438
    struct _PPM_IDLE_STATE State[1];                                        //0x450
};
/* Used in */
// _PROCESSOR_POWER_STATE

