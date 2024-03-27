#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_CVDD.h>

//0x38 bytes (sizeof)
struct _ETW_DEBUGID_TRACKING_ENTRY
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    UCHAR ConsumersNotified;                                                //0x10
    UCHAR Spare[3];                                                         //0x11
    ULONG DebugIdSize;                                                      //0x14
    union _CVDD DebugId;                                                    //0x18
};
