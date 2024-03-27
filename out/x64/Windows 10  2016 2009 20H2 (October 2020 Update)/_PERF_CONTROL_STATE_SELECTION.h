#pragma once
/* ------------------ */


//0x28 bytes (sizeof)
struct _PERF_CONTROL_STATE_SELECTION
{
    ULONGLONG SelectedState;                                                //0x0
    ULONG SelectedPercent;                                                  //0x8
    ULONG SelectedFrequency;                                                //0xc
    ULONG MinPercent;                                                       //0x10
    ULONG MaxPercent;                                                       //0x14
    ULONG TolerancePercent;                                                 //0x18
    ULONG EppPercent;                                                       //0x1c
    ULONG AutonomousActivityWindow;                                         //0x20
    UCHAR Autonomous;                                                       //0x24
    UCHAR InheritFromDomain;                                                //0x25
};
/* Used in */
// _PROC_PERF_CONSTRAINT
// _PROC_PERF_DOMAIN

