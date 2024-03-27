#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
union _PPM_POLICY_SETTINGS_MASK
{
    ULONGLONG Value;                                                        //0x0
    ULONG PerfDecreaseTime:1;                                               //0x0
    ULONG PerfIncreaseTime:1;                                               //0x0
    ULONG PerfDecreasePolicy:1;                                             //0x0
    ULONG PerfIncreasePolicy:1;                                             //0x0
    ULONG PerfDecreaseThreshold:1;                                          //0x0
    ULONG PerfIncreaseThreshold:1;                                          //0x0
    ULONG PerfMinPolicy:1;                                                  //0x0
    ULONG PerfMaxPolicy:1;                                                  //0x0
    ULONG PerfTimeCheck:1;                                                  //0x0
    ULONG PerfBoostPolicy:1;                                                //0x0
    ULONG PerfBoostMode:1;                                                  //0x0
    ULONG AllowThrottling:1;                                                //0x0
    ULONG PerfHistoryCount:1;                                               //0x0
    ULONG ParkingPerfState:1;                                               //0x0
    ULONG LatencyHintPerf:1;                                                //0x0
    ULONG LatencyHintUnpark:1;                                              //0x0
    ULONG CoreParkingMinCores:1;                                            //0x0
    ULONG CoreParkingMaxCores:1;                                            //0x0
    ULONG CoreParkingDecreasePolicy:1;                                      //0x0
    ULONG CoreParkingIncreasePolicy:1;                                      //0x0
    ULONG CoreParkingDecreaseTime:1;                                        //0x0
    ULONG CoreParkingIncreaseTime:1;                                        //0x0
    ULONG CoreParkingOverUtilizationThreshold:1;                            //0x0
    ULONG CoreParkingDistributeUtility:1;                                   //0x0
    ULONG CoreParkingConcurrencyThreshold:1;                                //0x0
    ULONG CoreParkingHeadroomThreshold:1;                                   //0x0
    ULONG CoreParkingDistributionThreshold:1;                               //0x0
    ULONG IdleAllowScaling:1;                                               //0x0
    ULONG IdleDisable:1;                                                    //0x0
    ULONG IdleTimeCheck:1;                                                  //0x0
    ULONG IdleDemoteThreshold:1;                                            //0x0
    struct
    {
        ULONG IdlePromoteThreshold:1;                                       //0x0
    ULONG HeteroDecreaseTime:1;                                             //0x4
    ULONG HeteroIncreaseTime:1;                                             //0x4
    ULONG HeteroDecreaseThreshold:1;                                        //0x4
    ULONG HeteroIncreaseThreshold:1;                                        //0x4
    ULONG Class0FloorPerformance:1;                                         //0x4
    ULONG Class1InitialPerformance:1;                                       //0x4
    ULONG EnergyPerfPreference:1;                                           //0x4
    ULONG AutonomousActivityWindow:1;                                       //0x4
    ULONG AutonomousMode:1;                                                 //0x4
    ULONG DutyCycling:1;                                                    //0x4
    ULONG FrequencyCap:1;                                                   //0x4
    ULONG ThreadPolicy:1;                                                   //0x4
    ULONG ShortThreadPolicy:1;                                              //0x4
    ULONG IdleStateMax:1;                                                   //0x4
    ULONG ResponsivenessDisableThreshold:1;                                 //0x4
    ULONG ResponsivenessEnableThreshold:1;                                  //0x4
    ULONG ResponsivenessDisableTime:1;                                      //0x4
    ULONG ResponsivenessEnableTime:1;                                       //0x4
    ULONG ResponsivenessEppCeiling:1;                                       //0x4
    ULONG ResponsivenessPerfFloor:1;                                        //0x4
    };
    ULONG Spare:12;                                                         //0x4
};
/* Used in */
// _PPM_ENGINE_SETTINGS

