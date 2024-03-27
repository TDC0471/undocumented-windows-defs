#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
union _KQOS_GROUPING_SETS
{
    struct
    {
        ULONG SingleCoreSet;                                                //0x0
        ULONG SmtSet;                                                       //0x4
    };
    LONGLONG QosGroupingMasks;                                              //0x0
};
/* Used in */
// _KNODE

