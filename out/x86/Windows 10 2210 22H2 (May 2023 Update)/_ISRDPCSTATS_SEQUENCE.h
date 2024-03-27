#pragma once
/* ------------------ */


//0x28 bytes (sizeof)
struct _ISRDPCSTATS_SEQUENCE
{
    ULONG SequenceNumber;                                                   //0x0
    ULONGLONG IsrTime;                                                      //0x8
    ULONGLONG IsrCount;                                                     //0x10
    ULONGLONG DpcTime;                                                      //0x18
    ULONGLONG DpcCount;                                                     //0x20
};
/* Used in */
// _ISRDPCSTATS

