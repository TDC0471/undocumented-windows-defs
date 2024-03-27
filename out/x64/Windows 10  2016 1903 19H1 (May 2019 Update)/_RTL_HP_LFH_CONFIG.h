#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _RTL_HP_LFH_CONFIG
{
    USHORT MaxBlockSize;                                                    //0x0
    USHORT WitholdPageCrossingBlocks:1;                                     //0x2
    USHORT DisableRandomization:1;                                          //0x2
};
/* Used in */
// _HEAP_LFH_CONTEXT
// _RTL_HP_SUB_ALLOCATOR_CONFIGS

