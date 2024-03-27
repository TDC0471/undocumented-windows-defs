#pragma once
/* ------------------ */

#include <_FAULT_INFORMATION_ARCH.h>
#include <_FAULT_INFORMATION_ARM64.h>

//0x30 bytes (sizeof)
struct _FAULT_INFORMATION
{
    enum _FAULT_INFORMATION_ARCH Type;                                      //0x0
    struct _FAULT_INFORMATION_ARM64 Arm64;                                  //0x8
};
/* Used in */
// _DEVICE_FAULT_CONFIGURATION

