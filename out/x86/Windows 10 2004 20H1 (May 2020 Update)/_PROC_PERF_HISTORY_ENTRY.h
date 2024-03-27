#pragma once
/* ------------------ */


//0xa bytes (sizeof)
struct _PROC_PERF_HISTORY_ENTRY
{
    USHORT Utility;                                                         //0x0
    USHORT AffinitizedUtility;                                              //0x2
    USHORT Frequency;                                                       //0x4
    UCHAR TaggedPercent[3];                                                 //0x6
};
/* Used in */
// _PROC_PERF_HISTORY

