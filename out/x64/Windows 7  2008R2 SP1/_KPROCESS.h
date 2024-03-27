#pragma once
/* ------------------ */

#include <_DISPATCHER_HEADER.h>
#include <_LIST_ENTRY.h>
#include <_KAFFINITY_EX.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_KEXECUTE_OPTIONS.h>
#include <_KSTACK_COUNT.h>
#include <_KGDTENTRY64.h>
#include <_KGUARDED_MUTEX.h>

//0x160 bytes (sizeof)
struct _KPROCESS
{
    struct _DISPATCHER_HEADER Header;                                       //0x0
    struct _LIST_ENTRY ProfileListHead;                                     //0x18
    ULONGLONG DirectoryTableBase;                                           //0x28
    struct _LIST_ENTRY ThreadListHead;                                      //0x30
    ULONGLONG ProcessLock;                                                  //0x40
    struct _KAFFINITY_EX Affinity;                                          //0x48
    struct _LIST_ENTRY ReadyListHead;                                       //0x70
    struct _SINGLE_LIST_ENTRY SwapListEntry;                                //0x80
    volatile struct _KAFFINITY_EX ActiveProcessors;                         //0x88
    union
    {
        struct
        {
            volatile LONG AutoAlignment:1;                                  //0xb0
            volatile LONG DisableBoost:1;                                   //0xb0
            volatile LONG DisableQuantum:1;                                 //0xb0
            volatile ULONG ActiveGroupsMask:4;                              //0xb0
            volatile LONG ReservedFlags:25;                                 //0xb0
        };
        volatile LONG ProcessFlags;                                         //0xb0
    };
    CHAR BasePriority;                                                      //0xb4
    CHAR QuantumReset;                                                      //0xb5
    UCHAR Visited;                                                          //0xb6
    UCHAR Unused3;                                                          //0xb7
    ULONG ThreadSeed[4];                                                    //0xb8
    USHORT IdealNode[4];                                                    //0xc8
    USHORT IdealGlobalNode;                                                 //0xd0
    union _KEXECUTE_OPTIONS Flags;                                          //0xd2
    UCHAR Unused1;                                                          //0xd3
    ULONG Unused2;                                                          //0xd4
    ULONG Unused4;                                                          //0xd8
    union _KSTACK_COUNT StackCount;                                         //0xdc
    struct _LIST_ENTRY ProcessListEntry;                                    //0xe0
    volatile ULONGLONG CycleTime;                                           //0xf0
    ULONG KernelTime;                                                       //0xf8
    ULONG UserTime;                                                         //0xfc
    VOID* InstrumentationCallback;                                          //0x100
    union _KGDTENTRY64 LdtSystemDescriptor;                                 //0x108
    VOID* LdtBaseAddress;                                                   //0x118
    struct _KGUARDED_MUTEX LdtProcessLock;                                  //0x120
    USHORT LdtFreeSelectorHint;                                             //0x158
    USHORT LdtTableLength;                                                  //0x15a
};
/* Used in */
// _EPROCESS
// _KAPC_STATE
// _KTHREAD

