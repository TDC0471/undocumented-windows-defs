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
    VOID** DifPluginData;                                                   //0x60
    volatile ULONG CurrentPagedPoolAllocations;                             //0x68
    volatile ULONG CurrentNonPagedPoolAllocations;                          //0x6c
    ULONG PeakPagedPoolAllocations;                                         //0x70
    ULONG PeakNonPagedPoolAllocations;                                      //0x74
    volatile ULONGLONG PagedBytes;                                          //0x78
    volatile ULONGLONG NonPagedBytes;                                       //0x80
    ULONGLONG PeakPagedBytes;                                               //0x88
    ULONGLONG PeakNonPagedBytes;                                            //0x90
    ULONG RaiseIrqls;                                                       //0x98
    ULONG AcquireSpinLocks;                                                 //0x9c
    ULONG SynchronizeExecutions;                                            //0xa0
    ULONG AllocationsWithNoTag;                                             //0xa4
    ULONG AllocationsFailed;                                                //0xa8
    ULONG AllocationsFailedDeliberately;                                    //0xac
    ULONGLONG LockedBytes;                                                  //0xb0
    ULONGLONG PeakLockedBytes;                                              //0xb8
    ULONGLONG MappedLockedBytes;                                            //0xc0
    ULONGLONG PeakMappedLockedBytes;                                        //0xc8
    ULONGLONG MappedIoSpaceBytes;                                           //0xd0
    ULONGLONG PeakMappedIoSpaceBytes;                                       //0xd8
    ULONGLONG PagesForMdlBytes;                                             //0xe0
    ULONGLONG PeakPagesForMdlBytes;                                         //0xe8
    ULONGLONG ContiguousMemoryBytes;                                        //0xf0
    ULONGLONG PeakContiguousMemoryBytes;                                    //0xf8
    struct _LIST_ENTRY ContiguousMemoryListHead;                            //0x100
    volatile ULONG ExecutePoolTypes;                                        //0x110
    volatile ULONG ExecutePageProtections;                                  //0x114
    volatile ULONG ExecutePageMappings;                                     //0x118
    volatile ULONG ExecuteWriteSections;                                    //0x11c
    volatile ULONG SectionAlignmentFailures;                                //0x120
    volatile ULONG IATInExecutableSection;                                  //0x124
};
/* Used in */
// _VF_TARGET_DRIVER

