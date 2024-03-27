#pragma once
/* ------------------ */

#include <_ETW_HW_TRACE_EXT_INTERFACE.h>

//0x20 bytes (sizeof)
struct _ETW_IPT_SUPPORT
{
    VOID* IptHandle;                                                        //0x0
    ULONGLONG IptOption;                                                    //0x8
    struct _ETW_HW_TRACE_EXT_INTERFACE* EtwHwTraceExtInterface;             //0x10
    volatile ULONG HookIdCount;                                             //0x14
    USHORT HookId[4];                                                       //0x18
};
/* Used in */
// _WMI_LOGGER_CONTEXT

