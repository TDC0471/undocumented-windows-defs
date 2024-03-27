#pragma once
/* ------------------ */

#include <_POP_FX_WORK_POOL.h>
#include <_WORK_QUEUE_ITEM.h>

//0x14 bytes (sizeof)
struct _POP_FX_WORK_POOL_ITEM
{
    struct _POP_FX_WORK_POOL* WorkPool;                                     //0x0
    struct _WORK_QUEUE_ITEM WorkItem;                                       //0x4
};
/* Used in */
// _POP_FX_WORK_POOL

