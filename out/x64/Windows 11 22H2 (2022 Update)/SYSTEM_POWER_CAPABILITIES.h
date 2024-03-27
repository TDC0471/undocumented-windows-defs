#pragma once
/* ------------------ */

#include <BATTERY_REPORTING_SCALE.h>
#include <_SYSTEM_POWER_STATE.h>

//0x4c bytes (sizeof)
struct SYSTEM_POWER_CAPABILITIES
{
    UCHAR PowerButtonPresent;                                               //0x0
    UCHAR SleepButtonPresent;                                               //0x1
    UCHAR LidPresent;                                                       //0x2
    UCHAR SystemS1;                                                         //0x3
    UCHAR SystemS2;                                                         //0x4
    UCHAR SystemS3;                                                         //0x5
    UCHAR SystemS4;                                                         //0x6
    UCHAR SystemS5;                                                         //0x7
    UCHAR HiberFilePresent;                                                 //0x8
    UCHAR FullWake;                                                         //0x9
    UCHAR VideoDimPresent;                                                  //0xa
    UCHAR ApmPresent;                                                       //0xb
    UCHAR UpsPresent;                                                       //0xc
    UCHAR ThermalControl;                                                   //0xd
    UCHAR ProcessorThrottle;                                                //0xe
    UCHAR ProcessorMinThrottle;                                             //0xf
    UCHAR ProcessorMaxThrottle;                                             //0x10
    UCHAR FastSystemS4;                                                     //0x11
    UCHAR Hiberboot;                                                        //0x12
    UCHAR WakeAlarmPresent;                                                 //0x13
    UCHAR AoAc;                                                             //0x14
    UCHAR DiskSpinDown;                                                     //0x15
    UCHAR HiberFileType;                                                    //0x16
    UCHAR AoAcConnectivitySupported;                                        //0x17
    UCHAR spare3[6];                                                        //0x18
    UCHAR SystemBatteriesPresent;                                           //0x1e
    UCHAR BatteriesAreShortTerm;                                            //0x1f
    struct BATTERY_REPORTING_SCALE BatteryScale[3];                         //0x20
    enum _SYSTEM_POWER_STATE AcOnLineWake;                                  //0x38
    enum _SYSTEM_POWER_STATE SoftLidWake;                                   //0x3c
    enum _SYSTEM_POWER_STATE RtcWake;                                       //0x40
    enum _SYSTEM_POWER_STATE MinDeviceWakeState;                            //0x44
    enum _SYSTEM_POWER_STATE DefaultLowLatencyWake;                         //0x48
};
/* Used in */
// _POP_POWER_ACTION

