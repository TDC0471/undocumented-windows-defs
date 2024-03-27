#pragma once
/* ------------------ */

#include <_KPROFILE_SOURCE.h>
#include <_HAL_PMC_COUNTERS.h>

//0x18 bytes (sizeof)
struct _ETW_PMC_SUPPORT
{
    enum _KPROFILE_SOURCE* Source;                                          //0x0
    volatile ULONG HookIdCount;                                             //0x4
    USHORT HookId[4];                                                       //0x8
    volatile ULONG CountersCount;                                           //0x10
    struct _HAL_PMC_COUNTERS* ProcessorCtrs[1];                             //0x14
};
/* Used in */
// _WMI_LOGGER_CONTEXT

