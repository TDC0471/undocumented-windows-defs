#pragma once
/* ------------------ */

#include <_UNICODE_STRING.h>
#include <_POP_DEVICE_POWER_PROFILE.h>

//0x40 bytes (sizeof)
struct _POP_POWER_PLANE
{
    struct _UNICODE_STRING PowerPlaneId;                                    //0x0
    ULONGLONG Lock;                                                         //0x10
    UCHAR OldIrql;                                                          //0x18
    volatile LONG DevicePowerMw;                                            //0x1c
    VOID* PmaxHandle;                                                       //0x20
    VOID (*NotifyDevicePowerDraw)(VOID* arg1, ULONG arg2);                  //0x28
    ULONGLONG DeviceCount;                                                  //0x30
    struct _POP_DEVICE_POWER_PROFILE** Devices;                             //0x38
};
/* Used in */
// _POP_DEVICE_POWER_PROFILE

