#pragma once
/* ------------------ */

#include <_VF_SUSPECT_DRIVER_ENTRY.h>
#include <_LIST_ENTRY.h>
#include <_SLIST_HEADER.h>

//0xb8 bytes (sizeof)
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
            ULONG IsBootDriver:1;                                           //0x10
            ULONG Spare:30;                                                 //0x10
        } Flags;                                                            //0x10
        ULONG Whole;                                                        //0x10
    } u1;                                                                   //0x10
    ULONG Signature;                                                        //0x14
    UCHAR SeSigningLevel;                                                   //0x18
    union _SLIST_HEADER PoolPageHeaders;                                    //0x20
    union _SLIST_HEADER PoolTrackers;                                       //0x28
    VOID** DifPluginData;                                                   //0x30
    volatile ULONG CurrentPagedPoolAllocations;                             //0x34
    volatile ULONG CurrentNonPagedPoolAllocations;                          //0x38
    ULONG PeakPagedPoolAllocations;                                         //0x3c
    ULONG PeakNonPagedPoolAllocations;                                      //0x40
    volatile ULONG PagedBytes;                                              //0x44
    volatile ULONG NonPagedBytes;                                           //0x48
    ULONG PeakPagedBytes;                                                   //0x4c
    ULONG PeakNonPagedBytes;                                                //0x50
    ULONG RaiseIrqls;                                                       //0x54
    ULONG AcquireSpinLocks;                                                 //0x58
    ULONG SynchronizeExecutions;                                            //0x5c
    ULONG AllocationsWithNoTag;                                             //0x60
    ULONG AllocationsFailed;                                                //0x64
    ULONG AllocationsFailedDeliberately;                                    //0x68
    ULONG LockedBytes;                                                      //0x6c
    ULONG PeakLockedBytes;                                                  //0x70
    ULONG MappedLockedBytes;                                                //0x74
    ULONG PeakMappedLockedBytes;                                            //0x78
    ULONG MappedIoSpaceBytes;                                               //0x7c
    ULONG PeakMappedIoSpaceBytes;                                           //0x80
    ULONG PagesForMdlBytes;                                                 //0x84
    ULONG PeakPagesForMdlBytes;                                             //0x88
    ULONG ContiguousMemoryBytes;                                            //0x8c
    ULONG PeakContiguousMemoryBytes;                                        //0x90
    struct _LIST_ENTRY ContiguousMemoryListHead;                            //0x94
    volatile ULONG ExecutePoolTypes;                                        //0x9c
    volatile ULONG ExecutePageProtections;                                  //0xa0
    volatile ULONG ExecutePageMappings;                                     //0xa4
    volatile ULONG ExecuteWriteSections;                                    //0xa8
    volatile ULONG SectionAlignmentFailures;                                //0xac
    volatile ULONG IATInExecutableSection;                                  //0xb0
};
/* Used in */
// _VF_TARGET_DRIVER

