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

//0xa0 bytes (sizeof)
struct _KPROCESS
{
    struct _DISPATCHER_HEADER Header;                                       //0x0
    struct _LIST_ENTRY ProfileListHead;                                     //0x10
    ULONG DirectoryTableBase;                                               //0x18
    struct _KGDTENTRY LdtDescriptor;                                        //0x1c
    struct _KIDTENTRY Int21Descriptor;                                      //0x24
    struct _LIST_ENTRY ThreadListHead;                                      //0x2c
    ULONG ProcessLock;                                                      //0x34
    struct _KAFFINITY_EX Affinity;                                          //0x38
    struct _LIST_ENTRY ReadyListHead;                                       //0x44
    struct _SINGLE_LIST_ENTRY SwapListEntry;                                //0x4c
    volatile struct _KAFFINITY_EX ActiveProcessors;                         //0x50
    union
    {
        struct
        {
            LONG AutoAlignment:1;                                           //0x5c
            LONG DisableBoost:1;                                            //0x5c
            LONG DisableQuantum:1;                                          //0x5c
            LONG AffinitySet:1;                                             //0x5c
            ULONG DeepFreeze:1;                                             //0x5c
            ULONG TimerVirtualization:1;                                    //0x5c
            ULONG ActiveGroupsMask:1;                                       //0x5c
            LONG ReservedFlags:25;                                          //0x5c
        };
        volatile LONG ProcessFlags;                                         //0x5c
    };
    CHAR BasePriority;                                                      //0x60
    CHAR QuantumReset;                                                      //0x61
    UCHAR Visited;                                                          //0x62
    union _KEXECUTE_OPTIONS Flags;                                          //0x63
    ULONG ThreadSeed[1];                                                    //0x64
    USHORT IdealNode[1];                                                    //0x68
    USHORT IdealGlobalNode;                                                 //0x6a
    USHORT Spare1;                                                          //0x6c
    USHORT IopmOffset;                                                      //0x6e
    struct _KSCHEDULING_GROUP* SchedulingGroup;                             //0x70
    unionvolatile _KSTACK_COUNT StackCount;                                 //0x74
    struct _LIST_ENTRY ProcessListEntry;                                    //0x78
    ULONGLONG CycleTime;                                                    //0x80
    ULONGLONG ContextSwitches;                                              //0x88
    ULONG FreezeCount;                                                      //0x90
    ULONG KernelTime;                                                       //0x94
    ULONG UserTime;                                                         //0x98
    VOID* VdmTrapcHandler;                                                  //0x9c
};
/* Used in */
// _EPROCESS
// _KAPC_STATE
// _KTHREAD

