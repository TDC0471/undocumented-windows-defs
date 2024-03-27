#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _KLOCK_ENTRY_BOOST_BITMAP
{
    ULONG AllFields;                                                        //0x0
    ULONG AllBoosts:17;                                                     //0x0
    ULONG Reserved:15;                                                      //0x0
    USHORT CpuBoostsBitmap:15;                                              //0x0
    struct
    {
        USHORT IoBoost:1;                                                   //0x0
    USHORT IoQoSBoost:1;                                                    //0x2
    USHORT IoNormalPriorityWaiterCount:8;                                   //0x2
    };
    USHORT IoQoSWaiterCount:7;                                              //0x2
};
/* Used in */
// _KLOCK_ENTRY

