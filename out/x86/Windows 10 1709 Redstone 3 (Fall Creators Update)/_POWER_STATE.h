#pragma once
/* ------------------ */

#include <_SYSTEM_POWER_STATE.h>
#include <_DEVICE_POWER_STATE.h>

//0x4 bytes (sizeof)
union _POWER_STATE
{
    enum _SYSTEM_POWER_STATE SystemState;                                   //0x0
    enum _DEVICE_POWER_STATE DeviceState;                                   //0x0
};
/* Used in */
// _DEVICE_NODE
// _IO_STACK_LOCATION
// _POP_FX_DEVICE
// _POP_IRP_DATA

