#pragma once
/* ------------------ */


//0x218 bytes (sizeof)
struct _POP_THERMAL_TELEMETRY_TRACKER
{
    UCHAR AccountingDisabled;                                               //0x0
    UCHAR ActiveLevels;                                                     //0x1
    ULONGLONG LastPassiveUpdateTime;                                        //0x8
    ULONGLONG LastActiveUpdateTime;                                         //0x10
    ULONGLONG TotalPassiveTime[21];                                         //0x18
    ULONGLONG PassiveTimeSnap[21];                                          //0xc0
    ULONGLONG TotalActiveTime[10];                                          //0x168
    ULONGLONG ActiveTimeSnap[10];                                           //0x1b8
    ULONGLONG TotalTime;                                                    //0x208
    ULONGLONG TotalTimeSnap;                                                //0x210
};
/* Used in */
// _POP_THERMAL_ZONE

