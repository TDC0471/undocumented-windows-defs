#pragma once
/* ------------------ */

#include <_KPROFILE_SOURCE.h>
#include <_HAL_PMC_COUNTERS.h>

//0x34 bytes (sizeof)
struct _ETW_PMC_SUPPORT
{
    enum _KPROFILE_SOURCE Source[8];                                        //0x0
    volatile ULONG HookIdCount;                                             //0x20
    USHORT HookId[4];                                                       //0x24
    volatile ULONG CountersCount;                                           //0x2c
    struct _HAL_PMC_COUNTERS* ProcessorCtrs[1];                             //0x30
};
/* Used in */
// _WMI_LOGGER_CONTEXT

