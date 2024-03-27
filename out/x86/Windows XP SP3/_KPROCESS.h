#pragma once
/* ------------------ */

#include <_DISPATCHER_HEADER.h>
#include <_LIST_ENTRY.h>
#include <_KGDTENTRY.h>
#include <_KIDTENTRY.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_KEXECUTE_OPTIONS.h>

//0x6c bytes (sizeof)
struct _KPROCESS
{
    struct _DISPATCHER_HEADER Header;                                       //0x0
    struct _LIST_ENTRY ProfileListHead;                                     //0x10
    ULONG DirectoryTableBase[2];                                            //0x18
    struct _KGDTENTRY LdtDescriptor;                                        //0x20
    struct _KIDTENTRY Int21Descriptor;                                      //0x28
    USHORT IopmOffset;                                                      //0x30
    UCHAR Iopl;                                                             //0x32
    UCHAR Unused;                                                           //0x33
    ULONG ActiveProcessors;                                                 //0x34
    ULONG KernelTime;                                                       //0x38
    ULONG UserTime;                                                         //0x3c
    struct _LIST_ENTRY ReadyListHead;                                       //0x40
    struct _SINGLE_LIST_ENTRY SwapListEntry;                                //0x48
    VOID* VdmTrapcHandler;                                                  //0x4c
    struct _LIST_ENTRY ThreadListHead;                                      //0x50
    ULONG ProcessLock;                                                      //0x58
    ULONG Affinity;                                                         //0x5c
    USHORT StackCount;                                                      //0x60
    CHAR BasePriority;                                                      //0x62
    CHAR ThreadQuantum;                                                     //0x63
    UCHAR AutoAlignment;                                                    //0x64
    UCHAR State;                                                            //0x65
    UCHAR ThreadSeed;                                                       //0x66
    UCHAR DisableBoost;                                                     //0x67
    UCHAR PowerState;                                                       //0x68
    UCHAR DisableQuantum;                                                   //0x69
    UCHAR IdealNode;                                                        //0x6a
    union
    {
        struct _KEXECUTE_OPTIONS Flags;                                     //0x6b
        UCHAR ExecuteOptions;                                               //0x6b
    };
};
/* Used in */
// _EPROCESS
// _KAPC_STATE

