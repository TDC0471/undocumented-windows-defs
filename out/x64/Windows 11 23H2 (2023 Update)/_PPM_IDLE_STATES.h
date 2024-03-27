#pragma once
/* ------------------ */

#include <_KAFFINITY_EX.h>
#include <_PROCESSOR_IDLE_PREPARE_INFO.h>
#include <_PROCESSOR_IDLE_CONSTRAINTS.h>
#include <_PERFINFO_PPM_STATE_SELECTION.h>
#include <_PPM_SELECTION_MENU.h>
#include <_PPM_COORDINATED_SELECTION.h>
#include <_PPM_IDLE_STATE.h>

//0x5b0 bytes (sizeof)
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
    ULONGLONG IdleReevaluationDuration;                                     //0x8
    UCHAR StrictVetoBias;                                                   //0x10
    ULONG ExitLatencyCountdown;                                             //0x14
    ULONG TargetState;                                                      //0x18
    ULONG ActualState;                                                      //0x1c
    ULONG OldState;                                                         //0x20
    ULONG OverrideIndex;                                                    //0x24
    ULONG ProcessorIdleCount;                                               //0x28
    ULONG Type;                                                             //0x2c
    ULONGLONG LevelId;                                                      //0x30
    USHORT ReasonFlags;                                                     //0x38
    volatile ULONGLONG InitiateWakeStamp;                                   //0x40
    LONG PreviousStatus;                                                    //0x48
    ULONG PreviousCancelReason;                                             //0x4c
    struct _KAFFINITY_EX PrimaryProcessorMask;                              //0x50
    struct _KAFFINITY_EX SecondaryProcessorMask;                            //0x158
    VOID (*IdlePrepare)(struct _PROCESSOR_IDLE_PREPARE_INFO* arg1);         //0x260
    LONG (*IdlePreExecute)(VOID* arg1, ULONG arg2, ULONG arg3, ULONG arg4, ULONG* arg5); //0x268
    LONG (*IdleExecute)(VOID* arg1, ULONGLONG arg2, ULONG arg3, ULONG arg4, ULONG arg5, ULONG arg6, ULONG* arg7); //0x270
    ULONG (*IdlePreselect)(VOID* arg1, struct _PROCESSOR_IDLE_CONSTRAINTS* arg2); //0x278
    ULONG (*IdleTest)(VOID* arg1, ULONG arg2, ULONG arg3);                  //0x280
    ULONG (*IdleAvailabilityCheck)(VOID* arg1, ULONG arg2);                 //0x288
    VOID (*IdleComplete)(VOID* arg1, ULONG arg2, ULONG arg3, ULONG arg4, ULONG* arg5); //0x290
    VOID (*IdleCancel)(VOID* arg1, ULONG arg2);                             //0x298
    UCHAR (*IdleIsHalted)(VOID* arg1);                                      //0x2a0
    UCHAR (*IdleInitiateWake)(VOID* arg1);                                  //0x2a8
    struct _PROCESSOR_IDLE_PREPARE_INFO PrepareInfo;                        //0x2b0
    struct _KAFFINITY_EX DeepIdleSnapshot;                                  //0x308
    struct _PERFINFO_PPM_STATE_SELECTION* Tracing;                          //0x410
    struct _PERFINFO_PPM_STATE_SELECTION* CoordinatedTracing;               //0x418
    struct _PPM_SELECTION_MENU ProcessorMenu;                               //0x420
    struct _PPM_SELECTION_MENU CoordinatedMenu;                             //0x430
    struct _PPM_COORDINATED_SELECTION CoordinatedSelection;                 //0x440
    struct _PPM_IDLE_STATE State[1];                                        //0x458
};
/* Used in */
// _PROCESSOR_POWER_STATE

