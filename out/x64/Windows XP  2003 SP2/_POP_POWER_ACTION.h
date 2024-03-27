#pragma once
/* ------------------ */

#include <POWER_ACTION.h>
#include <_SYSTEM_POWER_STATE.h>
#include <_POP_SHUTDOWN_BUG_CHECK.h>
#include <_POP_DEVICE_SYS_STATE.h>
#include <_POP_HIBER_CONTEXT.h>

//0x50 bytes (sizeof)
struct _POP_POWER_ACTION
{
    UCHAR Updates;                                                          //0x0
    UCHAR State;                                                            //0x1
    UCHAR Shutdown;                                                         //0x2
    enum POWER_ACTION Action;                                               //0x4
    enum _SYSTEM_POWER_STATE LightestState;                                 //0x8
    ULONG Flags;                                                            //0xc
    LONG Status;                                                            //0x10
    UCHAR IrpMinor;                                                         //0x14
    enum _SYSTEM_POWER_STATE SystemState;                                   //0x18
    enum _SYSTEM_POWER_STATE NextSystemState;                               //0x1c
    struct _POP_SHUTDOWN_BUG_CHECK* ShutdownBugCode;                        //0x20
    struct _POP_DEVICE_SYS_STATE* DevState;                                 //0x28
    struct _POP_HIBER_CONTEXT* HiberContext;                                //0x30
    enum _SYSTEM_POWER_STATE LastWakeState;                                 //0x38
    ULONGLONG WakeTime;                                                     //0x40
    ULONGLONG SleepTime;                                                    //0x48
};
