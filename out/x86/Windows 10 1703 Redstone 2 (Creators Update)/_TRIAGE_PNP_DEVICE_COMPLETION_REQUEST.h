#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_TRIAGE_DEVICE_NODE.h>

//0xc bytes (sizeof)
struct _TRIAGE_PNP_DEVICE_COMPLETION_REQUEST
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    struct _TRIAGE_DEVICE_NODE* DeviceNode;                                 //0x8
};
