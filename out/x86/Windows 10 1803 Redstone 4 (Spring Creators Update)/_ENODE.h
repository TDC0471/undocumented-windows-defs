#pragma once
/* ------------------ */

#include <_KNODE.h>
#include <_WORK_QUEUE_ITEM.h>

//0x140 bytes (sizeof)
struct _ENODE
{
    struct _KNODE Ncb;                                                      //0x0
    struct _WORK_QUEUE_ITEM HotAddProcessorWorkItem;                        //0x100
};
/* Used in */
// _EX_WORK_QUEUE
// _EX_WORK_QUEUE_MANAGER

