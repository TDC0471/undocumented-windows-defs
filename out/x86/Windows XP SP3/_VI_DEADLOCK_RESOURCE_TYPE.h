#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _VI_DEADLOCK_RESOURCE_TYPE
{
    VfDeadlockUnknown = 0,
    VfDeadlockMutex = 1,
    VfDeadlockFastMutex = 2,
    VfDeadlockFastMutexUnsafe = 3,
    VfDeadlockSpinLock = 4,
    VfDeadlockQueuedSpinLock = 5,
    VfDeadlockTypeMaximum = 6
};
/* Used in */
// _VI_DEADLOCK_RESOURCE

