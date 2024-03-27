#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_VI_DEADLOCK_NODE.h>

//0x1e0 bytes (sizeof)
struct _VI_DEADLOCK_GLOBALS
{
    ULONG Nodes[2];                                                         //0x0
    ULONG Resources[2];                                                     //0x8
    ULONG Threads[2];                                                       //0x10
    LONGLONG TimeAcquire;                                                   //0x18
    LONGLONG TimeRelease;                                                   //0x20
    ULONGLONG BytesAllocated;                                               //0x28
    struct _LIST_ENTRY* ResourceDatabase;                                   //0x30
    struct _LIST_ENTRY* ThreadDatabase;                                     //0x38
    ULONG AllocationFailures;                                               //0x40
    ULONG NodesTrimmedBasedOnAge;                                           //0x44
    ULONG NodesTrimmedBasedOnCount;                                         //0x48
    ULONG NodesSearched;                                                    //0x4c
    ULONG MaxNodesSearched;                                                 //0x50
    ULONG SequenceNumber;                                                   //0x54
    ULONG RecursionDepthLimit;                                              //0x58
    ULONG SearchedNodesLimit;                                               //0x5c
    ULONG DepthLimitHits;                                                   //0x60
    ULONG SearchLimitHits;                                                  //0x64
    ULONG ABC_ACB_Skipped;                                                  //0x68
    ULONG OutOfOrderReleases;                                               //0x6c
    ULONG NodesReleasedOutOfOrder;                                          //0x70
    ULONG TotalReleases;                                                    //0x74
    ULONG RootNodesDeleted;                                                 //0x78
    ULONG ForgetHistoryCounter;                                             //0x7c
    ULONG PoolTrimCounter;                                                  //0x80
    struct _LIST_ENTRY FreeResourceList;                                    //0x88
    struct _LIST_ENTRY FreeThreadList;                                      //0x98
    struct _LIST_ENTRY FreeNodeList;                                        //0xa8
    ULONG FreeResourceCount;                                                //0xb8
    ULONG FreeThreadCount;                                                  //0xbc
    ULONG FreeNodeCount;                                                    //0xc0
    VOID* Instigator;                                                       //0xc8
    ULONG NumberOfParticipants;                                             //0xd0
    struct _VI_DEADLOCK_NODE* Participant[32];                              //0xd8
    ULONG CacheReductionInProgress;                                         //0x1d8
};
