#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _MMSYSTEM_PTE_POOL_TYPE
{
    SystemPteSpace = 0,
    NonPagedPoolExpansion = 1,
    MaximumPtePoolTypes = 2
};
