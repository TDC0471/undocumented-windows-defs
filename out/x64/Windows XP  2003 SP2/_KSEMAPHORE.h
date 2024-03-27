#pragma once
/* ------------------ */

#include <_DISPATCHER_HEADER.h>

//0x20 bytes (sizeof)
struct _KSEMAPHORE
{
    struct _DISPATCHER_HEADER Header;                                       //0x0
    LONG Limit;                                                             //0x18
};
/* Used in */
// _ERESOURCE
// _ETHREAD
// _KTHREAD
// _LPCP_NONPAGED_PORT_QUEUE
// _LPCP_PORT_QUEUE
// _WMI_LOGGER_CONTEXT

