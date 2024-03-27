#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
union _KQOS_GROUPING_SETS
{
    struct
    {
        ULONGLONG SingleCoreSet;                                            //0x0
    };
    ULONGLONG SmtSet;                                                       //0x8
};
/* Used in */
// _KSCHEDULER_SUBNODE

