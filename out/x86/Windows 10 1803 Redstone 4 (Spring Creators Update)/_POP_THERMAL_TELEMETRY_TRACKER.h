#pragma once
/* ------------------ */


//0x160 bytes (sizeof)
struct _POP_THERMAL_TELEMETRY_TRACKER
{
    UCHAR AccountingDisabled;                                               //0x0
    ULONGLONG LastPassiveUpdateTime;                                        //0x8
    ULONGLONG TotalPassiveTime[21];                                         //0x10
    ULONGLONG PassiveTimeSnap[21];                                          //0xb8
};
/* Used in */
// _POP_THERMAL_ZONE

