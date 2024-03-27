#pragma once
/* ------------------ */

#include <_RTL_BITMAP.h>

//0x58 bytes (sizeof)
struct _HAL_HV_DMA_HYBRID_PASSTHROUGH_RESERVED_REGIONS
{
    ULONGLONG UnitSizePages;                                                //0x0
    struct _RTL_BITMAP ReservedUnitMap;                                     //0x8
    ULONG ReservedUnitMapBuffer[16];                                        //0x18
};
/* Used in */
// _HAL_INTEL_ENLIGHTENMENT_INFORMATION

