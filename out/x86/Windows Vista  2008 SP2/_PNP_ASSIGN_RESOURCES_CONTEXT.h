#pragma once
/* ------------------ */

#include <_DEVICE_OBJECT.h>

//0xc bytes (sizeof)
struct _PNP_ASSIGN_RESOURCES_CONTEXT
{
    ULONG IncludeFailedDevices;                                             //0x0
    ULONG DeviceCount;                                                      //0x4
    struct _DEVICE_OBJECT* DeviceList[1];                                   //0x8
};
