#pragma once
/* ------------------ */


//0x40 bytes (sizeof)
struct _ISRDPCSTATS
{
    ULONGLONG IsrTime;                                                      //0x0
    ULONGLONG IsrTimeStart;                                                 //0x8
    ULONGLONG IsrCount;                                                     //0x10
    ULONGLONG DpcTime;                                                      //0x18
    ULONGLONG DpcTimeStart;                                                 //0x20
    ULONGLONG DpcCount;                                                     //0x28
    UCHAR IsrActive;                                                        //0x30
    UCHAR Reserved[15];                                                     //0x31
};
/* Used in */
// _KINTERRUPT

