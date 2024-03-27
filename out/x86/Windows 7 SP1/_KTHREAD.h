#pragma once
/* ------------------ */

#include <_DISPATCHER_HEADER.h>
#include <_KWAIT_STATUS_REGISTER.h>
#include <_KAPC_STATE.h>
#include <_KWAIT_BLOCK.h>
#include <_LIST_ENTRY.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_KQUEUE.h>
#include <_KTIMER.h>
#include <_KTRAP_FRAME.h>
#include <_GROUP_AFFINITY.h>
#include <_KPROCESS.h>
#include <_KAPC.h>
#include <_KPRCB.h>
#include <_KSEMAPHORE.h>
#include <_KTHREAD_COUNTERS.h>
#include <_XSTATE_SAVE.h>

//0x200 bytes (sizeof)
struct _KTHREAD
{
    struct _DISPATCHER_HEADER Header;                                       //0x0
    volatile ULONGLONG CycleTime;                                           //0x10
    volatile ULONG HighCycleTime;                                           //0x18
    ULONGLONG QuantumTarget;                                                //0x20
    VOID* InitialStack;                                                     //0x28
    VOID* volatile StackLimit;                                              //0x2c
    VOID* KernelStack;                                                      //0x30
    ULONG ThreadLock;                                                       //0x34
    union _KWAIT_STATUS_REGISTER WaitRegister;                              //0x38
    volatile UCHAR Running;                                                 //0x39
    UCHAR Alerted[2];                                                       //0x3a
    union
    {
        struct
        {
            ULONG KernelStackResident:1;                                    //0x3c
            ULONG ReadyTransition:1;                                        //0x3c
            ULONG ProcessReadyQueue:1;                                      //0x3c
            ULONG WaitNext:1;                                               //0x3c
            ULONG SystemAffinityActive:1;                                   //0x3c
            ULONG Alertable:1;                                              //0x3c
            ULONG GdiFlushActive:1;                                         //0x3c
            ULONG UserStackWalkActive:1;                                    //0x3c
            ULONG ApcInterruptRequest:1;                                    //0x3c
            ULONG ForceDeferSchedule:1;                                     //0x3c
            ULONG QuantumEndMigrate:1;                                      //0x3c
            ULONG UmsDirectedSwitchEnable:1;                                //0x3c
            ULONG TimerActive:1;                                            //0x3c
            ULONG SystemThread:1;                                           //0x3c
            ULONG Reserved:18;                                              //0x3c
        };
        LONG MiscFlags;                                                     //0x3c
    };
    union
    {
        struct _KAPC_STATE ApcState;                                        //0x40
        struct
        {
            UCHAR ApcStateFill[23];                                         //0x40
            CHAR Priority;                                                  //0x57
        };
    };
    volatile ULONG NextProcessor;                                           //0x58
    volatile ULONG DeferredProcessor;                                       //0x5c
    ULONG ApcQueueLock;                                                     //0x60
    ULONG ContextSwitches;                                                  //0x64
    volatile UCHAR State;                                                   //0x68
    CHAR NpxState;                                                          //0x69
    UCHAR WaitIrql;                                                         //0x6a
    CHAR WaitMode;                                                          //0x6b
    volatile LONG WaitStatus;                                               //0x6c
    struct _KWAIT_BLOCK* WaitBlockList;                                     //0x70
    union
    {
        struct _LIST_ENTRY WaitListEntry;                                   //0x74
        struct _SINGLE_LIST_ENTRY SwapListEntry;                            //0x74
    };
    struct _KQUEUE* volatile Queue;                                         //0x7c
    ULONG WaitTime;                                                         //0x80
    union
    {
        struct
        {
            SHORT KernelApcDisable;                                         //0x84
            SHORT SpecialApcDisable;                                        //0x86
        };
        ULONG CombinedApcDisable;                                           //0x84
    };
    VOID* Teb;                                                              //0x88
    struct _KTIMER Timer;                                                   //0x90
    union
    {
        struct
        {
            volatile ULONG AutoAlignment:1;                                 //0xb8
            volatile ULONG DisableBoost:1;                                  //0xb8
            volatile ULONG EtwStackTraceApc1Inserted:1;                     //0xb8
            volatile ULONG EtwStackTraceApc2Inserted:1;                     //0xb8
            volatile ULONG CalloutActive:1;                                 //0xb8
            volatile ULONG ApcQueueable:1;                                  //0xb8
            volatile ULONG EnableStackSwap:1;                               //0xb8
            volatile ULONG GuiThread:1;                                     //0xb8
            volatile ULONG UmsPerformingSyscall:1;                          //0xb8
            volatile ULONG VdmSafe:1;                                       //0xb8
            volatile ULONG UmsDispatched:1;                                 //0xb8
            volatile ULONG ReservedFlags:21;                                //0xb8
        };
        volatile LONG ThreadFlags;                                          //0xb8
    };
    VOID* ServiceTable;                                                     //0xbc
    struct _KWAIT_BLOCK WaitBlock[4];                                       //0xc0
    struct _LIST_ENTRY QueueListEntry;                                      //0x120
    struct _KTRAP_FRAME* TrapFrame;                                         //0x128
    VOID* FirstArgument;                                                    //0x12c
    union
    {
        VOID* CallbackStack;                                                //0x130
        ULONG CallbackDepth;                                                //0x130
    };
    UCHAR ApcStateIndex;                                                    //0x134
    CHAR BasePriority;                                                      //0x135
    union
    {
        CHAR PriorityDecrement;                                             //0x136
        struct
        {
            UCHAR ForegroundBoost:4;                                        //0x136
            UCHAR UnusualBoost:4;                                           //0x136
        };
    };
    UCHAR Preempted;                                                        //0x137
    UCHAR AdjustReason;                                                     //0x138
    CHAR AdjustIncrement;                                                   //0x139
    CHAR PreviousMode;                                                      //0x13a
    CHAR Saturation;                                                        //0x13b
    ULONG SystemCallNumber;                                                 //0x13c
    ULONG FreezeCount;                                                      //0x140
    volatile struct _GROUP_AFFINITY UserAffinity;                           //0x144
    struct _KPROCESS* Process;                                              //0x150
    volatile struct _GROUP_AFFINITY Affinity;                               //0x154
    ULONG IdealProcessor;                                                   //0x160
    ULONG UserIdealProcessor;                                               //0x164
    struct _KAPC_STATE* ApcStatePointer[2];                                 //0x168
    union
    {
        struct _KAPC_STATE SavedApcState;                                   //0x170
        struct
        {
            UCHAR SavedApcStateFill[23];                                    //0x170
            UCHAR WaitReason;                                               //0x187
        };
    };
    CHAR SuspendCount;                                                      //0x188
    CHAR Spare1;                                                            //0x189
    UCHAR OtherPlatformFill;                                                //0x18a
    VOID* volatile Win32Thread;                                             //0x18c
    VOID* StackBase;                                                        //0x190
    union
    {
        struct _KAPC SuspendApc;                                            //0x194
        struct
        {
            UCHAR SuspendApcFill0[1];                                       //0x194
            UCHAR ResourceIndex;                                            //0x195
        };
        struct
        {
            UCHAR SuspendApcFill1[3];                                       //0x194
            UCHAR QuantumReset;                                             //0x197
        };
        struct
        {
            UCHAR SuspendApcFill2[4];                                       //0x194
            ULONG KernelTime;                                               //0x198
        };
        struct
        {
            UCHAR SuspendApcFill3[36];                                      //0x194
            struct _KPRCB* volatile WaitPrcb;                               //0x1b8
        };
        struct
        {
            UCHAR SuspendApcFill4[40];                                      //0x194
            VOID* LegoData;                                                 //0x1bc
        };
        struct
        {
            UCHAR SuspendApcFill5[47];                                      //0x194
            UCHAR LargeStack;                                               //0x1c3
        };
    };
    ULONG UserTime;                                                         //0x1c4
    union
    {
        struct _KSEMAPHORE SuspendSemaphore;                                //0x1c8
        UCHAR SuspendSemaphorefill[20];                                     //0x1c8
    };
    ULONG SListFaultCount;                                                  //0x1dc
    struct _LIST_ENTRY ThreadListEntry;                                     //0x1e0
    struct _LIST_ENTRY MutantListHead;                                      //0x1e8
    VOID* SListFaultAddress;                                                //0x1f0
    struct _KTHREAD_COUNTERS* ThreadCounters;                               //0x1f4
    struct _XSTATE_SAVE* XStateSave;                                        //0x1f8
};
/* Used in */
// _CMHIVE
// _CM_KEY_CONTROL_BLOCK
// _CM_KEY_HASH_TABLE_ENTRY
// _ETHREAD
// _FAST_MUTEX
// _KAPC
// _KGUARDED_MUTEX
// _KMUTANT
// _KPRCB
// _KTRANSACTION
// _KWAIT_BLOCK
// _MMPFN
// _POP_DEVICE_SYS_STATE
// _VI_DEADLOCK_THREAD
// _XSTATE_SAVE

