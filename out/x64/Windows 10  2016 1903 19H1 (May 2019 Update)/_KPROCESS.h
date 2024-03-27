#pragma once
/* ------------------ */

#include <_DISPATCHER_HEADER.h>
#include <_LIST_ENTRY.h>
#include <_KAFFINITY_EX.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_KEXECUTE_OPTIONS.h>
#include <_KSTACK_COUNT.h>
#include <_KSCHEDULING_GROUP.h>

//0x2e0 bytes (sizeof)
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
            ULONG VaSpaceDeleted:1;                                         //0x1b8
            ULONG ReservedFlags:21;                                         //0x1b8
        };
        volatile LONG ProcessFlags;                                         //0x1b8
    };
    ULONG ActiveGroupsMask;                                                 //0x1bc
    CHAR BasePriority;                                                      //0x1c0
    CHAR QuantumReset;                                                      //0x1c1
    CHAR Visited;                                                           //0x1c2
    union _KEXECUTE_OPTIONS Flags;                                          //0x1c3
    USHORT ThreadSeed[20];                                                  //0x1c4
    USHORT IdealProcessor[20];                                              //0x1ec
    USHORT IdealNode[20];                                                   //0x214
    USHORT IdealGlobalNode;                                                 //0x23c
    USHORT Spare1;                                                          //0x23e
    unionvolatile _KSTACK_COUNT StackCount;                                 //0x240
    struct _LIST_ENTRY ProcessListEntry;                                    //0x248
    ULONGLONG CycleTime;                                                    //0x258
    ULONGLONG ContextSwitches;                                              //0x260
    struct _KSCHEDULING_GROUP* SchedulingGroup;                             //0x268
    ULONG FreezeCount;                                                      //0x270
    ULONG KernelTime;                                                       //0x274
    ULONG UserTime;                                                         //0x278
    ULONG ReadyTime;                                                        //0x27c
    ULONGLONG UserDirectoryTableBase;                                       //0x280
    UCHAR AddressPolicy;                                                    //0x288
    UCHAR Spare2[71];                                                       //0x289
    VOID* InstrumentationCallback;                                          //0x2d0
    union
    {
        ULONGLONG SecureHandle;                                             //0x2d8
        struct
        {
            ULONGLONG SecureProcess:1;                                      //0x2d8
            ULONGLONG Unused:1;                                             //0x2d8
        } Flags;                                                            //0x2d8
    } SecureState;                                                          //0x2d8
};
/* Used in */
// _EPROCESS
// _KAPC_STATE
// _KTHREAD

