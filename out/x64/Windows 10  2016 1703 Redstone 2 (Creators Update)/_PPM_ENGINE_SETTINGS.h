#pragma once
/* ------------------ */

#include <_PPM_POLICY_SETTINGS_MASK.h>

//0x578 bytes (sizeof)
struct _PPM_ENGINE_SETTINGS
{
    union _PPM_POLICY_SETTINGS_MASK ExplicitSetting[2];                     //0x0
    UCHAR ThrottlingPolicy;                                                 //0x10
    ULONG PerfTimeCheck;                                                    //0x14
    UCHAR PerfHistoryCount[2];                                              //0x18
    UCHAR PerfMinPolicy[2];                                                 //0x1a
    UCHAR PerfMaxPolicy[2];                                                 //0x1c
    UCHAR PerfDecreaseTime[2];                                              //0x1e
    UCHAR PerfIncreaseTime[2];                                              //0x20
    UCHAR PerfDecreasePolicy[2];                                            //0x22
    UCHAR PerfIncreasePolicy[2];                                            //0x24
    UCHAR PerfDecreaseThreshold[2];                                         //0x26
    UCHAR PerfIncreaseThreshold[2];                                         //0x28
    ULONG PerfFrequencyCap[2];                                              //0x2c
    ULONG PerfBoostPolicy;                                                  //0x34
    ULONG PerfBoostMode;                                                    //0x38
    ULONG PerfReductionTolerance;                                           //0x3c
    ULONG EnergyPerfPreference;                                             //0x40
    ULONG AutonomousActivityWindow;                                         //0x44
    UCHAR AutonomousPreference;                                             //0x48
    UCHAR LatencyHintPerf[2];                                               //0x49
    UCHAR LatencyHintUnpark[2];                                             //0x4b
    UCHAR DutyCycling;                                                      //0x4d
    UCHAR ParkingPerfState[2];                                              //0x4e
    UCHAR DistributeUtility;                                                //0x50
    UCHAR CoreParkingOverUtilizationThreshold;                              //0x51
    UCHAR CoreParkingConcurrencyThreshold;                                  //0x52
    UCHAR CoreParkingHeadroomThreshold;                                     //0x53
    UCHAR CoreParkingDistributionThreshold;                                 //0x54
    UCHAR CoreParkingDecreasePolicy;                                        //0x55
    UCHAR CoreParkingIncreasePolicy;                                        //0x56
    ULONG CoreParkingDecreaseTime;                                          //0x58
    ULONG CoreParkingIncreaseTime;                                          //0x5c
    UCHAR CoreParkingMinCores[2];                                           //0x60
    UCHAR CoreParkingMaxCores[2];                                           //0x62
    UCHAR AllowScaling;                                                     //0x64
    UCHAR IdleDisabled;                                                     //0x65
    ULONG IdleTimeCheck;                                                    //0x68
    UCHAR IdleDemotePercent;                                                //0x6c
    UCHAR IdlePromotePercent;                                               //0x6d
    UCHAR HeteroDecreaseTime;                                               //0x6e
    UCHAR HeteroIncreaseTime;                                               //0x6f
    UCHAR HeteroDecreaseThreshold[640];                                     //0x70
    UCHAR HeteroIncreaseThreshold[640];                                     //0x2f0
    UCHAR Class0FloorPerformance;                                           //0x570
    UCHAR Class1InitialPerformance;                                         //0x571
};
/* Used in */
// _POP_PPM_PROFILE

