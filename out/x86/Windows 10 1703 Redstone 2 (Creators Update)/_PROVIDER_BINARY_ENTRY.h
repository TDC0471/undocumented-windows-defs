#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_CVDD.h>

//0x2c bytes (sizeof)
struct _PROVIDER_BINARY_ENTRY
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    UCHAR ConsumersNotified;                                                //0x8
    UCHAR Spare[3];                                                         //0x9
    ULONG DebugIdSize;                                                      //0xc
    union _CVDD DebugId;                                                    //0x10
};
