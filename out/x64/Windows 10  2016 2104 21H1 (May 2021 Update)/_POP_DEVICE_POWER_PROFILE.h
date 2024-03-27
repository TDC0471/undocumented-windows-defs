#pragma once
/* ------------------ */

#include <_UNICODE_STRING.h>
#include <_POP_POWER_PLANE.h>
#include <_POP_FX_DEVICE.h>
#include <_PO_POWER_PLANE_PROFILE.h>
#include <_POP_COMPONENT_POWER_PROFILE.h>

//0x58 bytes (sizeof)
struct _POP_DEVICE_POWER_PROFILE
{
    struct _UNICODE_STRING DeviceId;                                        //0x0
    struct _POP_POWER_PLANE* PowerPlane;                                    //0x10
    struct _POP_FX_DEVICE* FxDevice;                                        //0x18
    LONG PowerDrawMw;                                                       //0x20
    struct _PO_POWER_PLANE_PROFILE DxPower[4];                              //0x24
    ULONGLONG ComponentCount;                                               //0x48
    struct _POP_COMPONENT_POWER_PROFILE** Components;                       //0x50
};
/* Used in */
// _POP_COMPONENT_POWER_PROFILE
// _POP_FX_DEVICE
// _POP_POWER_PLANE

