#pragma once
/* ------------------ */

#include <_FAULT_INFORMATION_ARCH.h>
#include <_FAULT_INFORMATION_ARM64.h>

//0x1c bytes (sizeof)
struct _FAULT_INFORMATION
{
    enum _FAULT_INFORMATION_ARCH Type;                                      //0x0
    struct _FAULT_INFORMATION_ARM64 Arm64;                                  //0x4
};
/* Used in */
// _DEVICE_FAULT_CONFIGURATION

