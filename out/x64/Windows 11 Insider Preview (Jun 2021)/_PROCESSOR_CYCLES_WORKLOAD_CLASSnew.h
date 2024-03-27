#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _PROCESSOR_CYCLES_WORKLOAD_CLASS
{
    ULONG Count;                                                            //0x0
    ULONGLONG ProcessorCyclesClass[1];                                      //0x8
};
/* Used in */
// _PROCESSOR_POWER_STATE

