#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
union _ENERGY_STATE_DURATION
{
    ULONGLONG Value;                                                        //0x0
    struct
    {
        ULONG LastChangeTime;                                               //0x0
    ULONG Duration:31;                                                      //0x4
    };
    ULONG IsInState:1;                                                      //0x4
};
/* Used in */
// _PROCESS_ENERGY_VALUES
// _PROCESS_ENERGY_VALUES_EXTENSION

