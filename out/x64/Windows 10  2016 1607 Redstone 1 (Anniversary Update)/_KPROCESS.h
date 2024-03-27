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

//0x2d8 bytes (sizeof)
struct _KPROCESS
{
    struct _DISPATCHER_HEADER Header;                                       //0x0
    struct _LIST_ENTRY ProfileListHead;                                     //0x18
    ULONGLONG DirectoryTableBase;                                           //0x28
    struct _LIST_ENTRY ThreadListHead;                                      //0x30
    ULONG ProcessLock;                                                      //0x40
    ULONG Spare0;                                                           //0x44
    ULONGLONG DeepFreezeStartTime;                                          //0x48
    struct _KAFFINITY_EX Affinity;                                          //0x50
    struct _LIST_ENTRY ReadyListHead;                                       //0xf8
    struct _SINGLE_LIST_ENTRY SwapListEntry;                                //0x108
    volatile struct _KAFFINITY_EX ActiveProcessors;                         //0x110
    union
    {
        struct
        {
            LONG AutoAlignment:1;                                           //0x1b8
            LONG DisableBoost:1;                                            //0x1b8
            LONG DisableQuantum:1;                                          //0x1b8
            ULONG DeepFreeze:1;                                             //0x1b8
            ULONG TimerVirtualization:1;                                    //0x1b8
            ULONG CheckStackExtents:1;                                      //0x1b8
            ULONG SpareFlags0:2;                                            //0x1b8
            ULONG ActiveGroupsMask:20;                                      //0x1b8
            LONG ReservedFlags:4;                                           //0x1b8
        };
        volatile LONG ProcessFlags;                                         //0x1b8
    };
    CHAR BasePriority;                                                      //0x1bc
    CHAR QuantumReset;                                                      //0x1bd
    UCHAR Visited;                                                          //0x1be
    union _KEXECUTE_OPTIONS Flags;                                          //0x1bf
    ULONG ThreadSeed[20];                                                   //0x1c0
    USHORT IdealNode[20];                                                   //0x210
    USHORT IdealGlobalNode;                                                 //0x238
    USHORT Spare1;                                                          //0x23a
    unionvolatile _KSTACK_COUNT StackCount;                                 //0x23c
    struct _LIST_ENTRY ProcessListEntry;                                    //0x240
    ULONGLONG CycleTime;                                                    //0x250
    ULONGLONG ContextSwitches;                                              //0x258
    struct _KSCHEDULING_GROUP* SchedulingGroup;                             //0x260
    ULONG FreezeCount;                                                      //0x268
    ULONG KernelTime;                                                       //0x26c
    ULONG UserTime;                                                         //0x270
    USHORT LdtFreeSelectorHint;                                             //0x274
    USHORT LdtTableLength;                                                  //0x276
    union _KGDTENTRY64 LdtSystemDescriptor;                                 //0x278
    VOID* LdtBaseAddress;                                                   //0x288
    struct _FAST_MUTEX LdtProcessLock;                                      //0x290
    VOID* InstrumentationCallback;                                          //0x2c8
    ULONGLONG SecurePid;                                                    //0x2d0
};
/* Used in */
// _EPROCESS
// _KAPC_STATE
// _KTHREAD

