#pragma once
/* ------------------ */


//0x6 bytes (sizeof)
struct _PROC_PERF_HISTORY_ENTRY
{
    USHORT Utility;                                                         //0x0
    USHORT AffinitizedUtility;                                              //0x2
    UCHAR Frequency;                                                        //0x4
    UCHAR Reserved;                                                         //0x5
};
/* Used in */
// _PROC_PERF_HISTORY

