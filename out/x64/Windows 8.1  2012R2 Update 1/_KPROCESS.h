#pragma once
/* ------------------ */

#include <_DISPATCHER_HEADER.h>
#include <_LIST_ENTRY.h>
#include <_KAFFINITY_EX.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_KEXECUTE_OPTIONS.h>
#include <_KSTACK_COUNT.h>
#include <_KSCHEDULING_GROUP.h>
#include <_KGDTENTRY64.h>
#include <_FAST_MUTEX.h>

//0x2c8 bytes (sizeof)
struct _KPROCESS
{
    struct _DISPATCHER_HEADER Header;                                       //0x0
    struct _LIST_ENTRY ProfileListHead;                                     //0x18
    ULONGLONG DirectoryTableBase;                                           //0x28
    struct _LIST_ENTRY ThreadListHead;                                      //0x30
    ULONG ProcessLock;                                                      //0x40
    ULONG Spare0;                                                           //0x44
    struct _KAFFINITY_EX Affinity;                                          //0x48
    struct _LIST_ENTRY ReadyListHead;                                       //0xf0
    struct _SINGLE_LIST_ENTRY SwapListEntry;                                //0x100
    volatile struct _KAFFINITY_EX ActiveProcessors;                         //0x108
    union
    {
        struct
        {
            LONG AutoAlignment:1;                                           //0x1b0
            LONG DisableBoost:1;                                            //0x1b0
            LONG DisableQuantum:1;                                          //0x1b0
            LONG AffinitySet:1;                                             //0x1b0
            ULONG DeepFreeze:1;                                             //0x1b0
            ULONG TimerVirtualization:1;                                    //0x1b0
            ULONG CheckStackExtents:1;                                      //0x1b0
            ULONG ActiveGroupsMask:20;                                      //0x1b0
            LONG ReservedFlags:5;                                           //0x1b0
        };
        volatile LONG ProcessFlags;                                         //0x1b0
    };
    CHAR BasePriority;                                                      //0x1b4
    CHAR QuantumReset;                                                      //0x1b5
    UCHAR Visited;                                                          //0x1b6
    union _KEXECUTE_OPTIONS Flags;                                          //0x1b7
    ULONG ThreadSeed[20];                                                   //0x1b8
    USHORT IdealNode[20];                                                   //0x208
    USHORT IdealGlobalNode;                                                 //0x230
    USHORT Spare1;                                                          //0x232
    unionvolatile _KSTACK_COUNT StackCount;                                 //0x234
    struct _LIST_ENTRY ProcessListEntry;                                    //0x238
    ULONGLONG CycleTime;                                                    //0x248
    ULONGLONG ContextSwitches;                                              //0x250
    struct _KSCHEDULING_GROUP* SchedulingGroup;                             //0x258
    ULONG FreezeCount;                                                      //0x260
    ULONG KernelTime;                                                       //0x264
    ULONG UserTime;                                                         //0x268
    USHORT LdtFreeSelectorHint;                                             //0x26c
    USHORT LdtTableLength;                                                  //0x26e
    union _KGDTENTRY64 LdtSystemDescriptor;                                 //0x270
    VOID* LdtBaseAddress;                                                   //0x280
    struct _FAST_MUTEX LdtProcessLock;                                      //0x288
    VOID* InstrumentationCallback;                                          //0x2c0
};
/* Used in */
// _EPROCESS
// _KAPC_STATE
// _KTHREAD

