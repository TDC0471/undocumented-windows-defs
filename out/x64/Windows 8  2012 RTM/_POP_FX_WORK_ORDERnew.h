#pragma once
/* ------------------ */

#include <_WORK_QUEUE_ITEM.h>

//0x28 bytes (sizeof)
struct _POP_FX_WORK_ORDER
{
    struct _WORK_QUEUE_ITEM WorkItem;                                       //0x0
    LONG WorkCount;                                                         //0x20
};
/* Used in */
// _POP_FX_COMPONENT
// _POP_FX_DEVICE
// _POP_FX_PLUGIN

