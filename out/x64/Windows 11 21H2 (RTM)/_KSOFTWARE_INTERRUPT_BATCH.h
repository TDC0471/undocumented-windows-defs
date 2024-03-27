#pragma once
/* ------------------ */

#include <_KAFFINITY_EX.h>

//0x110 bytes (sizeof)
struct _KSOFTWARE_INTERRUPT_BATCH
{
    UCHAR Level;                                                            //0x0
    UCHAR TargetType;                                                       //0x1
    UCHAR ReservedBatchInProgress;                                          //0x2
    UCHAR Spare;                                                            //0x3
    ULONG SingleTargetIndex;                                                //0x4
    struct _KAFFINITY_EX MultipleTargetAffinity;                            //0x8
};
/* Used in */
// _KPRCB

