#pragma once
/* ------------------ */


//0x20 bytes (sizeof)
struct _PROC_IDLE_STATE_BUCKET
{
    ULONGLONG TotalTime;                                                    //0x0
    ULONGLONG MinTime;                                                      //0x8
    ULONGLONG MaxTime;                                                      //0x10
    ULONG Count;                                                            //0x18
};
/* Used in */
// _PLATFORM_IDLE_STATE_ACCOUNTING
// _PROC_IDLE_STATE_ACCOUNTING

