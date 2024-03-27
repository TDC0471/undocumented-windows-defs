#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MMPAGE_FILE_EXPANSION_FLAGS
{
    UCHAR PageFileNumber:8;                                                 //0x0
    UCHAR Spare1:8;                                                         //0x1
    UCHAR Spare2:8;                                                         //0x2
    UCHAR IgnoreCurrentCommit:1;                                            //0x3
    UCHAR IncreaseMinimumSize:1;                                            //0x3
    UCHAR AttemptForCantExtend:1;                                           //0x3
    UCHAR UnusedSegmentDeletion:1;                                          //0x3
    UCHAR PageFileContract:1;                                               //0x3
    UCHAR Spare3:3;                                                         //0x3
};
/* Used in */
// _MMPAGE_FILE_EXPANSION

