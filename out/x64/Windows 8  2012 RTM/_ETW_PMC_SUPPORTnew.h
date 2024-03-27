#pragma once
/* ------------------ */

#include <_KPROFILE_SOURCE.h>
#include <_HAL_PMC_COUNTERS.h>

//0x28 bytes (sizeof)
struct _ETW_PMC_SUPPORT
{
    enum _KPROFILE_SOURCE Source[4];                                        //0x0
    volatile ULONG HookIdCount;                                             //0x10
    USHORT HookId[4];                                                       //0x14
    volatile ULONG CountersCount;                                           //0x1c
    struct _HAL_PMC_COUNTERS* ProcessorCtrs[1];                             //0x20
};
/* Used in */
// _WMI_LOGGER_CONTEXT

