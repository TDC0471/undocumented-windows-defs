#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _PROC_PERF_HISTORY_ENTRY
{
    USHORT Utility;                                                         //0x0
    USHORT AffinitizedUtility;                                              //0x2
    USHORT Frequency;                                                       //0x4
    UCHAR ImportantPercent;                                                 //0x6
    UCHAR TaggedPercent[4];                                                 //0x7
};
/* Used in */
// _PROC_PERF_HISTORY

