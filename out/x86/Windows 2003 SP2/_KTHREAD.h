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

//0x1b8 bytes (sizeof)
struct _KTHREAD
{
    struct _DISPATCHER_HEADER Header;                                       //0x0
    struct _LIST_ENTRY MutantListHead;                                      //0x10
    VOID* InitialStack;                                                     //0x18
    VOID* StackLimit;                                                       //0x1c
    VOID* KernelStack;                                                      //0x20
    ULONG ThreadLock;                                                       //0x24
    union
    {
        struct _KAPC_STATE ApcState;                                        //0x28
        struct
        {
            UCHAR ApcStateFill[23];                                         //0x28
            UCHAR ApcQueueable;                                             //0x3f
        };
    };
    volatile UCHAR NextProcessor;                                           //0x40
    volatile UCHAR DeferredProcessor;                                       //0x41
    UCHAR AdjustReason;                                                     //0x42
    CHAR AdjustIncrement;                                                   //0x43
    ULONG ApcQueueLock;                                                     //0x44
    ULONG ContextSwitches;                                                  //0x48
    volatile UCHAR State;                                                   //0x4c
    UCHAR NpxState;                                                         //0x4d
    UCHAR WaitIrql;                                                         //0x4e
    CHAR WaitMode;                                                          //0x4f
    LONG WaitStatus;                                                        //0x50
    union
    {
        struct _KWAIT_BLOCK* WaitBlockList;                                 //0x54
        struct _KGATE* GateObject;                                          //0x54
    };
    UCHAR Alertable;                                                        //0x58
    UCHAR WaitNext;                                                         //0x59
    UCHAR WaitReason;                                                       //0x5a
    CHAR Priority;                                                          //0x5b
    UCHAR EnableStackSwap;                                                  //0x5c
    volatile UCHAR SwapBusy;                                                //0x5d
    UCHAR Alerted[2];                                                       //0x5e
    union
    {
        struct _LIST_ENTRY WaitListEntry;                                   //0x60
        struct _SINGLE_LIST_ENTRY SwapListEntry;                            //0x60
    };
    struct _KQUEUE* Queue;                                                  //0x68
    ULONG WaitTime;                                                         //0x6c
    union
    {
        struct
        {
            SHORT KernelApcDisable;                                         //0x70
            SHORT SpecialApcDisable;                                        //0x72
        };
        ULONG CombinedApcDisable;                                           //0x70
    };
    VOID* Teb;                                                              //0x74
    union
    {
        struct _KTIMER Timer;                                               //0x78
        UCHAR TimerFill[40];                                                //0x78
    };
    union
    {
        struct
        {
            ULONG AutoAlignment:1;                                          //0xa0
            ULONG DisableBoost:1;                                           //0xa0
            ULONG GuiThread:1;                                              //0xa0
            ULONG ReservedFlags:29;                                         //0xa0
        };
        LONG ThreadFlags;                                                   //0xa0
    };
    union
    {
        struct _KWAIT_BLOCK WaitBlock[4];                                   //0xa8
        struct
        {
            UCHAR WaitBlockFill0[23];                                       //0xa8
            UCHAR SystemAffinityActive;                                     //0xbf
        };
        struct
        {
            UCHAR WaitBlockFill1[47];                                       //0xa8
            CHAR PreviousMode;                                              //0xd7
        };
        struct
        {
            UCHAR WaitBlockFill2[71];                                       //0xa8
            UCHAR ResourceIndex;                                            //0xef
        };
        struct
        {
            UCHAR WaitBlockFill3[95];                                       //0xa8
            UCHAR LargeStack;                                               //0x107
        };
    };
    struct _LIST_ENTRY QueueListEntry;                                      //0x108
    struct _KTRAP_FRAME* TrapFrame;                                         //0x110
    VOID* CallbackStack;                                                    //0x114
    VOID* ServiceTable;                                                     //0x118
    UCHAR ApcStateIndex;                                                    //0x11c
    UCHAR IdealProcessor;                                                   //0x11d
    UCHAR Preempted;                                                        //0x11e
    UCHAR ProcessReadyQueue;                                                //0x11f
    UCHAR KernelStackResident;                                              //0x120
    CHAR BasePriority;                                                      //0x121
    CHAR PriorityDecrement;                                                 //0x122
    CHAR Saturation;                                                        //0x123
    ULONG UserAffinity;                                                     //0x124
    struct _KPROCESS* Process;                                              //0x128
    ULONG Affinity;                                                         //0x12c
    struct _KAPC_STATE* ApcStatePointer[2];                                 //0x130
    union
    {
        struct _KAPC_STATE SavedApcState;                                   //0x138
        struct
        {
            UCHAR SavedApcStateFill[23];                                    //0x138
            CHAR FreezeCount;                                               //0x14f
        };
    };
    CHAR SuspendCount;                                                      //0x150
    UCHAR UserIdealProcessor;                                               //0x151
    UCHAR CalloutActive;                                                    //0x152
    UCHAR Iopl;                                                             //0x153
    VOID* Win32Thread;                                                      //0x154
    VOID* StackBase;                                                        //0x158
    union
    {
        struct _KAPC SuspendApc;                                            //0x15c
        struct
        {
            UCHAR SuspendApcFill0[1];                                       //0x15c
            CHAR Quantum;                                                   //0x15d
        };
        struct
        {
            UCHAR SuspendApcFill1[3];                                       //0x15c
            UCHAR QuantumReset;                                             //0x15f
        };
        struct
        {
            UCHAR SuspendApcFill2[4];                                       //0x15c
            ULONG KernelTime;                                               //0x160
        };
        struct
        {
            UCHAR SuspendApcFill3[36];                                      //0x15c
            VOID* TlsArray;                                                 //0x180
        };
        struct
        {
            UCHAR SuspendApcFill4[40];                                      //0x15c
            VOID* LegoData;                                                 //0x184
        };
        struct
        {
            UCHAR SuspendApcFill5[47];                                      //0x15c
            UCHAR PowerState;                                               //0x18b
        };
    };
    ULONG UserTime;                                                         //0x18c
    union
    {
        struct _KSEMAPHORE SuspendSemaphore;                                //0x190
        UCHAR SuspendSemaphorefill[20];                                     //0x190
    };
    ULONG SListFaultCount;                                                  //0x1a4
    struct _LIST_ENTRY ThreadListEntry;                                     //0x1a8
    VOID* SListFaultAddress;                                                //0x1b0
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

