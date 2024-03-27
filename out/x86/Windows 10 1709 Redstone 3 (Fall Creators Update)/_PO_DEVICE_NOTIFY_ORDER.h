#pragma once
/* ------------------ */

#include <_DEVICE_OBJECT.h>
#include <_PO_NOTIFY_ORDER_LEVEL.h>

//0xd0 bytes (sizeof)
struct _PO_DEVICE_NOTIFY_ORDER
{
    UCHAR Locked;                                                           //0x0
    struct _DEVICE_OBJECT** WarmEjectPdoPointer;                            //0x4
    struct _PO_NOTIFY_ORDER_LEVEL OrderLevel[5];                            //0x8
};
/* Used in */
// _POP_DEVICE_SYS_STATE

