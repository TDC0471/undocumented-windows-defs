#pragma once
/* ------------------ */

#include <POWER_ACTION_POLICY.h>
#include <_SYSTEM_POWER_STATE.h>
#include <SYSTEM_POWER_LEVEL.h>

//0xe8 bytes (sizeof)
struct _SYSTEM_POWER_POLICY
{
    ULONG Revision;                                                         //0x0
    struct POWER_ACTION_POLICY PowerButton;                                 //0x4
    struct POWER_ACTION_POLICY SleepButton;                                 //0x10
    struct POWER_ACTION_POLICY LidClose;                                    //0x1c
    enum _SYSTEM_POWER_STATE LidOpenWake;                                   //0x28
    ULONG Reserved;                                                         //0x2c
    struct POWER_ACTION_POLICY Idle;                                        //0x30
    ULONG IdleTimeout;                                                      //0x3c
    UCHAR IdleSensitivity;                                                  //0x40
    UCHAR DynamicThrottle;                                                  //0x41
    UCHAR Spare2[2];                                                        //0x42
    enum _SYSTEM_POWER_STATE MinSleep;                                      //0x44
    enum _SYSTEM_POWER_STATE MaxSleep;                                      //0x48
    enum _SYSTEM_POWER_STATE ReducedLatencySleep;                           //0x4c
    ULONG WinLogonFlags;                                                    //0x50
    ULONG Spare3;                                                           //0x54
    ULONG DozeS4Timeout;                                                    //0x58
    ULONG BroadcastCapacityResolution;                                      //0x5c
    struct SYSTEM_POWER_LEVEL DischargePolicy[4];                           //0x60
    ULONG VideoTimeout;                                                     //0xc0
    UCHAR VideoDimDisplay;                                                  //0xc4
    ULONG VideoReserved[3];                                                 //0xc8
    ULONG SpindownTimeout;                                                  //0xd4
    UCHAR OptimizeForPower;                                                 //0xd8
    UCHAR FanThrottleTolerance;                                             //0xd9
    UCHAR ForcedThrottle;                                                   //0xda
    UCHAR MinThrottle;                                                      //0xdb
    struct POWER_ACTION_POLICY OverThrottled;                               //0xdc
};
/* Used in */
// _POP_POWER_SETTING_VALUES

