#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _RTLP_HP_MEMORY_TYPE
{
    HeapMemoryPaged = 0,
    HeapMemoryNonPaged = 1,
    HeapMemoryLargePage = 2,
    HeapMemoryHugePage = 3,
    HeapMemoryTypeMax = 4
};
