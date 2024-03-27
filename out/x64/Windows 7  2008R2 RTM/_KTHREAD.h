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
#include <_UMS_CONTROL_BLOCK.h>
#include <_KTRAP_FRAME.h>
#include <_GROUP_AFFINITY.h>
#include <_KPROCESS.h>
#include <_KAPC.h>
#include <_KPRCB.h>
#include <_KSEMAPHORE.h>
#include <_KTHREAD_COUNTERS.h>
#include <_XSTATE_SAVE.h>

//0x360 bytes (sizeof)
struct _KTHREAD
{
    struct _DISPATCHER_HEADER Header;                                       //0x0
    volatile ULONGLONG CycleTime;                                           //0x18
    ULONGLONG QuantumTarget;                                                //0x20
    VOID* InitialStack;                                                     //0x28
    VOID* volatile StackLimit;                                              //0x30
    VOID* KernelStack;                                                      //0x38
    ULONGLONG ThreadLock;                                                   //0x40
    union _KWAIT_STATUS_REGISTER WaitRegister;                              //0x48
    volatile UCHAR Running;                                                 //0x49
    UCHAR Alerted[2];                                                       //0x4a
    union
    {
        struct
        {
            ULONG KernelStackResident:1;                                    //0x4c
            ULONG ReadyTransition:1;                                        //0x4c
            ULONG ProcessReadyQueue:1;                                      //0x4c
            ULONG WaitNext:1;                                               //0x4c
            ULONG SystemAffinityActive:1;                                   //0x4c
            ULONG Alertable:1;                                              //0x4c
            ULONG GdiFlushActive:1;                                         //0x4c
            ULONG UserStackWalkActive:1;                                    //0x4c
            ULONG ApcInterruptRequest:1;                                    //0x4c
            ULONG ForceDeferSchedule:1;                                     //0x4c
            ULONG QuantumEndMigrate:1;                                      //0x4c
            ULONG UmsDirectedSwitchEnable:1;                                //0x4c
            ULONG TimerActive:1;                                            //0x4c
            ULONG Reserved:19;                                              //0x4c
        };
        LONG MiscFlags;                                                     //0x4c
    };
    union
    {
        struct _KAPC_STATE ApcState;                                        //0x50
        struct
        {
            UCHAR ApcStateFill[43];                                         //0x50
            CHAR Priority;                                                  //0x7b
            volatile ULONG NextProcessor;                                   //0x7c
        };
    };
    volatile ULONG DeferredProcessor;                                       //0x80
    ULONGLONG ApcQueueLock;                                                 //0x88
    volatile LONGLONG WaitStatus;                                           //0x90
    struct _KWAIT_BLOCK* WaitBlockList;                                     //0x98
    union
    {
        struct _LIST_ENTRY WaitListEntry;                                   //0xa0
        struct _SINGLE_LIST_ENTRY SwapListEntry;                            //0xa0
    };
    struct _KQUEUE* volatile Queue;                                         //0xb0
    VOID* Teb;                                                              //0xb8
    struct _KTIMER Timer;                                                   //0xc0
    union
    {
        struct
        {
            volatile ULONG AutoAlignment:1;                                 //0x100
            volatile ULONG DisableBoost:1;                                  //0x100
            volatile ULONG EtwStackTraceApc1Inserted:1;                     //0x100
            volatile ULONG EtwStackTraceApc2Inserted:1;                     //0x100
            volatile ULONG CalloutActive:1;                                 //0x100
            volatile ULONG ApcQueueable:1;                                  //0x100
            volatile ULONG EnableStackSwap:1;                               //0x100
            volatile ULONG GuiThread:1;                                     //0x100
            volatile ULONG UmsPerformingSyscall:1;                          //0x100
            volatile ULONG ReservedFlags:23;                                //0x100
        };
        volatile LONG ThreadFlags;                                          //0x100
    };
    ULONG Spare0;                                                           //0x104
    union
    {
        struct _KWAIT_BLOCK WaitBlock[4];                                   //0x108
        struct
        {
            UCHAR WaitBlockFill4[44];                                       //0x108
            ULONG ContextSwitches;                                          //0x134
        };
        struct
        {
            UCHAR WaitBlockFill5[92];                                       //0x108
            volatile UCHAR State;                                           //0x164
            CHAR NpxState;                                                  //0x165
            UCHAR WaitIrql;                                                 //0x166
            CHAR WaitMode;                                                  //0x167
        };
        struct
        {
            UCHAR WaitBlockFill6[140];                                      //0x108
            ULONG WaitTime;                                                 //0x194
        };
        struct
        {
            UCHAR WaitBlockFill7[168];                                      //0x108
            VOID* TebMappedLowVa;                                           //0x1b0
            struct _UMS_CONTROL_BLOCK* Ucb;                                 //0x1b8
        };
        struct
        {
            UCHAR WaitBlockFill8[188];                                      //0x108
            union
            {
                struct
                {
                    SHORT KernelApcDisable;                                 //0x1c4
                    SHORT SpecialApcDisable;                                //0x1c6
                };
                ULONG CombinedApcDisable;                                   //0x1c4
            };
        };
    };
    struct _LIST_ENTRY QueueListEntry;                                      //0x1c8
    struct _KTRAP_FRAME* TrapFrame;                                         //0x1d8
    VOID* FirstArgument;                                                    //0x1e0
    union
    {
        VOID* CallbackStack;                                                //0x1e8
        ULONGLONG CallbackDepth;                                            //0x1e8
    };
    UCHAR ApcStateIndex;                                                    //0x1f0
    CHAR BasePriority;                                                      //0x1f1
    union
    {
        CHAR PriorityDecrement;                                             //0x1f2
        struct
        {
            UCHAR ForegroundBoost:4;                                        //0x1f2
            UCHAR UnusualBoost:4;                                           //0x1f2
        };
    };
    UCHAR Preempted;                                                        //0x1f3
    UCHAR AdjustReason;                                                     //0x1f4
    CHAR AdjustIncrement;                                                   //0x1f5
    CHAR PreviousMode;                                                      //0x1f6
    CHAR Saturation;                                                        //0x1f7
    ULONG SystemCallNumber;                                                 //0x1f8
    ULONG FreezeCount;                                                      //0x1fc
    volatile struct _GROUP_AFFINITY UserAffinity;                           //0x200
    struct _KPROCESS* Process;                                              //0x210
    volatile struct _GROUP_AFFINITY Affinity;                               //0x218
    ULONG IdealProcessor;                                                   //0x228
    ULONG UserIdealProcessor;                                               //0x22c
    struct _KAPC_STATE* ApcStatePointer[2];                                 //0x230
    union
    {
        struct _KAPC_STATE SavedApcState;                                   //0x240
        struct
        {
            UCHAR SavedApcStateFill[43];                                    //0x240
            UCHAR WaitReason;                                               //0x26b
            CHAR SuspendCount;                                              //0x26c
            CHAR Spare1;                                                    //0x26d
            UCHAR CodePatchInProgress;                                      //0x26e
        };
    };
    VOID* volatile Win32Thread;                                             //0x270
    VOID* StackBase;                                                        //0x278
    union
    {
        struct _KAPC SuspendApc;                                            //0x280
        struct
        {
            UCHAR SuspendApcFill0[1];                                       //0x280
            UCHAR ResourceIndex;                                            //0x281
        };
        struct
        {
            UCHAR SuspendApcFill1[3];                                       //0x280
            UCHAR QuantumReset;                                             //0x283
        };
        struct
        {
            UCHAR SuspendApcFill2[4];                                       //0x280
            ULONG KernelTime;                                               //0x284
        };
        struct
        {
            UCHAR SuspendApcFill3[64];                                      //0x280
            struct _KPRCB* volatile WaitPrcb;                               //0x2c0
        };
        struct
        {
            UCHAR SuspendApcFill4[72];                                      //0x280
            VOID* LegoData;                                                 //0x2c8
        };
        struct
        {
            UCHAR SuspendApcFill5[83];                                      //0x280
            UCHAR LargeStack;                                               //0x2d3
            ULONG UserTime;                                                 //0x2d4
        };
    };
    union
    {
        struct _KSEMAPHORE SuspendSemaphore;                                //0x2d8
        struct
        {
            UCHAR SuspendSemaphorefill[28];                                 //0x2d8
            ULONG SListFaultCount;                                          //0x2f4
        };
    };
    struct _LIST_ENTRY ThreadListEntry;                                     //0x2f8
    struct _LIST_ENTRY MutantListHead;                                      //0x308
    VOID* SListFaultAddress;                                                //0x318
    LONGLONG ReadOperationCount;                                            //0x320
    LONGLONG WriteOperationCount;                                           //0x328
    LONGLONG OtherOperationCount;                                           //0x330
    LONGLONG ReadTransferCount;                                             //0x338
    LONGLONG WriteTransferCount;                                            //0x340
    LONGLONG OtherTransferCount;                                            //0x348
    struct _KTHREAD_COUNTERS* ThreadCounters;                               //0x350
    struct _XSTATE_SAVE* XStateSave;                                        //0x358
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
// _KUMS_CONTEXT_HEADER
// _KWAIT_BLOCK
// _MMPFN
// _POP_DEVICE_SYS_STATE
// _VI_DEADLOCK_THREAD
// _XSTATE_SAVE

