#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KDPC.h>
#include <_KSCB.h>

//0x1c0 bytes (sizeof)
struct _KSCHEDULING_GROUP
{
    USHORT Value;                                                           //0x0
    UCHAR Type;                                                             //0x2
    UCHAR HardCap;                                                          //0x3
    ULONG RelativeWeight;                                                   //0x4
    ULONGLONG QueryHistoryTimeStamp;                                        //0x8
    LONGLONG NotificationCycles;                                            //0x10
    struct _LIST_ENTRY SchedulingGroupList;                                 //0x18
    struct _KDPC* NotificationDpc;                                          //0x28
    struct _KSCB PerProcessor[1];                                           //0x40
};
/* Used in */
// _KPROCESS
// _KTHREAD

