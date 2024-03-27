#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_VI_DEADLOCK_NODE.h>

//0x110 bytes (sizeof)
struct _VI_DEADLOCK_GLOBALS
{
    ULONG Nodes[2];                                                         //0x0
    ULONG Resources[2];                                                     //0x8
    ULONG Threads[2];                                                       //0x10
    LONGLONG TimeAcquire;                                                   //0x18
    LONGLONG TimeRelease;                                                   //0x20
    ULONG BytesAllocated;                                                   //0x28
    struct _LIST_ENTRY* ResourceDatabase;                                   //0x2c
    struct _LIST_ENTRY* ThreadDatabase;                                     //0x30
    ULONG AllocationFailures;                                               //0x34
    ULONG NodesTrimmedBasedOnAge;                                           //0x38
    ULONG NodesTrimmedBasedOnCount;                                         //0x3c
    ULONG NodesSearched;                                                    //0x40
    ULONG MaxNodesSearched;                                                 //0x44
    ULONG SequenceNumber;                                                   //0x48
    ULONG RecursionDepthLimit;                                              //0x4c
    ULONG SearchedNodesLimit;                                               //0x50
    ULONG DepthLimitHits;                                                   //0x54
    ULONG SearchLimitHits;                                                  //0x58
    ULONG ABC_ACB_Skipped;                                                  //0x5c
    struct _LIST_ENTRY FreeResourceList;                                    //0x60
    struct _LIST_ENTRY FreeThreadList;                                      //0x68
    struct _LIST_ENTRY FreeNodeList;                                        //0x70
    ULONG FreeResourceCount;                                                //0x78
    ULONG FreeThreadCount;                                                  //0x7c
    ULONG FreeNodeCount;                                                    //0x80
    VOID* Instigator;                                                       //0x84
    ULONG NumberOfParticipants;                                             //0x88
    struct _VI_DEADLOCK_NODE* Participant[32];                              //0x8c
    ULONG CacheReductionInProgress;                                         //0x10c
};
