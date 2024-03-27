#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _RTL_HP_LFH_CONFIG
{
    ULONG MaxBlockSize;                                                     //0x0
    ULONG MaxSubsegmentSize;                                                //0x4
    struct
    {
        ULONG ForceEnable:1;                                                //0x8
    } Flags;                                                                //0x8
};
/* Used in */
// _RTL_HP_SUB_ALLOCATOR_CONFIGS

