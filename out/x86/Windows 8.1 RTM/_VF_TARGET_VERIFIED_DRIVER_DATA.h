#pragma once
/* ------------------ */

#include <_VF_SUSPECT_DRIVER_ENTRY.h>
#include <_LIST_ENTRY.h>
#include <_SLIST_HEADER.h>

//0x90 bytes (sizeof)
struct _VF_TARGET_VERIFIED_DRIVER_DATA
{
    struct _VF_SUSPECT_DRIVER_ENTRY* SuspectDriverEntry;                    //0x0
    VOID* WMICallback;                                                      //0x4
    struct _LIST_ENTRY EtwHandlesListHead;                                  //0x8
    union
    {
        struct
        {
            ULONG MissedEtwRegistration:1;                                  //0x10
            ULONG Spare:31;                                                 //0x10
        } Flags;                                                            //0x10
        ULONG Whole;                                                        //0x10
    } u1;                                                                   //0x10
    ULONG Signature;                                                        //0x14
    union _SLIST_HEADER PoolPageHeaders;                                    //0x18
    union _SLIST_HEADER PoolTrackers;                                       //0x20
    volatile ULONG CurrentPagedPoolAllocations;                             //0x28
    volatile ULONG CurrentNonPagedPoolAllocations;                          //0x2c
    ULONG PeakPagedPoolAllocations;                                         //0x30
    ULONG PeakNonPagedPoolAllocations;                                      //0x34
    volatile ULONG PagedBytes;                                              //0x38
    volatile ULONG NonPagedBytes;                                           //0x3c
    ULONG PeakPagedBytes;                                                   //0x40
    ULONG PeakNonPagedBytes;                                                //0x44
    ULONG RaiseIrqls;                                                       //0x48
    ULONG AcquireSpinLocks;                                                 //0x4c
    ULONG SynchronizeExecutions;                                            //0x50
    ULONG AllocationsWithNoTag;                                             //0x54
    ULONG AllocationsFailed;                                                //0x58
    ULONG AllocationsFailedDeliberately;                                    //0x5c
    ULONG LockedBytes;                                                      //0x60
    ULONG PeakLockedBytes;                                                  //0x64
    ULONG MappedLockedBytes;                                                //0x68
    ULONG PeakMappedLockedBytes;                                            //0x6c
    ULONG MappedIoSpaceBytes;                                               //0x70
    ULONG PeakMappedIoSpaceBytes;                                           //0x74
    ULONG PagesForMdlBytes;                                                 //0x78
    ULONG PeakPagesForMdlBytes;                                             //0x7c
    ULONG ContiguousMemoryBytes;                                            //0x80
    ULONG PeakContiguousMemoryBytes;                                        //0x84
    struct _LIST_ENTRY ContiguousMemoryListHead;                            //0x88
};
/* Used in */
// _VF_TARGET_DRIVER

