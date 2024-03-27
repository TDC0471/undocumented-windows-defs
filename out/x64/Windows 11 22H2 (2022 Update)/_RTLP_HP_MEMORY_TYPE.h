#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _RTLP_HP_MEMORY_TYPE
{
    HeapMemoryPaged = 0,
    HeapMemoryNonPaged = 1,
    HeapMemory64KPage = 2,
    HeapMemoryLargePage = 3,
    HeapMemoryHugePage = 4,
    HeapMemoryTypeCustom = 5,
    HeapMemoryTypeMax = 6
};
