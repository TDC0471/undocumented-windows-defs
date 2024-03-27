#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _HEAP_LFH_ONDEMAND_POINTER
{
    USHORT Invalid:1;                                                       //0x0
    USHORT AllocationInProgress:1;                                          //0x0
    struct
    {
        USHORT Spare0:14;                                                   //0x0
        USHORT UsageData;                                                   //0x2
    };
    VOID* AllBits;                                                          //0x0
};
