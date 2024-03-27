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
#include <_UMS_CONTROL_BLOCK.h>
#include <_KUMS_CONTEXT_HEADER.h>
#include <_KPROCESS.h>
#include <_GROUP_AFFINITY.h>
#include <_KAPC.h>
#include <_KPRCB.h>
#include <_KEVENT.h>
#include <_KLOCK_ENTRY.h>

//0x5d0 bytes (sizeof)
struct _KTHREAD
{
    struct _DISPATCHER_HEADER Header;                                       //0x0
    VOID* SListFaultAddress;                                                //0x18
    ULONGLONG QuantumTarget;                                                //0x20
    VOID* InitialStack;                                                     //0x28
    VOID* volatile StackLimit;                                              //0x30
    VOID* StackBase;                                                        //0x38
    ULONGLONG ThreadLock;                                                   //0x40
    volatile ULONGLONG CycleTime;                                           //0x48
    ULONG CurrentRunTime;                                                   //0x50
    ULONG ExpectedRunTime;                                                  //0x54
    VOID* KernelStack;                                                      //0x58
    struct _XSAVE_FORMAT* StateSaveArea;                                    //0x60
    struct _KSCHEDULING_GROUP* volatile SchedulingGroup;                    //0x68
    union _KWAIT_STATUS_REGISTER WaitRegister;                              //0x70
    volatile UCHAR Running;                                                 //0x71
    UCHAR Alerted[2];                                                       //0x72
    union
    {
        struct
        {
            ULONG SpareMiscFlag0:1;                                         //0x74
            ULONG ReadyTransition:1;                                        //0x74
            ULONG ProcessReadyQueue:1;                                      //0x74
            ULONG WaitNext:1;                                               //0x74
            ULONG SystemAffinityActive:1;                                   //0x74
            ULONG Alertable:1;                                              //0x74
            ULONG UserStackWalkActive:1;                                    //0x74
            ULONG ApcInterruptRequest:1;                                    //0x74
            ULONG QuantumEndMigrate:1;                                      //0x74
            ULONG UmsDirectedSwitchEnable:1;                                //0x74
            ULONG TimerActive:1;                                            //0x74
            ULONG SystemThread:1;                                           //0x74
            ULONG ProcessDetachActive:1;                                    //0x74
            ULONG CalloutActive:1;                                          //0x74
            ULONG ScbReadyQueue:1;                                          //0x74
            ULONG ApcQueueable:1;                                           //0x74
            ULONG ReservedStackInUse:1;                                     //0x74
            ULONG UmsPerformingSyscall:1;                                   //0x74
            ULONG ApcPendingReload:1;                                       //0x74
            ULONG TimerSuspended:1;                                         //0x74
            ULONG SuspendedWaitMode:1;                                      //0x74
            ULONG Reserved:11;                                              //0x74
        };
        LONG MiscFlags;                                                     //0x74
    };
    union
    {
        struct
        {
            ULONG AutoAlignment:1;                                          //0x78
            ULONG DisableBoost:1;                                           //0x78
            ULONG UserAffinitySet:1;                                        //0x78
            ULONG AlertedByThreadId:1;                                      //0x78
            ULONG QuantumDonation:1;                                        //0x78
            ULONG EnableStackSwap:1;                                        //0x78
            ULONG GuiThread:1;                                              //0x78
            ULONG DisableQuantum:1;                                         //0x78
            ULONG ChargeOnlySchedulingGroup:1;                              //0x78
            ULONG DeferPreemption:1;                                        //0x78
            ULONG QueueDeferPreemption:1;                                   //0x78
            ULONG ForceDeferSchedule:1;                                     //0x78
            ULONG SharedReadyQueueAffinity:1;                               //0x78
            ULONG FreezeCount:1;                                            //0x78
            ULONG TerminationApcRequest:1;                                  //0x78
            ULONG AutoBoostEntriesExhausted:1;                              //0x78
            ULONG KernelStackResident:1;                                    //0x78
            ULONG EtwStackTraceApcInserted:8;                               //0x78
            ULONG ReservedFlags:7;                                          //0x78
        };
        volatile LONG ThreadFlags;                                          //0x78
    };
    ULONG Spare0;                                                           //0x7c
    ULONG SystemCallNumber;                                                 //0x80
    ULONG Spare1;                                                           //0x84
    VOID* FirstArgument;                                                    //0x88
    struct _KTRAP_FRAME* TrapFrame;                                         //0x90
    union
    {
        struct _KAPC_STATE ApcState;                                        //0x98
        struct
        {
            UCHAR ApcStateFill[43];                                         //0x98
            CHAR Priority;                                                  //0xc3
            ULONG UserIdealProcessor;                                       //0xc4
        };
    };
    volatile LONGLONG WaitStatus;                                           //0xc8
    struct _KWAIT_BLOCK* WaitBlockList;                                     //0xd0
    union
    {
        struct _LIST_ENTRY WaitListEntry;                                   //0xd8
        struct _SINGLE_LIST_ENTRY SwapListEntry;                            //0xd8
    };
    struct _DISPATCHER_HEADER* volatile Queue;                              //0xe8
    VOID* Teb;                                                              //0xf0
    ULONGLONG RelativeTimerBias;                                            //0xf8
    struct _KTIMER Timer;                                                   //0x100
    union
    {
        struct _KWAIT_BLOCK WaitBlock[4];                                   //0x140
        struct
        {
            UCHAR WaitBlockFill4[20];                                       //0x140
            ULONG ContextSwitches;                                          //0x154
        };
        struct
        {
            UCHAR WaitBlockFill5[68];                                       //0x140
            volatile UCHAR State;                                           //0x184
            CHAR NpxState;                                                  //0x185
            UCHAR WaitIrql;                                                 //0x186
            CHAR WaitMode;                                                  //0x187
        };
        struct
        {
            UCHAR WaitBlockFill6[116];                                      //0x140
            ULONG WaitTime;                                                 //0x1b4
        };
        struct
        {
            UCHAR WaitBlockFill7[164];                                      //0x140
            union
            {
                struct
                {
                    SHORT KernelApcDisable;                                 //0x1e4
                    SHORT SpecialApcDisable;                                //0x1e6
                };
                ULONG CombinedApcDisable;                                   //0x1e4
            };
        };
        struct
        {
            UCHAR WaitBlockFill8[40];                                       //0x140
            struct _KTHREAD_COUNTERS* ThreadCounters;                       //0x168
        };
        struct
        {
            UCHAR WaitBlockFill9[88];                                       //0x140
            struct _XSTATE_SAVE* XStateSave;                                //0x198
        };
        struct
        {
            UCHAR WaitBlockFill10[136];                                     //0x140
            VOID* volatile Win32Thread;                                     //0x1c8
        };
        struct
        {
            UCHAR WaitBlockFill11[176];                                     //0x140
            struct _UMS_CONTROL_BLOCK* Ucb;                                 //0x1f0
            struct _KUMS_CONTEXT_HEADER* volatile Uch;                      //0x1f8
        };
    };
    VOID* TebMappedLowVa;                                                   //0x200
    struct _LIST_ENTRY QueueListEntry;                                      //0x208
    union
    {
        volatile ULONG NextProcessor;                                       //0x218
        struct
        {
            ULONG NextProcessorNumber:31;                                   //0x218
            ULONG SharedReadyQueue:1;                                       //0x218
        };
    };
    LONG QueuePriority;                                                     //0x21c
    struct _KPROCESS* Process;                                              //0x220
    union
    {
        struct _GROUP_AFFINITY UserAffinity;                                //0x228
        struct
        {
            UCHAR UserAffinityFill[10];                                     //0x228
            CHAR PreviousMode;                                              //0x232
            CHAR BasePriority;                                              //0x233
            union
            {
                CHAR PriorityDecrement;                                     //0x234
                struct
                {
                    UCHAR ForegroundBoost:4;                                //0x234
                    UCHAR UnusualBoost:4;                                   //0x234
                };
            };
            UCHAR Preempted;                                                //0x235
            UCHAR AdjustReason;                                             //0x236
            CHAR AdjustIncrement;                                           //0x237
        };
    };
    union
    {
        struct _GROUP_AFFINITY Affinity;                                    //0x238
        struct
        {
            UCHAR AffinityFill[10];                                         //0x238
            UCHAR ApcStateIndex;                                            //0x242
            UCHAR WaitBlockCount;                                           //0x243
            ULONG IdealProcessor;                                           //0x244
        };
    };
    struct _KAPC_STATE* ApcStatePointer[2];                                 //0x248
    union
    {
        struct _KAPC_STATE SavedApcState;                                   //0x258
        struct
        {
            UCHAR SavedApcStateFill[43];                                    //0x258
            UCHAR WaitReason;                                               //0x283
            CHAR SuspendCount;                                              //0x284
            CHAR Saturation;                                                //0x285
            USHORT SListFaultCount;                                         //0x286
        };
    };
    union
    {
        struct _KAPC SchedulerApc;                                          //0x288
        struct
        {
            UCHAR SchedulerApcFill0[1];                                     //0x288
            UCHAR ResourceIndex;                                            //0x289
        };
        struct
        {
            UCHAR SchedulerApcFill1[3];                                     //0x288
            UCHAR QuantumReset;                                             //0x28b
        };
        struct
        {
            UCHAR SchedulerApcFill2[4];                                     //0x288
            ULONG KernelTime;                                               //0x28c
        };
        struct
        {
            UCHAR SchedulerApcFill3[64];                                    //0x288
            struct _KPRCB* volatile WaitPrcb;                               //0x2c8
        };
        struct
        {
            UCHAR SchedulerApcFill4[72];                                    //0x288
            VOID* LegoData;                                                 //0x2d0
        };
        struct
        {
            UCHAR SchedulerApcFill5[83];                                    //0x288
            UCHAR CallbackNestingLevel;                                     //0x2db
            ULONG UserTime;                                                 //0x2dc
        };
    };
    struct _KEVENT SuspendEvent;                                            //0x2e0
    struct _LIST_ENTRY ThreadListEntry;                                     //0x2f8
    struct _LIST_ENTRY MutantListHead;                                      //0x308
    struct _SINGLE_LIST_ENTRY LockEntriesFreeList;                          //0x318
    struct _KLOCK_ENTRY LockEntries[6];                                     //0x320
    struct _SINGLE_LIST_ENTRY PropagateBoostsEntry;                         //0x560
    struct _SINGLE_LIST_ENTRY IoSelfBoostsEntry;                            //0x568
    UCHAR PriorityFloorCounts[16];                                          //0x570
    ULONG PriorityFloorSummary;                                             //0x580
    volatile LONG AbCompletedIoBoostCount;                                  //0x584
    volatile SHORT AbReferenceCount;                                        //0x588
    UCHAR AbFreeEntryCount;                                                 //0x58a
    UCHAR AbWaitEntryCount;                                                 //0x58b
    ULONG ForegroundLossTime;                                               //0x58c
    union
    {
        struct _LIST_ENTRY GlobalForegroundListEntry;                       //0x590
        struct
        {
            struct _SINGLE_LIST_ENTRY ForegroundDpcStackListEntry;          //0x590
            ULONGLONG InGlobalForegroundList;                               //0x598
        };
    };
    LONGLONG ReadOperationCount;                                            //0x5a0
    LONGLONG WriteOperationCount;                                           //0x5a8
    LONGLONG OtherOperationCount;                                           //0x5b0
    LONGLONG ReadTransferCount;                                             //0x5b8
    LONGLONG WriteTransferCount;                                            //0x5c0
    LONGLONG OtherTransferCount;                                            //0x5c8
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
// _KUMS_CONTEXT_HEADER
// _KWAIT_BLOCK
// _MMPFN
// _POP_DEVICE_SYS_STATE
// _POP_RW_LOCK
// _VI_DEADLOCK_THREAD
// _XSTATE_SAVE

