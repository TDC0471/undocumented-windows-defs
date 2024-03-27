#pragma once
/* ------------------ */

#include <_DISPATCHER_HEADER.h>
#include <_KAPC_STATE.h>
#include <_KWAIT_BLOCK.h>
#include <_KGATE.h>
#include <_LIST_ENTRY.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_KQUEUE.h>
#include <_KTIMER.h>
#include <_KTRAP_FRAME.h>
#include <_KPROCESS.h>
#include <_KAPC.h>
#include <_KPRCB.h>
#include <_KSEMAPHORE.h>

//0x330 bytes (sizeof)
struct _KTHREAD
{
    struct _DISPATCHER_HEADER Header;                                       //0x0
    volatile ULONGLONG CycleTime;                                           //0x18
    ULONGLONG QuantumTarget;                                                //0x20
    VOID* InitialStack;                                                     //0x28
    VOID* volatile StackLimit;                                              //0x30
    VOID* KernelStack;                                                      //0x38
    ULONGLONG ThreadLock;                                                   //0x40
    union
    {
        struct _KAPC_STATE ApcState;                                        //0x48
        struct
        {
            UCHAR ApcStateFill[43];                                         //0x48
            CHAR Priority;                                                  //0x73
            volatile USHORT NextProcessor;                                  //0x74
            volatile USHORT DeferredProcessor;                              //0x76
        };
    };
    ULONGLONG ApcQueueLock;                                                 //0x78
    LONGLONG WaitStatus;                                                    //0x80
    union
    {
        struct _KWAIT_BLOCK* WaitBlockList;                                 //0x88
        struct _KGATE* GateObject;                                          //0x88
    };
    union
    {
        struct
        {
            ULONG KernelStackResident:1;                                    //0x90
            ULONG ReadyTransition:1;                                        //0x90
            ULONG ProcessReadyQueue:1;                                      //0x90
            ULONG WaitNext:1;                                               //0x90
            ULONG SystemAffinityActive:1;                                   //0x90
            ULONG Alertable:1;                                              //0x90
            ULONG GdiFlushActive:1;                                         //0x90
            ULONG UserStackWalkActive:1;                                    //0x90
            ULONG Reserved:24;                                              //0x90
        };
        LONG MiscFlags;                                                     //0x90
    };
    UCHAR WaitReason;                                                       //0x94
    volatile UCHAR SwapBusy;                                                //0x95
    UCHAR Alerted[2];                                                       //0x96
    union
    {
        struct _LIST_ENTRY WaitListEntry;                                   //0x98
        struct _SINGLE_LIST_ENTRY SwapListEntry;                            //0x98
    };
    struct _KQUEUE* Queue;                                                  //0xa8
    VOID* Teb;                                                              //0xb0
    union
    {
        struct _KTIMER Timer;                                               //0xb8
        struct
        {
            UCHAR TimerFill[60];                                            //0xb8
            union
            {
                struct
                {
                    volatile ULONG AutoAlignment:1;                         //0xf4
                    volatile ULONG DisableBoost:1;                          //0xf4
                    volatile ULONG EtwStackTraceApc1Inserted:1;             //0xf4
                    volatile ULONG EtwStackTraceApc2Inserted:1;             //0xf4
                    volatile ULONG CycleChargePending:1;                    //0xf4
                    volatile ULONG CalloutActive:1;                         //0xf4
                    volatile ULONG ApcQueueable:1;                          //0xf4
                    volatile ULONG EnableStackSwap:1;                       //0xf4
                    volatile ULONG GuiThread:1;                             //0xf4
                    volatile ULONG ReservedFlags:23;                        //0xf4
                };
                volatile LONG ThreadFlags;                                  //0xf4
            };
        };
    };
    union
    {
        struct _KWAIT_BLOCK WaitBlock[4];                                   //0xf8
        struct
        {
            UCHAR WaitBlockFill0[43];                                       //0xf8
            UCHAR IdealProcessor;                                           //0x123
        };
        struct
        {
            UCHAR WaitBlockFill1[91];                                       //0xf8
            CHAR PreviousMode;                                              //0x153
        };
        struct
        {
            UCHAR WaitBlockFill2[139];                                      //0xf8
            UCHAR ResourceIndex;                                            //0x183
        };
        struct
        {
            UCHAR WaitBlockFill3[187];                                      //0xf8
            UCHAR LargeStack;                                               //0x1b3
        };
        struct
        {
            UCHAR WaitBlockFill4[44];                                       //0xf8
            ULONG ContextSwitches;                                          //0x124
        };
        struct
        {
            UCHAR WaitBlockFill5[92];                                       //0xf8
            volatile UCHAR State;                                           //0x154
            UCHAR NpxState;                                                 //0x155
            UCHAR WaitIrql;                                                 //0x156
            CHAR WaitMode;                                                  //0x157
        };
        struct
        {
            UCHAR WaitBlockFill6[140];                                      //0xf8
            ULONG WaitTime;                                                 //0x184
        };
        struct
        {
            UCHAR WaitBlockFill7[188];                                      //0xf8
            union
            {
                struct
                {
                    SHORT KernelApcDisable;                                 //0x1b4
                    SHORT SpecialApcDisable;                                //0x1b6
                };
                ULONG CombinedApcDisable;                                   //0x1b4
            };
        };
    };
    struct _LIST_ENTRY QueueListEntry;                                      //0x1b8
    struct _KTRAP_FRAME* TrapFrame;                                         //0x1c8
    VOID* FirstArgument;                                                    //0x1d0
    union
    {
        VOID* CallbackStack;                                                //0x1d8
        ULONGLONG CallbackDepth;                                            //0x1d8
    };
    UCHAR ApcStateIndex;                                                    //0x1e0
    CHAR BasePriority;                                                      //0x1e1
    CHAR PriorityDecrement;                                                 //0x1e2
    UCHAR Preempted;                                                        //0x1e3
    UCHAR AdjustReason;                                                     //0x1e4
    CHAR AdjustIncrement;                                                   //0x1e5
    UCHAR Spare01;                                                          //0x1e6
    CHAR Saturation;                                                        //0x1e7
    ULONG SystemCallNumber;                                                 //0x1e8
    ULONG FreezeCount;                                                      //0x1ec
    ULONGLONG UserAffinity;                                                 //0x1f0
    struct _KPROCESS* Process;                                              //0x1f8
    volatile ULONGLONG Affinity;                                            //0x200
    struct _KAPC_STATE* ApcStatePointer[2];                                 //0x208
    union
    {
        struct _KAPC_STATE SavedApcState;                                   //0x218
        struct
        {
            UCHAR SavedApcStateFill[43];                                    //0x218
            UCHAR Spare02;                                                  //0x243
            CHAR SuspendCount;                                              //0x244
            UCHAR UserIdealProcessor;                                       //0x245
            UCHAR Spare03;                                                  //0x246
            UCHAR CodePatchInProgress;                                      //0x247
        };
    };
    VOID* volatile Win32Thread;                                             //0x248
    VOID* StackBase;                                                        //0x250
    union
    {
        struct _KAPC SuspendApc;                                            //0x258
        struct
        {
            UCHAR SuspendApcFill0[1];                                       //0x258
            CHAR Spare04;                                                   //0x259
        };
        struct
        {
            UCHAR SuspendApcFill1[3];                                       //0x258
            UCHAR QuantumReset;                                             //0x25b
        };
        struct
        {
            UCHAR SuspendApcFill2[4];                                       //0x258
            ULONG KernelTime;                                               //0x25c
        };
        struct
        {
            UCHAR SuspendApcFill3[64];                                      //0x258
            struct _KPRCB* WaitPrcb;                                        //0x298
        };
        struct
        {
            UCHAR SuspendApcFill4[72];                                      //0x258
            VOID* LegoData;                                                 //0x2a0
        };
        struct
        {
            UCHAR SuspendApcFill5[83];                                      //0x258
            UCHAR PowerState;                                               //0x2ab
            ULONG UserTime;                                                 //0x2ac
        };
    };
    union
    {
        struct _KSEMAPHORE SuspendSemaphore;                                //0x2b0
        struct
        {
            UCHAR SuspendSemaphorefill[28];                                 //0x2b0
            ULONG SListFaultCount;                                          //0x2cc
        };
    };
    struct _LIST_ENTRY ThreadListEntry;                                     //0x2d0
    struct _LIST_ENTRY MutantListHead;                                      //0x2e0
    VOID* SListFaultAddress;                                                //0x2f0
    LONGLONG ReadOperationCount;                                            //0x2f8
    LONGLONG WriteOperationCount;                                           //0x300
    LONGLONG OtherOperationCount;                                           //0x308
    LONGLONG ReadTransferCount;                                             //0x310
    LONGLONG WriteTransferCount;                                            //0x318
    LONGLONG OtherTransferCount;                                            //0x320
    VOID* volatile MdlForLockedTeb;                                         //0x328
};
/* Used in */
// _CMHIVE
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

