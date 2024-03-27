#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
union _KLOCK_ENTRY_BOOST_BITMAP
{
    ULONGLONG AllFields;                                                    //0x0
    struct
    {
        ULONG AllBoosts;                                                    //0x0
        ULONG WaiterCounts;                                                 //0x4
    };
    ULONG CpuBoostsBitmap:30;                                               //0x0
    ULONG IoBoost:1;                                                        //0x0
    struct
    {
        ULONG IoQoSBoost:1;                                                 //0x0
    ULONG IoNormalPriorityWaiterCount:8;                                    //0x4
    };
    ULONG IoQoSWaiterCount:7;                                               //0x4
};
/* Used in */
// _KLOCK_ENTRY

