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
// _ALPC_PORT
// _ETHREAD
// _LPCP_NONPAGED_PORT_QUEUE
// _LPCP_PORT_QUEUE
// _MMDEREFERENCE_SEGMENT_HEADER
// _PNP_DEVICE_COMPLETION_QUEUE
// _POP_DEVICE_SYS_STATE
// _POP_FX_WORK_POOL

