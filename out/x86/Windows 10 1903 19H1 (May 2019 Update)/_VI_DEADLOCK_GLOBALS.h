#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_VF_ADDRESS_RANGE.h>
#include <_VI_DEADLOCK_NODE.h>
#include <_KERNEL_STACK_LIMITS.h>

//0x40f0 bytes (sizeof)
struct _VI_DEADLOCK_GLOBALS
{
    LONGLONG TimeAcquire;                                                   //0x0
    LONGLONG TimeRelease;                                                   //0x8
    struct _LIST_ENTRY* ResourceDatabase;                                   //0x10
    ULONG ResourceDatabaseCount;                                            //0x14
    struct _VF_ADDRESS_RANGE ResourceAddressRange[1023];                    //0x18
    struct _LIST_ENTRY* ThreadDatabase;                                     //0x2010
    ULONG ThreadDatabaseCount;                                              //0x2014
    struct _VF_ADDRESS_RANGE ThreadAddressRange[1023];                      //0x2018
    volatile ULONG AllocationFailures;                                      //0x4010
    ULONG NodesTrimmedBasedOnAge;                                           //0x4014
    ULONG NodesTrimmedBasedOnCount;                                         //0x4018
    ULONG NodesSearched;                                                    //0x401c
    ULONG MaxNodesSearched;                                                 //0x4020
    ULONG SequenceNumber;                                                   //0x4024
    ULONG RecursionDepthLimit;                                              //0x4028
    ULONG SearchedNodesLimit;                                               //0x402c
    ULONG DepthLimitHits;                                                   //0x4030
    ULONG SearchLimitHits;                                                  //0x4034
    ULONG StackLimitHits;                                                   //0x4038
    ULONG ABC_ACB_Skipped;                                                  //0x403c
    ULONG OutOfOrderReleases;                                               //0x4040
    ULONG NodesReleasedOutOfOrder;                                          //0x4044
    ULONG TotalReleases;                                                    //0x4048
    ULONG RootNodesDeleted;                                                 //0x404c
    ULONG ForgetHistoryCounter;                                             //0x4050
    VOID* Instigator;                                                       //0x4054
    ULONG NumberOfParticipants;                                             //0x4058
    struct _VI_DEADLOCK_NODE* Participant[32];                              //0x405c
    LONG ChildrenCountWatermark;                                            //0x40dc
    enum _KERNEL_STACK_LIMITS StackType;                                    //0x40e0
    ULONG StackLowLimit;                                                    //0x40e4
    ULONG StackHighLimit;                                                   //0x40e8
};
