#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_RTL_BALANCED_NODE.h>
#include <_RTL_RB_TREE.h>
#include <_KSCB.h>

//0xf8 bytes (sizeof)
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
    struct _RTL_BALANCED_NODE QueueNode;                                    //0x50
    UCHAR Inserted:1;                                                       //0x5c
    UCHAR MaxOverQuota:1;                                                   //0x5c
    UCHAR MinOverQuota:1;                                                   //0x5c
    UCHAR RankBias:1;                                                       //0x5c
    UCHAR SoftCap:1;                                                        //0x5c
    UCHAR Spare1:3;                                                         //0x5c
    UCHAR Depth;                                                            //0x5d
    USHORT ReadySummary;                                                    //0x5e
    ULONG Rank;                                                             //0x60
    struct _LIST_ENTRY ReadyListHead[16];                                   //0x64
    struct _RTL_RB_TREE ChildScbQueue;                                      //0xe4
    struct _KSCB* Parent;                                                   //0xec
    struct _KSCB* Root;                                                     //0xf0
};
/* Used in */
// _KSCB
// _KSCHEDULING_GROUP
// _KTHREAD

