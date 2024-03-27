#pragma once
/* ------------------ */

#include <_SYSTEM_POWER_POLICY.h>
#include <SYSTEM_POWER_CONDITION.h>

//0x13c bytes (sizeof)
struct _POP_POWER_SETTING_VALUES
{
    ULONG StructureSize;                                                    //0x0
    struct _SYSTEM_POWER_POLICY PopPolicy;                                  //0x4
    enum SYSTEM_POWER_CONDITION CurrentAcDcPowerState;                      //0xec
    UCHAR AwayModeEnabled;                                                  //0xf0
    UCHAR AwayModeEngaged;                                                  //0xf1
    UCHAR AwayModePolicyAllowed;                                            //0xf2
    volatile LONG AwayModeIgnoreUserPresent;                                //0xf4
    volatile LONG AwayModeIgnoreAction;                                     //0xf8
    UCHAR DisableFastS4;                                                    //0xfc
    UCHAR DisableStandbyStates;                                             //0xfd
    ULONG UnattendSleepTimeout;                                             //0x100
    volatile ULONG DiskIgnoreTime;                                          //0x104
    volatile ULONG DeviceIdlePolicy;                                        //0x108
    ULONG VideoDimTimeout;                                                  //0x10c
    ULONG VideoNormalBrightness;                                            //0x110
    ULONG VideoDimBrightness;                                               //0x114
    ULONG AlsOffset;                                                        //0x118
    ULONG AlsEnabled;                                                       //0x11c
    ULONG EsBrightness;                                                     //0x120
    UCHAR SwitchShutdownForced;                                             //0x124
    ULONG SystemCoolingPolicy;                                              //0x128
    UCHAR MediaBufferingEngaged;                                            //0x12c
    UCHAR OffloadedAudio;                                                   //0x12d
    UCHAR NonOffloadedAudio;                                                //0x12e
    UCHAR FullscreenVideoPlayback;                                          //0x12f
    ULONG EsBatteryThreshold;                                               //0x130
    UCHAR EsUserAwaySetting;                                                //0x134
    ULONG WiFiInStandby;                                                    //0x138
};
