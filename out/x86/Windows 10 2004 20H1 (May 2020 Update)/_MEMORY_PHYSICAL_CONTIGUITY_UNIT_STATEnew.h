#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _MEMORY_PHYSICAL_CONTIGUITY_UNIT_STATE
{
    MemoryNotContiguous = 0,
    MemoryAlignedAndContiguous = 1,
    MemoryNotResident = 2,
    MemoryNotEligibleToMakeContiguous = 3,
    MemoryContiguityStateMax = 4
};
