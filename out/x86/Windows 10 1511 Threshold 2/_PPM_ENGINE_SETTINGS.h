#pragma once
/* ------------------ */

#include <_PPM_POLICY_SETTINGS_MASK.h>

//0xb0 bytes (sizeof)
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
    ULONG PerfBoostPolicy;                                                  //0x2c
    ULONG PerfBoostMode;                                                    //0x30
    ULONG PerfReductionTolerance;                                           //0x34
    ULONG EnergyPerfPreference;                                             //0x38
    ULONG AutonomousActivityWindow;                                         //0x3c
    UCHAR AutonomousPreference;                                             //0x40
    UCHAR LatencyHintPerf[2];                                               //0x41
    UCHAR LatencyHintUnpark[2];                                             //0x43
    UCHAR DutyCycling;                                                      //0x45
    UCHAR ParkingPerfState[2];                                              //0x46
    UCHAR DistributeUtility;                                                //0x48
    UCHAR CoreParkingOverUtilizationThreshold;                              //0x49
    UCHAR CoreParkingConcurrencyThreshold;                                  //0x4a
    UCHAR CoreParkingHeadroomThreshold;                                     //0x4b
    UCHAR CoreParkingDistributionThreshold;                                 //0x4c
    UCHAR CoreParkingDecreasePolicy;                                        //0x4d
    UCHAR CoreParkingIncreasePolicy;                                        //0x4e
    ULONG CoreParkingDecreaseTime;                                          //0x50
    ULONG CoreParkingIncreaseTime;                                          //0x54
    UCHAR CoreParkingMinCores[2];                                           //0x58
    UCHAR CoreParkingMaxCores[2];                                           //0x5a
    UCHAR AllowScaling;                                                     //0x5c
    UCHAR IdleDisabled;                                                     //0x5d
    ULONG IdleTimeCheck;                                                    //0x60
    UCHAR IdleDemotePercent;                                                //0x64
    UCHAR IdlePromotePercent;                                               //0x65
    UCHAR HeteroDecreaseTime;                                               //0x66
    UCHAR HeteroIncreaseTime;                                               //0x67
    UCHAR HeteroDecreaseThreshold[32];                                      //0x68
    UCHAR HeteroIncreaseThreshold[32];                                      //0x88
    UCHAR Class0FloorPerformance;                                           //0xa8
    UCHAR Class1InitialPerformance;                                         //0xa9
};
/* Used in */
// _POP_PPM_PROFILE

