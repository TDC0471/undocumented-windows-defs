#pragma once
/* ------------------ */

#include <_VF_SUSPECT_DRIVER_ENTRY.h>
#include <_LIST_ENTRY.h>
#include <_SLIST_HEADER.h>

//0x120 bytes (sizeof)
struct _VF_TARGET_VERIFIED_DRIVER_DATA
{
    struct _VF_SUSPECT_DRIVER_ENTRY* SuspectDriverEntry;                    //0x0
    VOID* WMICallback;                                                      //0x8
    struct _LIST_ENTRY EtwHandlesListHead;                                  //0x10
    union
    {
        struct
        {
            ULONG MissedEtwRegistration:1;                                  //0x20
            ULONG Spare:31;                                                 //0x20
        } Flags;                                                            //0x20
        ULONG Whole;                                                        //0x20
    } u1;                                                                   //0x20
    ULONGLONG Signature;                                                    //0x28
    union _SLIST_HEADER PoolPageHeaders;                                    //0x30
    union _SLIST_HEADER PoolTrackers;                                       //0x40
    volatile ULONG CurrentPagedPoolAllocations;                             //0x50
    volatile ULONG CurrentNonPagedPoolAllocations;                          //0x54
    ULONG PeakPagedPoolAllocations;                                         //0x58
    ULONG PeakNonPagedPoolAllocations;                                      //0x5c
    volatile ULONGLONG PagedBytes;                                          //0x60
    volatile ULONGLONG NonPagedBytes;                                       //0x68
    ULONGLONG PeakPagedBytes;                                               //0x70
    ULONGLONG PeakNonPagedBytes;                                            //0x78
    ULONG RaiseIrqls;                                                       //0x80
    ULONG AcquireSpinLocks;                                                 //0x84
    ULONG SynchronizeExecutions;                                            //0x88
    ULONG AllocationsWithNoTag;                                             //0x8c
    ULONG AllocationsFailed;                                                //0x90
    ULONG AllocationsFailedDeliberately;                                    //0x94
    ULONGLONG LockedBytes;                                                  //0x98
    ULONGLONG PeakLockedBytes;                                              //0xa0
    ULONGLONG MappedLockedBytes;                                            //0xa8
    ULONGLONG PeakMappedLockedBytes;                                        //0xb0
    ULONGLONG MappedIoSpaceBytes;                                           //0xb8
    ULONGLONG PeakMappedIoSpaceBytes;                                       //0xc0
    ULONGLONG PagesForMdlBytes;                                             //0xc8
    ULONGLONG PeakPagesForMdlBytes;                                         //0xd0
    ULONGLONG ContiguousMemoryBytes;                                        //0xd8
    ULONGLONG PeakContiguousMemoryBytes;                                    //0xe0
    struct _LIST_ENTRY ContiguousMemoryListHead;                            //0xe8
    volatile ULONG ExecutePoolTypes;                                        //0xf8
    volatile ULONG ExecutePageProtections;                                  //0xfc
    volatile ULONG ExecutePageMappings;                                     //0x100
    volatile ULONG ExecuteWriteSections;                                    //0x104
    volatile ULONG SectionAlignmentFailures;                                //0x108
    volatile ULONG UnsupportedRelocs;                                       //0x10c
    volatile ULONG IATInExecutableSection;                                  //0x110
};
/* Used in */
// _VF_TARGET_DRIVER

