#pragma once
/* ------------------ */

#include <_DISPATCHER_HEADER.h>
#include <_XSAVE_FORMAT.h>
#include <_KSCHEDULING_GROUP.h>
#include <_KWAIT_STATUS_REGISTER.h>
#include <_KTRAP_FRAME.h>
#include <_KAPC_STATE.h>
#include <_KWAIT_BLOCK.h>
#include <_LIST_ENTRY.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_KTIMER.h>
#include <_KTHREAD_COUNTERS.h>
#include <_XSTATE_SAVE.h>
#include <_KPROCESS.h>
#include <_GROUP_AFFINITY.h>
#include <_KAPC.h>
#include <_KPRCB.h>
#include <_KEVENT.h>
#include <_KLOCK_ENTRY.h>
#include <_KSCB.h>

//0x350 bytes (sizeof)
struct _KTHREAD
{
    struct _DISPATCHER_HEADER Header;                                       //0x0
    VOID* SListFaultAddress;                                                //0x10
    ULONGLONG QuantumTarget;                                                //0x18
    VOID* InitialStack;                                                     //0x20
    VOID* volatile StackLimit;                                              //0x24
    VOID* StackBase;                                                        //0x28
    ULONG ThreadLock;                                                       //0x2c
    volatile ULONGLONG CycleTime;                                           //0x30
    volatile ULONG HighCycleTime;                                           //0x38
    VOID* ServiceTable;                                                     //0x3c
    ULONG CurrentRunTime;                                                   //0x40
    ULONG ExpectedRunTime;                                                  //0x44
    VOID* KernelStack;                                                      //0x48
    struct _XSAVE_FORMAT* StateSaveArea;                                    //0x4c
    struct _KSCHEDULING_GROUP* volatile SchedulingGroup;                    //0x50
    union _KWAIT_STATUS_REGISTER WaitRegister;                              //0x54
    volatile UCHAR Running;                                                 //0x55
    UCHAR Alerted[2];                                                       //0x56
    union
    {
        struct
        {
            ULONG AutoBoostActive:1;                                        //0x58
            ULONG ReadyTransition:1;                                        //0x58
            ULONG WaitNext:1;                                               //0x58
            ULONG SystemAffinityActive:1;                                   //0x58
            ULONG Alertable:1;                                              //0x58
            ULONG UserStackWalkActive:1;                                    //0x58
            ULONG ApcInterruptRequest:1;                                    //0x58
            ULONG QuantumEndMigrate:1;                                      //0x58
            ULONG UmsDirectedSwitchEnable:1;                                //0x58
            ULONG TimerActive:1;                                            //0x58
            ULONG SystemThread:1;                                           //0x58
            ULONG ProcessDetachActive:1;                                    //0x58
            ULONG CalloutActive:1;                                          //0x58
            ULONG ScbReadyQueue:1;                                          //0x58
            ULONG ApcQueueable:1;                                           //0x58
            ULONG ReservedStackInUse:1;                                     //0x58
            ULONG UmsPerformingSyscall:1;                                   //0x58
            ULONG TimerSuspended:1;                                         //0x58
            ULONG SuspendedWaitMode:1;                                      //0x58
            ULONG SuspendSchedulerApcWait:1;                                //0x58
            ULONG Reserved:12;                                              //0x58
        };
        LONG MiscFlags;                                                     //0x58
    };
    union
    {
        struct
        {
            ULONG BamQosLevel:2;                                            //0x5c
            ULONG AutoAlignment:1;                                          //0x5c
            ULONG DisableBoost:1;                                           //0x5c
            ULONG AlertedByThreadId:1;                                      //0x5c
            ULONG QuantumDonation:1;                                        //0x5c
            ULONG EnableStackSwap:1;                                        //0x5c
            ULONG GuiThread:1;                                              //0x5c
            ULONG DisableQuantum:1;                                         //0x5c
            ULONG ChargeOnlySchedulingGroup:1;                              //0x5c
            ULONG DeferPreemption:1;                                        //0x5c
            ULONG QueueDeferPreemption:1;                                   //0x5c
            ULONG ForceDeferSchedule:1;                                     //0x5c
            ULONG SharedReadyQueueAffinity:1;                               //0x5c
            ULONG FreezeCount:1;                                            //0x5c
            ULONG TerminationApcRequest:1;                                  //0x5c
            ULONG AutoBoostEntriesExhausted:1;                              //0x5c
            ULONG KernelStackResident:1;                                    //0x5c
            ULONG TerminateRequestReason:2;                                 //0x5c
            ULONG ProcessStackCountDecremented:1;                           //0x5c
            ULONG RestrictedGuiThread:1;                                    //0x5c
            ULONG VpBackingThread:1;                                        //0x5c
            ULONG ThreadFlagsSpare:1;                                       //0x5c
            ULONG EtwStackTraceApcInserted:8;                               //0x5c
        };
        volatile LONG ThreadFlags;                                          //0x5c
    };
    volatile UCHAR Tag;                                                     //0x60
    UCHAR SystemHeteroCpuPolicy;                                            //0x61
    UCHAR UserHeteroCpuPolicy:7;                                            //0x62
    UCHAR ExplicitSystemHeteroCpuPolicy:1;                                  //0x62
    UCHAR Spare0;                                                           //0x63
    ULONG SystemCallNumber;                                                 //0x64
    VOID* FirstArgument;                                                    //0x68
    struct _KTRAP_FRAME* TrapFrame;                                         //0x6c
    union
    {
        struct _KAPC_STATE ApcState;                                        //0x70
        struct
        {
            UCHAR ApcStateFill[23];                                         //0x70
            CHAR Priority;                                                  //0x87
        };
    };
    ULONG UserIdealProcessor;                                               //0x88
    ULONG ContextSwitches;                                                  //0x8c
    volatile UCHAR State;                                                   //0x90
    CHAR Spare12;                                                           //0x91
    UCHAR WaitIrql;                                                         //0x92
    CHAR WaitMode;                                                          //0x93
    volatile LONG WaitStatus;                                               //0x94
    struct _KWAIT_BLOCK* WaitBlockList;                                     //0x98
    union
    {
        struct _LIST_ENTRY WaitListEntry;                                   //0x9c
        struct _SINGLE_LIST_ENTRY SwapListEntry;                            //0x9c
    };
    struct _DISPATCHER_HEADER* volatile Queue;                              //0xa4
    VOID* Teb;                                                              //0xa8
    ULONGLONG RelativeTimerBias;                                            //0xb0
    struct _KTIMER Timer;                                                   //0xb8
    union
    {
        struct _KWAIT_BLOCK WaitBlock[4];                                   //0xe0
        struct
        {
            UCHAR WaitBlockFill8[20];                                       //0xe0
            struct _KTHREAD_COUNTERS* ThreadCounters;                       //0xf4
        };
        struct
        {
            UCHAR WaitBlockFill9[44];                                       //0xe0
            struct _XSTATE_SAVE* XStateSave;                                //0x10c
        };
        struct
        {
            UCHAR WaitBlockFill10[68];                                      //0xe0
            VOID* volatile Win32Thread;                                     //0x124
        };
        struct
        {
            UCHAR WaitBlockFill11[88];                                      //0xe0
            ULONG WaitTime;                                                 //0x138
            union
            {
                struct
                {
                    SHORT KernelApcDisable;                                 //0x13c
                    SHORT SpecialApcDisable;                                //0x13e
                };
                ULONG CombinedApcDisable;                                   //0x13c
            };
        };
    };
    struct _LIST_ENTRY QueueListEntry;                                      //0x140
    union
    {
        volatile ULONG NextProcessor;                                       //0x148
        struct
        {
            ULONG NextProcessorNumber:31;                                   //0x148
            ULONG SharedReadyQueue:1;                                       //0x148
        };
    };
    LONG QueuePriority;                                                     //0x14c
    struct _KPROCESS* Process;                                              //0x150
    union
    {
        struct _GROUP_AFFINITY UserAffinity;                                //0x154
        struct
        {
            UCHAR UserAffinityFill[6];                                      //0x154
            CHAR PreviousMode;                                              //0x15a
            CHAR BasePriority;                                              //0x15b
            union
            {
                CHAR PriorityDecrement;                                     //0x15c
                struct
                {
                    UCHAR ForegroundBoost:4;                                //0x15c
                    UCHAR UnusualBoost:4;                                   //0x15c
                };
            };
            UCHAR Preempted;                                                //0x15d
            UCHAR AdjustReason;                                             //0x15e
            CHAR AdjustIncrement;                                           //0x15f
        };
    };
    ULONG AffinityVersion;                                                  //0x160
    union
    {
        struct _GROUP_AFFINITY Affinity;                                    //0x164
        struct
        {
            UCHAR AffinityFill[6];                                          //0x164
            UCHAR ApcStateIndex;                                            //0x16a
            UCHAR WaitBlockCount;                                           //0x16b
            ULONG IdealProcessor;                                           //0x16c
        };
    };
    ULONG ReadyTime;                                                        //0x170
    union
    {
        struct _KAPC_STATE SavedApcState;                                   //0x174
        struct
        {
            UCHAR SavedApcStateFill[23];                                    //0x174
            UCHAR WaitReason;                                               //0x18b
        };
    };
    CHAR SuspendCount;                                                      //0x18c
    CHAR Saturation;                                                        //0x18d
    USHORT SListFaultCount;                                                 //0x18e
    union
    {
        struct _KAPC SchedulerApc;                                          //0x190
        struct
        {
            UCHAR SchedulerApcFill0[1];                                     //0x190
            UCHAR ResourceIndex;                                            //0x191
        };
        struct
        {
            UCHAR SchedulerApcFill1[3];                                     //0x190
            UCHAR QuantumReset;                                             //0x193
        };
        struct
        {
            UCHAR SchedulerApcFill2[4];                                     //0x190
            ULONG KernelTime;                                               //0x194
        };
        struct
        {
            UCHAR SchedulerApcFill3[36];                                    //0x190
            struct _KPRCB* volatile WaitPrcb;                               //0x1b4
        };
        struct
        {
            UCHAR SchedulerApcFill4[40];                                    //0x190
            VOID* LegoData;                                                 //0x1b8
        };
        struct
        {
            UCHAR SchedulerApcFill5[47];                                    //0x190
            UCHAR CallbackNestingLevel;                                     //0x1bf
        };
    };
    ULONG UserTime;                                                         //0x1c0
    struct _KEVENT SuspendEvent;                                            //0x1c4
    struct _LIST_ENTRY ThreadListEntry;                                     //0x1d4
    struct _LIST_ENTRY MutantListHead;                                      //0x1dc
    UCHAR AbEntrySummary;                                                   //0x1e4
    UCHAR AbWaitEntryCount;                                                 //0x1e5
    UCHAR AbAllocationRegionCount;                                          //0x1e6
    CHAR SystemPriority;                                                    //0x1e7
    struct _KLOCK_ENTRY LockEntries[6];                                     //0x1e8
    struct _SINGLE_LIST_ENTRY PropagateBoostsEntry;                         //0x308
    struct _SINGLE_LIST_ENTRY IoSelfBoostsEntry;                            //0x30c
    UCHAR PriorityFloorCounts[16];                                          //0x310
    ULONG PriorityFloorSummary;                                             //0x320
    volatile LONG AbCompletedIoBoostCount;                                  //0x324
    volatile LONG AbCompletedIoQoSBoostCount;                               //0x328
    volatile SHORT KeReferenceCount;                                        //0x32c
    UCHAR AbOrphanedEntrySummary;                                           //0x32e
    UCHAR AbOwnedEntryCount;                                                //0x32f
    ULONG ForegroundLossTime;                                               //0x330
    union
    {
        struct _LIST_ENTRY GlobalForegroundListEntry;                       //0x334
        struct
        {
            struct _SINGLE_LIST_ENTRY ForegroundDpcStackListEntry;          //0x334
            ULONG InGlobalForegroundList;                                   //0x338
        };
    };
    struct _KSCB* QueuedScb;                                                //0x33c
    ULONGLONG NpxState;                                                     //0x340
    volatile ULONG ThreadTimerDelay;                                        //0x348
    union
    {
        volatile LONG ThreadFlags2;                                         //0x34c
        struct
        {
            ULONG PpmPolicy:2;                                              //0x34c
            ULONG ThreadFlags2Reserved:30;                                  //0x34c
        };
    };
};
/* Used in */
// _CMHIVE
// _CM_KEY_CONTROL_BLOCK
// _CM_KEY_HASH_TABLE_ENTRY
// _ETHREAD
// _IOV_IRP_TRACE
// _KAPC
// _KINTERRUPT
// _KMUTANT
// _KPRCB
// _KTRANSACTION
// _KWAIT_BLOCK
// _POP_DEVICE_SYS_STATE
// _POP_FX_WORK_ORDER_WATCHDOG_INFO
// _POP_RW_LOCK
// _VI_DEADLOCK_THREAD
// _XSTATE_SAVE

