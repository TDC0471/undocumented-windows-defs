#pragma once
/* ------------------ */

#include <_DISPATCHER_HEADER.h>
#include <_LIST_ENTRY.h>
#include <_KAPC_STATE.h>
#include <_KWAIT_BLOCK.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_KQUEUE.h>
#include <_KTIMER.h>
#include <_KTRAP_FRAME.h>
#include <_KAPC.h>
#include <_KSEMAPHORE.h>

//0x1c0 bytes (sizeof)
struct _KTHREAD
{
    struct _DISPATCHER_HEADER Header;                                       //0x0
    struct _LIST_ENTRY MutantListHead;                                      //0x10
    VOID* InitialStack;                                                     //0x18
    VOID* StackLimit;                                                       //0x1c
    VOID* Teb;                                                              //0x20
    VOID* TlsArray;                                                         //0x24
    VOID* KernelStack;                                                      //0x28
    UCHAR DebugActive;                                                      //0x2c
    UCHAR State;                                                            //0x2d
    UCHAR Alerted[2];                                                       //0x2e
    UCHAR Iopl;                                                             //0x30
    UCHAR NpxState;                                                         //0x31
    CHAR Saturation;                                                        //0x32
    CHAR Priority;                                                          //0x33
    struct _KAPC_STATE ApcState;                                            //0x34
    ULONG ContextSwitches;                                                  //0x4c
    UCHAR IdleSwapBlock;                                                    //0x50
    UCHAR Spare0[3];                                                        //0x51
    LONG WaitStatus;                                                        //0x54
    UCHAR WaitIrql;                                                         //0x58
    CHAR WaitMode;                                                          //0x59
    UCHAR WaitNext;                                                         //0x5a
    UCHAR WaitReason;                                                       //0x5b
    struct _KWAIT_BLOCK* WaitBlockList;                                     //0x5c
    union
    {
        struct _LIST_ENTRY WaitListEntry;                                   //0x60
        struct _SINGLE_LIST_ENTRY SwapListEntry;                            //0x60
    };
    ULONG WaitTime;                                                         //0x68
    CHAR BasePriority;                                                      //0x6c
    UCHAR DecrementCount;                                                   //0x6d
    CHAR PriorityDecrement;                                                 //0x6e
    CHAR Quantum;                                                           //0x6f
    struct _KWAIT_BLOCK WaitBlock[4];                                       //0x70
    VOID* LegoData;                                                         //0xd0
    ULONG KernelApcDisable;                                                 //0xd4
    ULONG UserAffinity;                                                     //0xd8
    UCHAR SystemAffinityActive;                                             //0xdc
    UCHAR PowerState;                                                       //0xdd
    UCHAR NpxIrql;                                                          //0xde
    UCHAR InitialNode;                                                      //0xdf
    VOID* ServiceTable;                                                     //0xe0
    struct _KQUEUE* Queue;                                                  //0xe4
    ULONG ApcQueueLock;                                                     //0xe8
    struct _KTIMER Timer;                                                   //0xf0
    struct _LIST_ENTRY QueueListEntry;                                      //0x118
    ULONG SoftAffinity;                                                     //0x120
    ULONG Affinity;                                                         //0x124
    UCHAR Preempted;                                                        //0x128
    UCHAR ProcessReadyQueue;                                                //0x129
    UCHAR KernelStackResident;                                              //0x12a
    UCHAR NextProcessor;                                                    //0x12b
    VOID* CallbackStack;                                                    //0x12c
    VOID* Win32Thread;                                                      //0x130
    struct _KTRAP_FRAME* TrapFrame;                                         //0x134
    struct _KAPC_STATE* ApcStatePointer[2];                                 //0x138
    CHAR PreviousMode;                                                      //0x140
    UCHAR EnableStackSwap;                                                  //0x141
    UCHAR LargeStack;                                                       //0x142
    UCHAR ResourceIndex;                                                    //0x143
    ULONG KernelTime;                                                       //0x144
    ULONG UserTime;                                                         //0x148
    struct _KAPC_STATE SavedApcState;                                       //0x14c
    UCHAR Alertable;                                                        //0x164
    UCHAR ApcStateIndex;                                                    //0x165
    UCHAR ApcQueueable;                                                     //0x166
    UCHAR AutoAlignment;                                                    //0x167
    VOID* StackBase;                                                        //0x168
    struct _KAPC SuspendApc;                                                //0x16c
    struct _KSEMAPHORE SuspendSemaphore;                                    //0x19c
    struct _LIST_ENTRY ThreadListEntry;                                     //0x1b0
    CHAR FreezeCount;                                                       //0x1b8
    CHAR SuspendCount;                                                      //0x1b9
    UCHAR IdealProcessor;                                                   //0x1ba
    UCHAR DisableBoost;                                                     //0x1bb
};
/* Used in */
// _ETHREAD
// _FAST_MUTEX
// _KAPC
// _KMUTANT
// _KPRCB
// _KWAIT_BLOCK
// _POP_DEVICE_SYS_STATE
// _VI_DEADLOCK_THREAD

