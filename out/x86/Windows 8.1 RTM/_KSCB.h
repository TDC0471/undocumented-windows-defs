#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_RTL_BALANCED_NODE.h>

//0xe0 bytes (sizeof)
struct _KSCB
{
    ULONGLONG GenerationCycles;                                             //0x0
    ULONGLONG UnderQuotaCycleTarget;                                        //0x8
    ULONGLONG RankCycleTarget;                                              //0x10
    ULONGLONG LongTermCycles;                                               //0x18
    ULONGLONG LastReportedCycles;                                           //0x20
    volatile ULONGLONG OverQuotaHistory;                                    //0x28
    ULONGLONG ReadyTime;                                                    //0x30
    ULONGLONG InsertTime;                                                   //0x38
    struct _LIST_ENTRY PerProcessorList;                                    //0x40
    struct _RTL_BALANCED_NODE QueueNode;                                    //0x48
    UCHAR Inserted:1;                                                       //0x54
    UCHAR OverQuota:1;                                                      //0x54
    UCHAR HardCap:1;                                                        //0x54
    UCHAR RankBias:1;                                                       //0x54
    UCHAR Spare1:4;                                                         //0x54
    UCHAR Spare2;                                                           //0x55
    USHORT ReadySummary;                                                    //0x56
    ULONG Rank;                                                             //0x58
    struct _LIST_ENTRY ReadyListHead[16];                                   //0x5c
};
/* Used in */
// _KSCHEDULING_GROUP
