#pragma once
/* ------------------ */

#include <_KSEMAPHORE.h>
#include <_LIST_ENTRY.h>

//0x2c bytes (sizeof)
struct _MMDEREFERENCE_SEGMENT_HEADER
{
    struct _KSEMAPHORE Semaphore;                                           //0x0
    struct _LIST_ENTRY ControlAreaDeleteListHead;                           //0x14
    struct _LIST_ENTRY UnusedSegmentDeleteListHead;                         //0x1c
    struct _LIST_ENTRY PagefileExtensionListHead;                           //0x24
};
/* Used in */
// _MI_PARTITION_SEGMENTS

