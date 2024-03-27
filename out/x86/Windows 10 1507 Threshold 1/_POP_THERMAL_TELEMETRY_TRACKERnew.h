#pragma once
/* ------------------ */


//0x150 bytes (sizeof)
struct _POP_THERMAL_TELEMETRY_TRACKER
{
    UCHAR AccountingDisabled;                                               //0x0
    ULONGLONG LastPassiveUpdateTime;                                        //0x8
    ULONGLONG TotalPassiveTime[20];                                         //0x10
    ULONGLONG PassiveTimeSnap[20];                                          //0xb0
};
/* Used in */
// _POP_THERMAL_ZONE

