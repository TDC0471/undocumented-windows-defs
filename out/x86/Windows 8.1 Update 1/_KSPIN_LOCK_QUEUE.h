#pragma once
/* ------------------ */

#include <_KSPIN_LOCK_QUEUE.h>

//0x8 bytes (sizeof)
struct _KSPIN_LOCK_QUEUE
{
    struct _KSPIN_LOCK_QUEUE* volatile Next;                                //0x0
    ULONG* volatile Lock;                                                   //0x4
};
/* Used in */
// _KLOCK_QUEUE_HANDLE
// _KPRCB
// _KSPIN_LOCK_QUEUE

