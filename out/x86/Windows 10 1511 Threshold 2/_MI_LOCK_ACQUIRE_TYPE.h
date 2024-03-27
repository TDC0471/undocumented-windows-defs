#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _MI_LOCK_ACQUIRE_TYPE
{
    MiAcquireExclusive = 0,
    MiAcquireExclusiveAutoExpand = 1,
    MiAcquireShared = 2,
    MiAcquireSharedAutoExpand = 3
};
