#pragma once
/* ------------------ */

#include <_DISPATCHER_HEADER.h>
#include <_LIST_ENTRY.h>
#include <_KAFFINITY_EX.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_KEXECUTE_OPTIONS.h>
#include <_KSTACK_COUNT.h>
#include <_KSCHEDULING_GROUP.h>

//0x2d8 bytes (sizeof)
struct _KPROCESS
{
    struct _DISPATCHER_HEADER Header;                                       //0x0
    struct _LIST_ENTRY ProfileListHead;                                     //0x18
    ULONGLONG DirectoryTableBase;                                           //0x28
    struct _LIST_ENTRY ThreadListHead;                                      //0x30
    ULONG ProcessLock;                                                      //0x40
    ULONG ProcessTimerDelay;                                                //0x44
    ULONGLONG DeepFreezeStartTime;                                          //0x48
    struct _KAFFINITY_EX Affinity;                                          //0x50
    struct _LIST_ENTRY ReadyListHead;                                       //0xf8
    struct _SINGLE_LIST_ENTRY SwapListEntry;                                //0x108
    volatile struct _KAFFINITY_EX ActiveProcessors;                         //0x110
    union
    {
        struct
        {
            ULONG AutoAlignment:1;                                          //0x1b8
            ULONG DisableBoost:1;                                           //0x1b8
            ULONG DisableQuantum:1;                                         //0x1b8
            ULONG DeepFreeze:1;                                             //0x1b8
            ULONG TimerVirtualization:1;                                    //0x1b8
            ULONG CheckStackExtents:1;                                      //0x1b8
            ULONG CacheIsolationEnabled:1;                                  //0x1b8
            ULONG PpmPolicy:3;                                              //0x1b8
            ULONG ActiveGroupsMask:20;                                      //0x1b8
            ULONG VaSpaceDeleted:1;                                         //0x1b8
            ULONG ReservedFlags:1;                                          //0x1b8
        };
        volatile LONG ProcessFlags;                                         //0x1b8
    };
    CHAR BasePriority;                                                      //0x1bc
    CHAR QuantumReset;                                                      //0x1bd
    CHAR Visited;                                                           //0x1be
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
    ULONG ReadyTime;                                                        //0x274
    ULONGLONG UserDirectoryTableBase;                                       //0x278
    UCHAR AddressPolicy;                                                    //0x280
    UCHAR Spare2[71];                                                       //0x281
    VOID* InstrumentationCallback;                                          //0x2c8
    union
    {
        ULONGLONG SecureHandle;                                             //0x2d0
        struct
        {
            ULONGLONG SecureProcess:1;                                      //0x2d0
            ULONGLONG Unused:1;                                             //0x2d0
        } Flags;                                                            //0x2d0
    } SecureState;                                                          //0x2d0
};
/* Used in */
// _EPROCESS
// _KAPC_STATE
// _KTHREAD

