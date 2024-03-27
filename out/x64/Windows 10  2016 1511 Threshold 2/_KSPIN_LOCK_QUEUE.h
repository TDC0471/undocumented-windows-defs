#pragma once
/* ------------------ */

#include <_KSPIN_LOCK_QUEUE.h>

//0x10 bytes (sizeof)
struct _KSPIN_LOCK_QUEUE
{
    struct _KSPIN_LOCK_QUEUE* volatile Next;                                //0x0
    ULONGLONG* volatile Lock;                                               //0x8
};
/* Used in */
// _KLOCK_QUEUE_HANDLE
// _KPCR
// _KPRCB
// _KSPIN_LOCK_QUEUE

