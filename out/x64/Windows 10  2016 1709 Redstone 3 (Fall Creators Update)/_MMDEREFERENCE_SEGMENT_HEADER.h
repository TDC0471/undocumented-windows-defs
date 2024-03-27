#pragma once
/* ------------------ */

#include <_KSEMAPHORE.h>
#include <_LIST_ENTRY.h>

//0x50 bytes (sizeof)
struct _MMDEREFERENCE_SEGMENT_HEADER
{
    struct _KSEMAPHORE Semaphore;                                           //0x0
    struct _LIST_ENTRY ControlAreaDeleteListHead;                           //0x20
    struct _LIST_ENTRY UnusedSegmentDeleteListHead;                         //0x30
    struct _LIST_ENTRY PagefileExtensionListHead;                           //0x40
};
/* Used in */
// _MI_PARTITION_SEGMENTS

