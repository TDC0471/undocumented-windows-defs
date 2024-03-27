#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_VF_ADDRESS_RANGE.h>
#include <_VI_DEADLOCK_NODE.h>
#include <_KERNEL_STACK_LIMITS.h>

//0x8180 bytes (sizeof)
struct _VI_DEADLOCK_GLOBALS
{
    LONGLONG TimeAcquire;                                                   //0x0
    LONGLONG TimeRelease;                                                   //0x8
    struct _LIST_ENTRY* ResourceDatabase;                                   //0x10
    ULONGLONG ResourceDatabaseCount;                                        //0x18
    struct _VF_ADDRESS_RANGE ResourceAddressRange[1023];                    //0x20
    struct _LIST_ENTRY* ThreadDatabase;                                     //0x4010
    ULONGLONG ThreadDatabaseCount;                                          //0x4018
    struct _VF_ADDRESS_RANGE ThreadAddressRange[1023];                      //0x4020
    ULONG AllocationFailures;                                               //0x8010
    ULONG NodesTrimmedBasedOnAge;                                           //0x8014
    ULONG NodesTrimmedBasedOnCount;                                         //0x8018
    ULONG NodesSearched;                                                    //0x801c
    ULONG MaxNodesSearched;                                                 //0x8020
    ULONG SequenceNumber;                                                   //0x8024
    ULONG RecursionDepthLimit;                                              //0x8028
    ULONG SearchedNodesLimit;                                               //0x802c
    ULONG DepthLimitHits;                                                   //0x8030
    ULONG SearchLimitHits;                                                  //0x8034
    ULONG StackLimitHits;                                                   //0x8038
    ULONG ABC_ACB_Skipped;                                                  //0x803c
    ULONG OutOfOrderReleases;                                               //0x8040
    ULONG NodesReleasedOutOfOrder;                                          //0x8044
    ULONG TotalReleases;                                                    //0x8048
    ULONG RootNodesDeleted;                                                 //0x804c
    ULONG ForgetHistoryCounter;                                             //0x8050
    VOID* Instigator;                                                       //0x8058
    ULONG NumberOfParticipants;                                             //0x8060
    struct _VI_DEADLOCK_NODE* Participant[32];                              //0x8068
    LONG ChildrenCountWatermark;                                            //0x8168
    enum _KERNEL_STACK_LIMITS StackType;                                    //0x816c
    ULONGLONG StackLowLimit;                                                //0x8170
    ULONGLONG StackHighLimit;                                               //0x8178
};
