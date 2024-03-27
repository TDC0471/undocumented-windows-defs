#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>

//0x18 bytes (sizeof)
struct _ETW_BUFFER_QUEUE
{
    struct _SINGLE_LIST_ENTRY* QueueHead;                                   //0x0
    struct _SINGLE_LIST_ENTRY* QueueTail;                                   //0x8
    struct _SINGLE_LIST_ENTRY QueueEntry;                                   //0x10
};
/* Used in */
// _WMI_LOGGER_CONTEXT

