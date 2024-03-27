#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _PNP_REPLACE_PROCESSOR_LIST
{
    ULONGLONG* Affinity;                                                    //0x0
    ULONG GroupCount;                                                       //0x8
    ULONG AllocatedCount;                                                   //0xc
    ULONG Count;                                                            //0x10
    ULONG ApicIds[1];                                                       //0x14
};
/* Used in */
// _HAL_DP_REPLACE_PARAMETERS

