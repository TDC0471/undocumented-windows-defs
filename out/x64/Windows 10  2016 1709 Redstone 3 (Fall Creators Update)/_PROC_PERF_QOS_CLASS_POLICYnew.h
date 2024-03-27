#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _PROC_PERF_QOS_CLASS_POLICY
{
    ULONG MaxPolicyPercent;                                                 //0x0
    ULONG MaxEquivalentFrequencyPercent;                                    //0x4
    ULONG MinPolicyPercent;                                                 //0x8
    ULONG AutonomousActivityWindow;                                         //0xc
    ULONG EnergyPerfPreference;                                             //0x10
    UCHAR ProvideGuidance;                                                  //0x14
    UCHAR AllowThrottling;                                                  //0x15
    UCHAR PerfBoostMode;                                                    //0x16
    UCHAR LatencyHintPerf;                                                  //0x17
};
/* Used in */
// _PROC_PERF_DOMAIN

