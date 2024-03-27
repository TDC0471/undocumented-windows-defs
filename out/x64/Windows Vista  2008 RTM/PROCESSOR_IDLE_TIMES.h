#pragma once
/* ------------------ */


//0x20 bytes (sizeof)
struct PROCESSOR_IDLE_TIMES
{
    ULONGLONG StartTime;                                                    //0x0
    ULONGLONG EndTime;                                                      //0x8
    ULONG Reserved[4];                                                      //0x10
};
/* Used in */
// PPM_IDLE_STATE
// _PROCESSOR_POWER_STATE

