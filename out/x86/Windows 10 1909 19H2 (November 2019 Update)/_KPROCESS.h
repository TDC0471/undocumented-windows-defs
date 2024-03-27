#pragma once
/* ------------------ */

#include <_DISPATCHER_HEADER.h>
#include <_LIST_ENTRY.h>
#include <_KGDTENTRY.h>
#include <_KIDTENTRY.h>
#include <_KAFFINITY_EX.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_KEXECUTE_OPTIONS.h>
#include <_KSCHEDULING_GROUP.h>
#include <_KSTACK_COUNT.h>

//0xb0 bytes (sizeof)
struct _KPROCESS
{
    struct _DISPATCHER_HEADER Header;                                       //0x0
    struct _LIST_ENTRY ProfileListHead;                                     //0x10
    ULONG DirectoryTableBase;                                               //0x18
    struct _KGDTENTRY LdtDescriptor;                                        //0x1c
    struct _KIDTENTRY Int21Descriptor;                                      //0x24
    struct _LIST_ENTRY ThreadListHead;                                      //0x2c
    ULONG ProcessLock;                                                      //0x34
    ULONGLONG DeepFreezeStartTime;                                          //0x38
    struct _KAFFINITY_EX Affinity;                                          //0x40
    struct _LIST_ENTRY ReadyListHead;                                       //0x4c
    struct _SINGLE_LIST_ENTRY SwapListEntry;                                //0x54
    volatile struct _KAFFINITY_EX ActiveProcessors;                         //0x58
    union
    {
        struct
        {
            ULONG AutoAlignment:1;                                          //0x64
            ULONG DisableBoost:1;                                           //0x64
            ULONG DisableQuantum:1;                                         //0x64
            ULONG DeepFreeze:1;                                             //0x64
            ULONG TimerVirtualization:1;                                    //0x64
            ULONG CheckStackExtents:1;                                      //0x64
            ULONG CacheIsolationEnabled:1;                                  //0x64
            ULONG PpmPolicy:3;                                              //0x64
            ULONG VaSpaceDeleted:1;                                         //0x64
            ULONG ReservedFlags:21;                                         //0x64
        };
        volatile LONG ProcessFlags;                                         //0x64
    };
    CHAR BasePriority;                                                      //0x68
    CHAR QuantumReset;                                                      //0x69
    CHAR Visited;                                                           //0x6a
    union _KEXECUTE_OPTIONS Flags;                                          //0x6b
    USHORT ThreadSeed[1];                                                   //0x6c
    USHORT IdealProcessor[1];                                               //0x6e
    USHORT IdealNode[1];                                                    //0x70
    USHORT IdealGlobalNode;                                                 //0x72
    USHORT Spare1;                                                          //0x74
    USHORT IopmOffset;                                                      //0x76
    struct _KSCHEDULING_GROUP* SchedulingGroup;                             //0x78
    unionvolatile _KSTACK_COUNT StackCount;                                 //0x7c
    struct _LIST_ENTRY ProcessListEntry;                                    //0x80
    ULONGLONG CycleTime;                                                    //0x88
    ULONGLONG ContextSwitches;                                              //0x90
    ULONG FreezeCount;                                                      //0x98
    ULONG KernelTime;                                                       //0x9c
    ULONG UserTime;                                                         //0xa0
    ULONG ReadyTime;                                                        //0xa4
    VOID* VdmTrapcHandler;                                                  //0xa8
    ULONG ProcessTimerDelay;                                                //0xac
};
/* Used in */
// _EPROCESS
// _KAPC_STATE
// _KTHREAD

