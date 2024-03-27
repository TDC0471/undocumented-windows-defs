#pragma once
/* ------------------ */


//0x28 bytes (sizeof)
struct _PPM_CONCURRENCY_ACCOUNTING
{
    ULONGLONG Lock;                                                         //0x0
    ULONG Processors;                                                       //0x8
    ULONG ActiveProcessors;                                                 //0xc
    ULONGLONG LastUpdateTime;                                               //0x10
    ULONGLONG TotalTime;                                                    //0x18
    ULONGLONG AccumulatedTime[1];                                           //0x20
};
/* Used in */
// _PROCESSOR_POWER_STATE

