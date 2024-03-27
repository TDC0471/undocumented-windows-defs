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
#include <_KDPC.h>
#include <_KTIMER.h>
#include <_POP_POWER_ACTION_WATCHDOG_STATE.h>
#include <_KTHREAD.h>

//0x1c8 bytes (sizeof)
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
    struct _POP_DEVICE_SYS_STATE* DevState;                                 //0x38
    struct _POP_HIBER_CONTEXT* HiberContext;                                //0x40
    ULONGLONG WakeTime;                                                     //0x48
    ULONGLONG SleepTime;                                                    //0x50
    ULONGLONG WakeFirstUnattendedTime;                                      //0x58
    enum SYSTEM_POWER_CONDITION WakeAlarmSignaled;                          //0x60
    struct
    {
        ULONGLONG RequestedTime;                                            //0x68
        ULONGLONG ProgrammedTime;                                           //0x70
        struct _DIAGNOSTIC_BUFFER* TimerInfo;                               //0x78
    } WakeAlarm[3];                                                         //0x68
    UCHAR WakeAlarmPaused;                                                  //0xb0
    ULONGLONG WakeAlarmLastTime;                                            //0xb8
    ULONGLONG DozeDeferralStartTime;                                        //0xc0
    struct SYSTEM_POWER_CAPABILITIES FilteredCapabilities;                  //0xc8
    ULONGLONG WatchdogLock;                                                 //0x118
    struct _KDPC WatchdogDpc;                                               //0x120
    struct _KTIMER WatchdogTimer;                                           //0x160
    UCHAR WatchdogInitialized;                                              //0x1a0
    enum _POP_POWER_ACTION_WATCHDOG_STATE WatchdogState;                    //0x1a4
    ULONGLONG WatchdogStartTime;                                            //0x1a8
    struct _KTHREAD* ActionWorkerThread;                                    //0x1b0
    struct _KTHREAD* PromoteActionWorkerThread;                             //0x1b8
    struct _KTHREAD* UnlockAfterSleepWorkerThread;                          //0x1c0
};
