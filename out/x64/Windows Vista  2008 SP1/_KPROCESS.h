#pragma once
/* ------------------ */

#include <_DISPATCHER_HEADER.h>
#include <_LIST_ENTRY.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_KEXECUTE_OPTIONS.h>

//0xc0 bytes (sizeof)
struct _KPROCESS
{
    struct _DISPATCHER_HEADER Header;                                       //0x0
    struct _LIST_ENTRY ProfileListHead;                                     //0x18
    ULONGLONG DirectoryTableBase;                                           //0x28
    ULONGLONG Unused0;                                                      //0x30
    USHORT IopmOffset;                                                      //0x38
    volatile ULONGLONG ActiveProcessors;                                    //0x40
    ULONG KernelTime;                                                       //0x48
    ULONG UserTime;                                                         //0x4c
    struct _LIST_ENTRY ReadyListHead;                                       //0x50
    struct _SINGLE_LIST_ENTRY SwapListEntry;                                //0x60
    VOID* InstrumentationCallback;                                          //0x68
    struct _LIST_ENTRY ThreadListHead;                                      //0x70
    ULONGLONG ProcessLock;                                                  //0x80
    ULONGLONG Affinity;                                                     //0x88
    union
    {
        struct
        {
            volatile LONG AutoAlignment:1;                                  //0x90
            volatile LONG DisableBoost:1;                                   //0x90
            volatile LONG DisableQuantum:1;                                 //0x90
            volatile LONG ReservedFlags:29;                                 //0x90
        };
        volatile LONG ProcessFlags;                                         //0x90
    };
    CHAR BasePriority;                                                      //0x94
    CHAR QuantumReset;                                                      //0x95
    UCHAR State;                                                            //0x96
    UCHAR ThreadSeed;                                                       //0x97
    UCHAR PowerState;                                                       //0x98
    UCHAR IdealNode;                                                        //0x99
    UCHAR Visited;                                                          //0x9a
    union
    {
        struct _KEXECUTE_OPTIONS Flags;                                     //0x9b
        UCHAR ExecuteOptions;                                               //0x9b
    };
    ULONGLONG StackCount;                                                   //0xa0
    struct _LIST_ENTRY ProcessListEntry;                                    //0xa8
    volatile ULONGLONG CycleTime;                                           //0xb8
};
/* Used in */
// _EPROCESS
// _KAPC_STATE
// _KTHREAD

