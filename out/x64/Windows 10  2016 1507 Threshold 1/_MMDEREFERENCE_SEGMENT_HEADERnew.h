#pragma once
/* ------------------ */

#include <_KSEMAPHORE.h>
#include <_LIST_ENTRY.h>

//0x30 bytes (sizeof)
struct _MMDEREFERENCE_SEGMENT_HEADER
{
    struct _KSEMAPHORE Semaphore;                                           //0x0
    struct _LIST_ENTRY ListHead;                                            //0x20
};
/* Used in */
// _MI_PARTITION_SEGMENTS

