#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _MM_POOL_TYPES
{
    MmNonPagedPool = 0,
    MmPagedPool = 1,
    MmSessionPagedPool = 2,
    MmMaximumPoolType = 3
};
