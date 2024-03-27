#pragma once
/* ------------------ */

#include <_SYSTEM_POWER_STATE_CONTEXT.h>
#include <POWER_ACTION.h>
#include <_POP_DEVICE_SYS_STATE.h>

//0x10 bytes (sizeof)
struct _POP_CURRENT_BROADCAST
{
    UCHAR InProgress;                                                       //0x0
    struct _SYSTEM_POWER_STATE_CONTEXT SystemContext;                       //0x4
    enum POWER_ACTION PowerAction;                                          //0x8
    struct _POP_DEVICE_SYS_STATE* DeviceState;                              //0xc
};
