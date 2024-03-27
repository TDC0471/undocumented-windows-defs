#pragma once
/* ------------------ */

#include <_ETW_SYSTEM_LOGGER.h>
#include <_PERFINFO_GROUPMASK.h>

//0x154 bytes (sizeof)
struct _ETW_SYSTEM_LOGGER_SETTINGS
{
    struct _ETW_SYSTEM_LOGGER EtwpSystemLogger[8];                          //0x0
    volatile ULONG EtwpActiveSystemLoggers;                                 //0x10
    struct _PERFINFO_GROUPMASK SiloGlobalGroupMask;                         //0x14
    struct _PERFINFO_GROUPMASK EtwpGroupMasks[9];                           //0x34
};
/* Used in */
// _ETW_SILODRIVERSTATE

