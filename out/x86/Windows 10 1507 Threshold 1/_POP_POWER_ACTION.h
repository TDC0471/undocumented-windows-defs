#pragma once
/* ------------------ */

#include <POWER_ACTION.h>
#include <_SYSTEM_POWER_STATE.h>
#include <POWER_POLICY_DEVICE_TYPE.h>
#include <_POP_SHUTDOWN_BUG_CHECK.h>
#include <_POP_DEVICE_SYS_STATE.h>
#include <_POP_HIBER_CONTEXT.h>
#include <SYSTEM_POWER_CONDITION.h>
#include <_DIAGNOSTIC_BUFFER.h>
#include <SYSTEM_POWER_CAPABILITIES.h>

//0x100 bytes (sizeof)
struct _POP_POWER_ACTION
{
    UCHAR Updates;                                                          //0x0
    UCHAR State;                                                            //0x1
    UCHAR Shutdown;                                                         //0x2
    enum POWER_ACTION Action;                                               //0x4
    enum _SYSTEM_POWER_STATE LightestState;                                 //0x8
    ULONG Flags;                                                            //0xc
    LONG Status;                                                            //0x10
    enum POWER_POLICY_DEVICE_TYPE DeviceType;                               //0x14
    ULONG DeviceTypeFlags;                                                  //0x18
    UCHAR IrpMinor;                                                         //0x1c
    UCHAR Waking;                                                           //0x1d
    enum _SYSTEM_POWER_STATE SystemState;                                   //0x20
    enum _SYSTEM_POWER_STATE NextSystemState;                               //0x24
    enum _SYSTEM_POWER_STATE EffectiveSystemState;                          //0x28
    enum _SYSTEM_POWER_STATE CurrentSystemState;                            //0x2c
    struct _POP_SHUTDOWN_BUG_CHECK* ShutdownBugCode;                        //0x30
    struct _POP_DEVICE_SYS_STATE* DevState;                                 //0x34
    struct _POP_HIBER_CONTEXT* HiberContext;                                //0x38
    ULONGLONG WakeTime;                                                     //0x40
    ULONGLONG SleepTime;                                                    //0x48
    enum SYSTEM_POWER_CONDITION WakeAlarmSignaled;                          //0x50
    struct
    {
        ULONGLONG RequestedTime;                                            //0x58
        ULONGLONG ProgrammedTime;                                           //0x60
        struct _DIAGNOSTIC_BUFFER* TimerInfo;                               //0x68
    } WakeAlarm[3];                                                         //0x58
    UCHAR WakeAlarmPaused;                                                  //0xa0
    ULONGLONG WakeAlarmLastTime;                                            //0xa8
    struct SYSTEM_POWER_CAPABILITIES FilteredCapabilities;                  //0xb0
};
