#pragma once
/* ------------------ */

#include <_FAULT_INFORMATION_ARCH.h>
#include <_FAULT_INFORMATION_ARM64.h>
#include <_FAULT_INFORMATION_X64.h>

//0x28 bytes (sizeof)
struct _FAULT_INFORMATION
{
    enum _FAULT_INFORMATION_ARCH Type;                                      //0x0
    UCHAR IsStage1;                                                         //0x4
    union
    {
        struct _FAULT_INFORMATION_ARM64 Arm64;                              //0x8
        struct _FAULT_INFORMATION_X64 X64;                                  //0x8
    };
};
/* Used in */
// HAL_PRIVATE_DISPATCH
// _DEVICE_FAULT_CONFIGURATION

