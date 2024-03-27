#pragma once
/* ------------------ */

#include <_UNICODE_STRING.h>
#include <_POP_DEVICE_POWER_PROFILE.h>

//0x24 bytes (sizeof)
struct _POP_POWER_PLANE
{
    struct _UNICODE_STRING PowerPlaneId;                                    //0x0
    ULONG Lock;                                                             //0x8
    UCHAR OldIrql;                                                          //0xc
    volatile LONG DevicePowerMw;                                            //0x10
    VOID* PmaxHandle;                                                       //0x14
    VOID (*NotifyDevicePowerDraw)(VOID* arg1, ULONG arg2);                  //0x18
    ULONG DeviceCount;                                                      //0x1c
    struct _POP_DEVICE_POWER_PROFILE** Devices;                             //0x20
};
/* Used in */
// _POP_DEVICE_POWER_PROFILE

