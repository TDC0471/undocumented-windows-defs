#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _KSPIN_LOCK_QUEUE_NUMBER
{
    LockQueueUnusedSpare0 = 0,
    LockQueueExpansionLock = 1,
    LockQueueUnusedSpare2 = 2,
    LockQueueUnusedSpare3 = 3,
    LockQueueVacbLock = 4,
    LockQueueMasterLock = 5,
    LockQueueNonPagedPoolLock = 6,
    LockQueueIoCancelLock = 7,
    LockQueueWorkQueueLock = 8,
    LockQueueIoVpbLock = 9,
    LockQueueIoDatabaseLock = 10,
    LockQueueIoCompletionLock = 11,
    LockQueueNtfsStructLock = 12,
    LockQueueAfdWorkQueueLock = 13,
    LockQueueBcbLock = 14,
    LockQueueUnusedSpare15 = 15,
    LockQueueUnusedSpare16 = 16,
    LockQueueMaximumLock = 17
};
