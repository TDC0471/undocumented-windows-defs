#pragma once
/* ------------------ */

#include <_DOMAIN_CONFIGURATION_ARCH.h>
#include <_DOMAIN_CONFIGURATION_ARM64.h>

//0x28 bytes (sizeof)
struct _DOMAIN_CONFIGURATION
{
    enum _DOMAIN_CONFIGURATION_ARCH Type;                                   //0x0
    struct _DOMAIN_CONFIGURATION_ARM64 Arm64;                               //0x8
};
/* Used in */
// _DMA_IOMMU_INTERFACE

