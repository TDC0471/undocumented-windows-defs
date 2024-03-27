#pragma once
/* ------------------ */

#include <_HAL_HV_DMA_DOMAIN_INFO.h>

//0xc bytes (sizeof)
struct _HAL_HV_DMA_CREATE_DOMAIN_INFO
{
    struct _HAL_HV_DMA_DOMAIN_INFO DomainInfo;                              //0x0
    UCHAR InheritPassthroughDomain;                                         //0x8
    UCHAR ForwardProgressRequired;                                          //0x9
};
/* Used in */
// _HAL_INTEL_ENLIGHTENMENT_INFORMATION

