#pragma once
/* ------------------ */

#include <_GUID.h>
#include <_POP_DEVICE_POWER_PROFILE.h>
#include <_PO_POWER_PLANE_PROFILE.h>

//0x28 bytes (sizeof)
struct _POP_COMPONENT_POWER_PROFILE
{
    struct _GUID ComponentGuid;                                             //0x0
    struct _POP_DEVICE_POWER_PROFILE* Device;                               //0x10
    ULONGLONG FxCount;                                                      //0x18
    struct _PO_POWER_PLANE_PROFILE FxPower[1];                              //0x20
};
/* Used in */
// _POP_DEVICE_POWER_PROFILE
// _POP_FX_COMPONENT

