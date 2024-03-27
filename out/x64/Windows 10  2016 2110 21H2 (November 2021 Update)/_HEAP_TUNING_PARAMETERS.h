#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _HEAP_TUNING_PARAMETERS
{
    ULONG CommittThresholdShift;                                            //0x0
    ULONGLONG MaxPreCommittThreshold;                                       //0x8
};
/* Used in */
// _HEAP

