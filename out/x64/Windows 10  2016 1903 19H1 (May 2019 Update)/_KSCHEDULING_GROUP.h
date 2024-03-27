#pragma once
/* ------------------ */

#include <_KSCHEDULING_GROUP_POLICY.h>
#include <_LIST_ENTRY.h>
#include <_KDPC.h>
#include <_KSCHEDULING_GROUP.h>
#include <_KSCB.h>

//0x240 bytes (sizeof)
struct _KSCHEDULING_GROUP
{
    struct _KSCHEDULING_GROUP_POLICY Policy;                                //0x0
    ULONG RelativeWeight;                                                   //0x8
    ULONG ChildMinRate;                                                     //0xc
    ULONG ChildMinWeight;                                                   //0x10
    ULONG ChildTotalWeight;                                                 //0x14
    ULONGLONG QueryHistoryTimeStamp;                                        //0x18
    LONGLONG NotificationCycles;                                            //0x20
    LONGLONG MaxQuotaLimitCycles;                                           //0x28
    volatile LONGLONG MaxQuotaCyclesRemaining;                              //0x30
    union
    {
        struct _LIST_ENTRY SchedulingGroupList;                             //0x38
        struct _LIST_ENTRY Sibling;                                         //0x38
    };
    struct _KDPC* NotificationDpc;                                          //0x48
    struct _LIST_ENTRY ChildList;                                           //0x50
    struct _KSCHEDULING_GROUP* Parent;                                      //0x60
    struct _KSCB PerProcessor[1];                                           //0x80
};
/* Used in */
// _KPROCESS
// _KSCHEDULING_GROUP
// _KTHREAD

