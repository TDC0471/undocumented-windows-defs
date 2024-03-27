#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _HEAP_SEG_RANGE_TYPE
{
    HeapSegRangeUser = 0,
    HeapSegRangeInternal = 1,
    HeapSegRangeLFH = 2,
    HeapSegRangeVS = 3,
    HeapSegRangeTypeMax = 3
};
