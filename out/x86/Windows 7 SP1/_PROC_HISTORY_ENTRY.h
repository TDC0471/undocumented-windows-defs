#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _PROC_HISTORY_ENTRY
{
    USHORT Utility;                                                         //0x0
    UCHAR Frequency;                                                        //0x2
    UCHAR Reserved;                                                         //0x3
};
/* Used in */
// _PROCESSOR_POWER_STATE

