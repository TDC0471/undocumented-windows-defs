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
    UCHAR SeSigningLevel;                                                   //0x30
    union _SLIST_HEADER PoolPageHeaders;                                    //0x40
    union _SLIST_HEADER PoolTrackers;                                       //0x50
    volatile ULONG CurrentPagedPoolAllocations;                             //0x60
    volatile ULONG CurrentNonPagedPoolAllocations;                          //0x64
    ULONG PeakPagedPoolAllocations;                                         //0x68
    ULONG PeakNonPagedPoolAllocations;                                      //0x6c
    volatile ULONGLONG PagedBytes;                                          //0x70
    volatile ULONGLONG NonPagedBytes;                                       //0x78
    ULONGLONG PeakPagedBytes;                                               //0x80
    ULONGLONG PeakNonPagedBytes;                                            //0x88
    ULONG RaiseIrqls;                                                       //0x90
    ULONG AcquireSpinLocks;                                                 //0x94
    ULONG SynchronizeExecutions;                                            //0x98
    ULONG AllocationsWithNoTag;                                             //0x9c
    ULONG AllocationsFailed;                                                //0xa0
    ULONG AllocationsFailedDeliberately;                                    //0xa4
    ULONGLONG LockedBytes;                                                  //0xa8
    ULONGLONG PeakLockedBytes;                                              //0xb0
    ULONGLONG MappedLockedBytes;                                            //0xb8
    ULONGLONG PeakMappedLockedBytes;                                        //0xc0
    ULONGLONG MappedIoSpaceBytes;                                           //0xc8
    ULONGLONG PeakMappedIoSpaceBytes;                                       //0xd0
    ULONGLONG PagesForMdlBytes;                                             //0xd8
    ULONGLONG PeakPagesForMdlBytes;                                         //0xe0
    ULONGLONG ContiguousMemoryBytes;                                        //0xe8
    ULONGLONG PeakContiguousMemoryBytes;                                    //0xf0
    struct _LIST_ENTRY ContiguousMemoryListHead;                            //0xf8
    volatile ULONG ExecutePoolTypes;                                        //0x108
    volatile ULONG ExecutePageProtections;                                  //0x10c
    volatile ULONG ExecutePageMappings;                                     //0x110
    volatile ULONG ExecuteWriteSections;                                    //0x114
    volatile ULONG SectionAlignmentFailures;                                //0x118
    volatile ULONG IATInExecutableSection;                                  //0x11c
};
/* Used in */
// _VF_TARGET_DRIVER

