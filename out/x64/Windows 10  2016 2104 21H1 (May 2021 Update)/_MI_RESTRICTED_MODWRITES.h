#pragma once
/* ------------------ */


//0x3 bytes (sizeof)
struct _MI_RESTRICTED_MODWRITES
{
    UCHAR MaximumClusterPages;                                              //0x0
    UCHAR ReducedClusterWrites;                                             //0x1
    UCHAR ImposeDelay;                                                      //0x2
};
/* Used in */
// _MI_PARTITION_MODWRITES

