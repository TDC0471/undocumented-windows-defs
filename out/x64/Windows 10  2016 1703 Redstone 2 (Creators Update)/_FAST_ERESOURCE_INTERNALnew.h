#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KWAIT_CHAIN.h>

//0x68 bytes (sizeof)
struct _FAST_ERESOURCE_INTERNAL
{
    struct _LIST_ENTRY SystemResourcesList;                                 //0x0
    VOID* ReservedPointer;                                                  //0x10
    SHORT ActiveCount;                                                      //0x18
    USHORT Flag;                                                            //0x1a
    struct _KWAIT_CHAIN SharedWaiters;                                      //0x20
    struct _KWAIT_CHAIN ExclusiveWaiters;                                   //0x28
    struct _LIST_ENTRY OwnerEntryListHead;                                  //0x30
    ULONG ActiveEntries;                                                    //0x40
    ULONG ContentionCount;                                                  //0x44
    ULONG NumberOfSharedWaiters;                                            //0x48
    ULONG NumberOfExclusiveWaiters;                                         //0x4c
    VOID* ReservedWin64OnlyPointer;                                         //0x50
    union
    {
        VOID* Address;                                                      //0x58
        ULONGLONG CreatorBackTraceIndex;                                    //0x58
    };
    ULONGLONG SpinLock;                                                     //0x60
};
