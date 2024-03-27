#pragma once
/* ------------------ */

#include <_DISPATCHER_HEADER.h>
#include <_LIST_ENTRY.h>
#include <_KAPC_STATE.h>
#include <_KWAIT_BLOCK.h>
#include <_KGATE.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_KQUEUE.h>
#include <_KTIMER.h>
#include <_KTRAP_FRAME.h>
#include <_KPROCESS.h>
#include <_KAPC.h>
#include <_KSEMAPHORE.h>

//0x308 bytes (sizeof)
struct _KTHREAD
{
    struct _DISPATCHER_HEADER Header;                                       //0x0
    struct _LIST_ENTRY MutantListHead;                                      //0x18
    VOID* InitialStack;                                                     //0x28
    VOID* StackLimit;                                                       //0x30
    VOID* KernelStack;                                                      //0x38
    ULONGLONG ThreadLock;                                                   //0x40
    union
    {
        struct _KAPC_STATE ApcState;                                        //0x48
        struct
        {
            UCHAR ApcStateFill[43];                                         //0x48
            UCHAR ApcQueueable;                                             //0x73
            volatile UCHAR NextProcessor;                                   //0x74
            volatile UCHAR DeferredProcessor;                               //0x75
            UCHAR AdjustReason;                                             //0x76
            CHAR AdjustIncrement;                                           //0x77
        };
    };
    ULONGLONG ApcQueueLock;                                                 //0x78
    LONGLONG WaitStatus;                                                    //0x80
    union
    {
        struct _KWAIT_BLOCK* WaitBlockList;                                 //0x88
        struct _KGATE* GateObject;                                          //0x88
    };
    UCHAR Alertable;                                                        //0x90
    UCHAR WaitNext;                                                         //0x91
    UCHAR WaitReason;                                                       //0x92
    CHAR Priority;                                                          //0x93
    UCHAR EnableStackSwap;                                                  //0x94
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
                    ULONG AutoAlignment:1;                                  //0xf4
                    ULONG DisableBoost:1;                                   //0xf4
                    ULONG GuiThread:1;                                      //0xf4
                    ULONG ReservedFlags:29;                                 //0xf4
                };
                LONG ThreadFlags;                                           //0xf4
            };
        };
    };
    union
    {
        struct _KWAIT_BLOCK WaitBlock[4];                                   //0xf8
        struct
        {
            UCHAR WaitBlockFill0[43];                                       //0xf8
            UCHAR SystemAffinityActive;                                     //0x123
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
    VOID* CallbackStack;                                                    //0x1d0
    UCHAR ApcStateIndex;                                                    //0x1d8
    UCHAR IdealProcessor;                                                   //0x1d9
    UCHAR Preempted;                                                        //0x1da
    UCHAR ProcessReadyQueue;                                                //0x1db
    UCHAR KernelStackResident;                                              //0x1dc
    CHAR BasePriority;                                                      //0x1dd
    CHAR PriorityDecrement;                                                 //0x1de
    CHAR Saturation;                                                        //0x1df
    ULONGLONG UserAffinity;                                                 //0x1e0
    struct _KPROCESS* Process;                                              //0x1e8
    ULONGLONG Affinity;                                                     //0x1f0
    struct _KAPC_STATE* ApcStatePointer[2];                                 //0x1f8
    union
    {
        struct _KAPC_STATE SavedApcState;                                   //0x208
        struct
        {
            UCHAR SavedApcStateFill[43];                                    //0x208
            CHAR FreezeCount;                                               //0x233
            CHAR SuspendCount;                                              //0x234
            UCHAR UserIdealProcessor;                                       //0x235
            UCHAR CalloutActive;                                            //0x236
            UCHAR CodePatchInProgress;                                      //0x237
        };
    };
    VOID* Win32Thread;                                                      //0x238
    VOID* StackBase;                                                        //0x240
    union
    {
        struct _KAPC SuspendApc;                                            //0x248
        struct
        {
            UCHAR SuspendApcFill0[1];                                       //0x248
            CHAR Quantum;                                                   //0x249
        };
        struct
        {
            UCHAR SuspendApcFill1[3];                                       //0x248
            UCHAR QuantumReset;                                             //0x24b
        };
        struct
        {
            UCHAR SuspendApcFill2[4];                                       //0x248
            ULONG KernelTime;                                               //0x24c
        };
        struct
        {
            UCHAR SuspendApcFill3[64];                                      //0x248
            VOID* TlsArray;                                                 //0x288
        };
        struct
        {
            UCHAR SuspendApcFill4[72];                                      //0x248
            VOID* LegoData;                                                 //0x290
        };
        struct
        {
            UCHAR SuspendApcFill5[83];                                      //0x248
            UCHAR PowerState;                                               //0x29b
            ULONG UserTime;                                                 //0x29c
        };
    };
    union
    {
        struct _KSEMAPHORE SuspendSemaphore;                                //0x2a0
        struct
        {
            UCHAR SuspendSemaphorefill[28];                                 //0x2a0
            ULONG SListFaultCount;                                          //0x2bc
        };
    };
    struct _LIST_ENTRY ThreadListEntry;                                     //0x2c0
    VOID* SListFaultAddress;                                                //0x2d0
    LONGLONG ReadOperationCount;                                            //0x2d8
    LONGLONG WriteOperationCount;                                           //0x2e0
    LONGLONG OtherOperationCount;                                           //0x2e8
    LONGLONG ReadTransferCount;                                             //0x2f0
    LONGLONG WriteTransferCount;                                            //0x2f8
    LONGLONG OtherTransferCount;                                            //0x300
};
/* Used in */
// _CMHIVE
// _ETHREAD
// _FAST_MUTEX
// _KAPC
// _KGUARDED_MUTEX
// _KMUTANT
// _KPRCB
// _KWAIT_BLOCK
// _POP_DEVICE_SYS_STATE
// _VI_DEADLOCK_THREAD

