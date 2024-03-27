#pragma once
/* ------------------ */


//0x20 bytes (sizeof)
struct PROCESSOR_IDLE_TIMES
{
    ULONGLONG StartTime;                                                    //0x0
    ULONGLONG EndTime;                                                      //0x8
    ULONG IdleHandlerReserved[4];                                           //0x10
};
/* Used in */
// _POP_IDLE_HANDLER
// _PROCESSOR_POWER_STATE

