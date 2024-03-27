#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
union _JOBOBJECT_ENERGY_TRACKING_STATE
{
    ULONGLONG Value;                                                        //0x0
    struct
    {
        ULONG UpdateMask;                                                   //0x0
    };
    ULONG DesiredState;                                                     //0x4
};
/* Used in */
// _EJOB

