#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KWAIT_CHAIN.h>

//0x38 bytes (sizeof)
struct _FAST_ERESOURCE_INTERNAL
{
    struct _LIST_ENTRY SystemResourcesList;                                 //0x0
    VOID* ReservedPointer;                                                  //0x8
    SHORT ActiveCount;                                                      //0xc
    USHORT Flag;                                                            //0xe
    struct _KWAIT_CHAIN SharedWaiters;                                      //0x10
    struct _KWAIT_CHAIN ExclusiveWaiters;                                   //0x14
    struct _LIST_ENTRY OwnerEntryListHead;                                  //0x18
    ULONG ActiveEntries;                                                    //0x20
    ULONG ContentionCount;                                                  //0x24
    ULONG NumberOfSharedWaiters;                                            //0x28
    ULONG NumberOfExclusiveWaiters;                                         //0x2c
    union
    {
        VOID* Address;                                                      //0x30
        ULONG CreatorBackTraceIndex;                                        //0x30
    };
    ULONG SpinLock;                                                         //0x34
};
