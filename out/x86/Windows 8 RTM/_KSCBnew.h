#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_RTL_BALANCED_NODE.h>

//0xd0 bytes (sizeof)
struct _KSCB
{
    ULONGLONG GenerationCycles;                                             //0x0
    ULONGLONG UnderQuotaCycleTarget;                                        //0x8
    ULONGLONG RankCycleTarget;                                              //0x10
    ULONGLONG LongTermCycles;                                               //0x18
    ULONGLONG LastReportedCycles;                                           //0x20
    volatile ULONGLONG OverQuotaHistory;                                    //0x28
    struct _LIST_ENTRY PerProcessorList;                                    //0x30
    struct _RTL_BALANCED_NODE QueueNode;                                    //0x38
    UCHAR Inserted:1;                                                       //0x44
    UCHAR OverQuota:1;                                                      //0x44
    UCHAR HardCap:1;                                                        //0x44
    UCHAR RankBias:1;                                                       //0x44
    UCHAR Spare1:4;                                                         //0x44
    UCHAR Spare2;                                                           //0x45
    USHORT ReadySummary;                                                    //0x46
    ULONG Rank;                                                             //0x48
    struct _LIST_ENTRY ReadyListHead[16];                                   //0x4c
};
/* Used in */
// _KSCHEDULING_GROUP

