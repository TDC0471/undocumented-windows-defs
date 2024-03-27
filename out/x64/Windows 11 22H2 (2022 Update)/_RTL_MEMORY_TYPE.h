#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _RTL_MEMORY_TYPE
{
    MemoryTypePaged = 0,
    MemoryTypeNonPaged = 1,
    MemoryType64KPage = 2,
    MemoryTypeLargePage = 3,
    MemoryTypeHugePage = 4,
    MemoryTypeCustom = 5,
    MemoryTypeMax = 6
};
