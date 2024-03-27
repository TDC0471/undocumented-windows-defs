#pragma once
/* ------------------ */

#include <_DISPATCHER_HEADER.h>

//0x14 bytes (sizeof)
struct _KSEMAPHORE
{
    struct _DISPATCHER_HEADER Header;                                       //0x0
    LONG Limit;                                                             //0x10
};
/* Used in */
// _ALPC_PORT
// _ERESOURCE
// _ETHREAD
// _LPCP_NONPAGED_PORT_QUEUE
// _LPCP_PORT_QUEUE
// _PNP_DEVICE_COMPLETION_QUEUE
// _POP_DEVICE_SYS_STATE

