#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _HEAP_LFH_LOCKMODE
{
    HeapLockNotHeld = 0,
    HeapLockShared = 1,
    HeapLockExclusive = 2
};
