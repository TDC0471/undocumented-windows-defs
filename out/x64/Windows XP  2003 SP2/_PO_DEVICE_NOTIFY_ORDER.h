#pragma once
/* ------------------ */

#include <_DEVICE_OBJECT.h>
#include <_PO_NOTIFY_ORDER_LEVEL.h>

//0x410 bytes (sizeof)
struct _PO_DEVICE_NOTIFY_ORDER
{
    ULONG DevNodeSequence;                                                  //0x0
    struct _DEVICE_OBJECT** WarmEjectPdoPointer;                            //0x8
    struct _PO_NOTIFY_ORDER_LEVEL OrderLevel[8];                            //0x10
};
/* Used in */
// _POP_DEVICE_SYS_STATE

