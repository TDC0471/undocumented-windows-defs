#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_RTL_BALANCED_NODE.h>
#include <_RTL_RB_TREE.h>
#include <_KSCB.h>

//0x1a8 bytes (sizeof)
struct _KSCB
{
    ULONGLONG GenerationCycles;                                             //0x0
    ULONGLONG MinQuotaCycleTarget;                                          //0x8
    ULONGLONG MaxQuotaCycleTarget;                                          //0x10
    ULONGLONG RankCycleTarget;                                              //0x18
    ULONGLONG LongTermCycles;                                               //0x20
    ULONGLONG LastReportedCycles;                                           //0x28
    volatile ULONGLONG OverQuotaHistory;                                    //0x30
    ULONGLONG ReadyTime;                                                    //0x38
    ULONGLONG InsertTime;                                                   //0x40
    struct _LIST_ENTRY PerProcessorList;                                    //0x48
    struct _RTL_BALANCED_NODE QueueNode;                                    //0x58
    UCHAR Inserted:1;                                                       //0x70
    UCHAR MaxOverQuota:1;                                                   //0x70
    UCHAR MinOverQuota:1;                                                   //0x70
    UCHAR RankBias:1;                                                       //0x70
    UCHAR UnconstrainedMaxQuota:1;                                          //0x70
    UCHAR UnconstrainedMinQuota:1;                                          //0x70
    UCHAR ShareRankOwner:1;                                                 //0x70
    UCHAR Spare1:1;                                                         //0x70
    UCHAR Depth;                                                            //0x71
    USHORT ReadySummary;                                                    //0x72
    ULONG Rank;                                                             //0x74
    volatile ULONG* ShareRank;                                              //0x78
    volatile ULONG OwnerShareRank;                                          //0x80
    struct _LIST_ENTRY ReadyListHead[16];                                   //0x88
    struct _RTL_RB_TREE ChildScbQueue;                                      //0x188
    struct _KSCB* Parent;                                                   //0x198
    struct _KSCB* Root;                                                     //0x1a0
};
/* Used in */
// _KSCB
// _KSCHEDULING_GROUP
// _KTHREAD

