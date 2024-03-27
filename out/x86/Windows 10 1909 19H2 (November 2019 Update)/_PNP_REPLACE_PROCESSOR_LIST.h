#pragma once
/* ------------------ */


//0x14 bytes (sizeof)
struct _PNP_REPLACE_PROCESSOR_LIST
{
    ULONG* Affinity;                                                        //0x0
    ULONG GroupCount;                                                       //0x4
    ULONG AllocatedCount;                                                   //0x8
    ULONG Count;                                                            //0xc
    ULONG ApicIds[1];                                                       //0x10
};
/* Used in */
// _HAL_DP_REPLACE_PARAMETERS

