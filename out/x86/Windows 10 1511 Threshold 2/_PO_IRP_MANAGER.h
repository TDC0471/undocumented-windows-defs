#pragma once
/* ------------------ */

#include <_PO_IRP_QUEUE.h>

//0x10 bytes (sizeof)
struct _PO_IRP_MANAGER
{
    struct _PO_IRP_QUEUE DeviceIrpQueue;                                    //0x0
    struct _PO_IRP_QUEUE SystemIrpQueue;                                    //0x8
};
/* Used in */
// _DEVICE_NODE

