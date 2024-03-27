#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _RTL_HP_VS_CONFIG
{
    struct
    {
        ULONG PageAlignLargeAllocs:1;                                       //0x0
        ULONG FullDecommit:1;                                               //0x0
        ULONG EnableDelayFree:1;                                            //0x0
    } Flags;                                                                //0x0
};
/* Used in */
// _HEAP_VS_CONTEXT
// _RTL_HP_SUB_ALLOCATOR_CONFIGS

