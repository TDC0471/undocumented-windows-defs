#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _PROCESSOR_NUMBER
{
    USHORT Group;                                                           //0x0
    UCHAR Number;                                                           //0x2
    UCHAR Reserved;                                                         //0x3
};
/* Used in */
// _PROCESSOR_IDLE_DEPENDENCY
// _TEB
// _TEB32
// _TEB64
// _THREAD_PERFORMANCE_DATA

