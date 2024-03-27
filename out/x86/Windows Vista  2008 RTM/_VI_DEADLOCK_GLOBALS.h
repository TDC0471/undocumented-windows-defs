#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_VI_DEADLOCK_ADDRESS_RANGE.h>
#include <_VI_DEADLOCK_NODE.h>

//0x40e0 bytes (sizeof)
struct _VI_DEADLOCK_GLOBALS
{
    LONGLONG TimeAcquire;                                                   //0x0
    LONGLONG TimeRelease;                                                   //0x8
    struct _LIST_ENTRY* ResourceDatabase;                                   //0x10
    ULONG ResourceDatabaseCount;                                            //0x14
    struct _VI_DEADLOCK_ADDRESS_RANGE ResourceAddressRange[1023];           //0x18
    struct _LIST_ENTRY* ThreadDatabase;                                     //0x2010
    ULONG ThreadDatabaseCount;                                              //0x2014
    struct _VI_DEADLOCK_ADDRESS_RANGE ThreadAddressRange[1023];             //0x2018
    ULONG AllocationFailures;                                               //0x4010
    ULONG NodesTrimmedBasedOnAge;                                           //0x4014
    ULONG NodesTrimmedBasedOnCount;                                         //0x4018
    ULONG NodesSearched;                                                    //0x401c
    ULONG MaxNodesSearched;                                                 //0x4020
    ULONG SequenceNumber;                                                   //0x4024
    ULONG RecursionDepthLimit;                                              //0x4028
    ULONG SearchedNodesLimit;                                               //0x402c
    ULONG DepthLimitHits;                                                   //0x4030
    ULONG SearchLimitHits;                                                  //0x4034
    ULONG ABC_ACB_Skipped;                                                  //0x4038
    ULONG OutOfOrderReleases;                                               //0x403c
    ULONG NodesReleasedOutOfOrder;                                          //0x4040
    ULONG TotalReleases;                                                    //0x4044
    ULONG RootNodesDeleted;                                                 //0x4048
    ULONG ForgetHistoryCounter;                                             //0x404c
    VOID* Instigator;                                                       //0x4050
    ULONG NumberOfParticipants;                                             //0x4054
    struct _VI_DEADLOCK_NODE* Participant[32];                              //0x4058
    ULONG CacheReductionInProgress;                                         //0x40d8
};
