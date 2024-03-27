#pragma once
/* ------------------ */

#include <_UNICODE_STRING.h>
#include <_POP_POWER_PLANE.h>
#include <_POP_FX_DEVICE.h>
#include <_PO_POWER_PLANE_PROFILE.h>
#include <_POP_COMPONENT_POWER_PROFILE.h>

//0x3c bytes (sizeof)
struct _POP_DEVICE_POWER_PROFILE
{
    struct _UNICODE_STRING DeviceId;                                        //0x0
    struct _POP_POWER_PLANE* PowerPlane;                                    //0x8
    struct _POP_FX_DEVICE* FxDevice;                                        //0xc
    LONG PowerDrawMw;                                                       //0x10
    struct _PO_POWER_PLANE_PROFILE DxPower[4];                              //0x14
    ULONG ComponentCount;                                                   //0x34
    struct _POP_COMPONENT_POWER_PROFILE** Components;                       //0x38
};
/* Used in */
// _POP_COMPONENT_POWER_PROFILE
// _POP_FX_DEVICE
// _POP_POWER_PLANE

