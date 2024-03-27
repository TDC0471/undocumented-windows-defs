#pragma once
/* ------------------ */

#include <_DEVICE_MAP.h>
#include <_OBP_SYSTEM_DOS_DEVICE_STATE.h>
#include <_EX_PUSH_LOCK.h>

//0x74 bytes (sizeof)
struct _OBP_SILODRIVERSTATE
{
    struct _DEVICE_MAP* SystemDeviceMap;                                    //0x0
    struct _OBP_SYSTEM_DOS_DEVICE_STATE SystemDosDeviceState;               //0x4
    struct _EX_PUSH_LOCK DeviceMapLock;                                     //0x70
};
