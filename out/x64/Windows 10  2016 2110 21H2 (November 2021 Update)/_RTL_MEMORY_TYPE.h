#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _RTL_MEMORY_TYPE
{
    MemoryTypePaged = 0,
    MemoryTypeNonPaged = 1,
    MemoryTypeLargePage = 2,
    MemoryTypeHugePage = 3,
    MemoryTypeMax = 4
};
