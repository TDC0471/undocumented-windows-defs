#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
union _PSP_CPU_SHARE_CAPTURED_WEIGHT_DATA
{
    struct
    {
        ULONG CapturedCpuShareWeight;                                       //0x0
        ULONG CapturedTotalWeight;                                          //0x4
    };
    LONGLONG CombinedData;                                                  //0x0
};
/* Used in */
// _PS_CPU_QUOTA_BLOCK

