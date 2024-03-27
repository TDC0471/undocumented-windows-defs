#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _MI_DYNAMIC_MEMORY_LOCKTYPE
{
    AlreadyHeld = 0,
    AcquiredShared = 1,
    UseSpinLock = 2,
    UseSpinLockRaiseIrql = 3
};
