#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _MEM_DEDICATED_ATTRIBUTE_TYPE
{
    MemDedicatedAttributeReadBandwidth = 0,
    MemDedicatedAttributeReadLatency = 1,
    MemDedicatedAttributeWriteBandwidth = 2,
    MemDedicatedAttributeWriteLatency = 3,
    MemDedicatedAttributeMax = 4
};
