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

//0x1e0 bytes (sizeof)
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
    union
    {
        struct _KAPC_STATE ApcState;                                        //0x38
        struct
        {
            UCHAR ApcStateFill[23];                                         //0x38
            CHAR Priority;                                                  //0x4f
        };
    };
    volatile USHORT NextProcessor;                                          //0x50
    volatile USHORT DeferredProcessor;                                      //0x52
    ULONG ApcQueueLock;                                                     //0x54
    ULONG ContextSwitches;                                                  //0x58
    volatile UCHAR State;                                                   //0x5c
    UCHAR NpxState;                                                         //0x5d
    UCHAR WaitIrql;                                                         //0x5e
    CHAR WaitMode;                                                          //0x5f
    LONG WaitStatus;                                                        //0x60
    union
    {
        struct _KWAIT_BLOCK* WaitBlockList;                                 //0x64
        struct _KGATE* GateObject;                                          //0x64
    };
    union
    {
        struct
        {
            ULONG KernelStackResident:1;                                    //0x68
            ULONG ReadyTransition:1;                                        //0x68
            ULONG ProcessReadyQueue:1;                                      //0x68
            ULONG WaitNext:1;                                               //0x68
            ULONG SystemAffinityActive:1;                                   //0x68
            ULONG Alertable:1;                                              //0x68
            ULONG GdiFlushActive:1;                                         //0x68
            ULONG UserStackWalkActive:1;                                    //0x68
            ULONG Reserved:24;                                              //0x68
        };
        LONG MiscFlags;                                                     //0x68
    };
    UCHAR WaitReason;                                                       //0x6c
    volatile UCHAR SwapBusy;                                                //0x6d
    UCHAR Alerted[2];                                                       //0x6e
    union
    {
        struct _LIST_ENTRY WaitListEntry;                                   //0x70
        struct _SINGLE_LIST_ENTRY SwapListEntry;                            //0x70
    };
    struct _KQUEUE* Queue;                                                  //0x78
    ULONG WaitTime;                                                         //0x7c
    union
    {
        struct
        {
            SHORT KernelApcDisable;                                         //0x80
            SHORT SpecialApcDisable;                                        //0x82
        };
        ULONG CombinedApcDisable;                                           //0x80
    };
    VOID* Teb;                                                              //0x84
    union
    {
        struct _KTIMER Timer;                                               //0x88
        UCHAR TimerFill[40];                                                //0x88
    };
    union
    {
        struct
        {
            volatile ULONG AutoAlignment:1;                                 //0xb0
            volatile ULONG DisableBoost:1;                                  //0xb0
            volatile ULONG EtwStackTraceApc1Inserted:1;                     //0xb0
            volatile ULONG EtwStackTraceApc2Inserted:1;                     //0xb0
            volatile ULONG CycleChargePending:1;                            //0xb0
            volatile ULONG CalloutActive:1;                                 //0xb0
            volatile ULONG ApcQueueable:1;                                  //0xb0
            volatile ULONG EnableStackSwap:1;                               //0xb0
            volatile ULONG GuiThread:1;                                     //0xb0
            volatile ULONG ReservedFlags:23;                                //0xb0
        };
        volatile LONG ThreadFlags;                                          //0xb0
    };
    union
    {
        struct _KWAIT_BLOCK WaitBlock[4];                                   //0xb8
        struct
        {
            UCHAR WaitBlockFill0[23];                                       //0xb8
            UCHAR IdealProcessor;                                           //0xcf
        };
        struct
        {
            UCHAR WaitBlockFill1[47];                                       //0xb8
            CHAR PreviousMode;                                              //0xe7
        };
        struct
        {
            UCHAR WaitBlockFill2[71];                                       //0xb8
            UCHAR ResourceIndex;                                            //0xff
        };
        struct
        {
            UCHAR WaitBlockFill3[95];                                       //0xb8
            UCHAR LargeStack;                                               //0x117
        };
    };
    struct _LIST_ENTRY QueueListEntry;                                      //0x118
    struct _KTRAP_FRAME* TrapFrame;                                         //0x120
    VOID* FirstArgument;                                                    //0x124
    union
    {
        VOID* CallbackStack;                                                //0x128
        ULONG CallbackDepth;                                                //0x128
    };
    VOID* ServiceTable;                                                     //0x12c
    UCHAR ApcStateIndex;                                                    //0x130
    CHAR BasePriority;                                                      //0x131
    CHAR PriorityDecrement;                                                 //0x132
    UCHAR Preempted;                                                        //0x133
    UCHAR AdjustReason;                                                     //0x134
    CHAR AdjustIncrement;                                                   //0x135
    UCHAR Spare01;                                                          //0x136
    CHAR Saturation;                                                        //0x137
    ULONG SystemCallNumber;                                                 //0x138
    ULONG FreezeCount;                                                      //0x13c
    ULONG UserAffinity;                                                     //0x140
    struct _KPROCESS* Process;                                              //0x144
    volatile ULONG Affinity;                                                //0x148
    struct _KAPC_STATE* ApcStatePointer[2];                                 //0x14c
    union
    {
        struct _KAPC_STATE SavedApcState;                                   //0x154
        struct
        {
            UCHAR SavedApcStateFill[23];                                    //0x154
            UCHAR Spare02;                                                  //0x16b
        };
    };
    CHAR SuspendCount;                                                      //0x16c
    UCHAR UserIdealProcessor;                                               //0x16d
    UCHAR Spare03;                                                          //0x16e
    UCHAR OtherPlatformFill;                                                //0x16f
    VOID* volatile Win32Thread;                                             //0x170
    VOID* StackBase;                                                        //0x174
    union
    {
        struct _KAPC SuspendApc;                                            //0x178
        struct
        {
            UCHAR SuspendApcFill0[1];                                       //0x178
            CHAR Spare04;                                                   //0x179
        };
        struct
        {
            UCHAR SuspendApcFill1[3];                                       //0x178
            UCHAR QuantumReset;                                             //0x17b
        };
        struct
        {
            UCHAR SuspendApcFill2[4];                                       //0x178
            ULONG KernelTime;                                               //0x17c
        };
        struct
        {
            UCHAR SuspendApcFill3[36];                                      //0x178
            struct _KPRCB* WaitPrcb;                                        //0x19c
        };
        struct
        {
            UCHAR SuspendApcFill4[40];                                      //0x178
            VOID* LegoData;                                                 //0x1a0
        };
        struct
        {
            UCHAR SuspendApcFill5[47];                                      //0x178
            UCHAR PowerState;                                               //0x1a7
        };
    };
    ULONG UserTime;                                                         //0x1a8
    union
    {
        struct _KSEMAPHORE SuspendSemaphore;                                //0x1ac
        UCHAR SuspendSemaphorefill[20];                                     //0x1ac
    };
    ULONG SListFaultCount;                                                  //0x1c0
    struct _LIST_ENTRY ThreadListEntry;                                     //0x1c4
    struct _LIST_ENTRY MutantListHead;                                      //0x1cc
    VOID* SListFaultAddress;                                                //0x1d4
    VOID* volatile MdlForLockedTeb;                                         //0x1d8
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

