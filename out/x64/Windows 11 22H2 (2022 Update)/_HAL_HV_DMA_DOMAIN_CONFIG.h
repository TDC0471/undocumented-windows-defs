#pragma once
/* ------------------ */

#include <_HAL_HV_DMA_DOMAIN_CONFIG_ARCH.h>
#include <_HAL_HV_DMA_DOMAIN_CONFIG_ARM64.h>
#include <_HAL_HV_DMA_DOMAIN_CONFIG_X64.h>

//0x28 bytes (sizeof)
struct _HAL_HV_DMA_DOMAIN_CONFIG
{
    enum _HAL_HV_DMA_DOMAIN_CONFIG_ARCH Type;                               //0x0
    union
    {
        struct _HAL_HV_DMA_DOMAIN_CONFIG_ARM64 Arm64;                       //0x8
        struct _HAL_HV_DMA_DOMAIN_CONFIG_X64 X64;                           //0x8
    };
};
/* Used in */
// _HAL_INTEL_ENLIGHTENMENT_INFORMATION

