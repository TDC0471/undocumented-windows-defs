#pragma once
/* ------------------ */

#include <_VF_SUSPECT_DRIVER_ENTRY.h>
#include <_LIST_ENTRY.h>
#include <_SLIST_HEADER.h>

//0x130 bytes (sizeof)
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
            ULONG IsBootDriver:1;                                           //0x20
            ULONG Spare:30;                                                 //0x20
        } Flags;                                                            //0x20
        ULONG Whole;                                                        //0x20
    } u1;                                                                   //0x20
    ULONGLONG Signature;                                                    //0x28
    UCHAR SeSigningLevel;                                                   //0x30
    union _SLIST_HEADER PoolPageHeaders;                                    //0x40
    union _SLIST_HEADER PoolTrackers;                                       //0x50
    struct _LIST_ENTRY DifPluginPerDriverDataContextHead;                   //0x60
    volatile ULONG CurrentPagedPoolAllocations;                             //0x70
    volatile ULONG CurrentNonPagedPoolAllocations;                          //0x74
    ULONG PeakPagedPoolAllocations;                                         //0x78
    ULONG PeakNonPagedPoolAllocations;                                      //0x7c
    volatile ULONGLONG PagedBytes;                                          //0x80
    volatile ULONGLONG NonPagedBytes;                                       //0x88
    ULONGLONG PeakPagedBytes;                                               //0x90
    ULONGLONG PeakNonPagedBytes;                                            //0x98
    ULONG RaiseIrqls;                                                       //0xa0
    ULONG AcquireSpinLocks;                                                 //0xa4
    ULONG SynchronizeExecutions;                                            //0xa8
    ULONG AllocationsWithNoTag;                                             //0xac
    ULONG AllocationsFailed;                                                //0xb0
    ULONG AllocationsFailedDeliberately;                                    //0xb4
    ULONGLONG LockedBytes;                                                  //0xb8
    ULONGLONG PeakLockedBytes;                                              //0xc0
    ULONGLONG MappedLockedBytes;                                            //0xc8
    ULONGLONG PeakMappedLockedBytes;                                        //0xd0
    ULONGLONG MappedIoSpaceBytes;                                           //0xd8
    ULONGLONG PeakMappedIoSpaceBytes;                                       //0xe0
    ULONGLONG PagesForMdlBytes;                                             //0xe8
    ULONGLONG PeakPagesForMdlBytes;                                         //0xf0
    ULONGLONG ContiguousMemoryBytes;                                        //0xf8
    ULONGLONG PeakContiguousMemoryBytes;                                    //0x100
    struct _LIST_ENTRY ContiguousMemoryListHead;                            //0x108
    volatile ULONG ExecutePoolTypes;                                        //0x118
    volatile ULONG ExecutePageProtections;                                  //0x11c
    volatile ULONG ExecutePageMappings;                                     //0x120
    volatile ULONG ExecuteWriteSections;                                    //0x124
    volatile ULONG SectionAlignmentFailures;                                //0x128
    volatile ULONG IATInExecutableSection;                                  //0x12c
};
/* Used in */
// _VF_TARGET_DRIVER

