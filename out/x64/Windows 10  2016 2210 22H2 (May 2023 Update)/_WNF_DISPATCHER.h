#pragma once
/* ------------------ */

#include <_WNF_NODE_HEADER.h>
#include <_WORK_QUEUE_ITEM.h>

//0x30 bytes (sizeof)
struct _WNF_DISPATCHER
{
    struct _WNF_NODE_HEADER Header;                                         //0x0
    struct _WORK_QUEUE_ITEM WorkItem;                                       //0x8
    LONG State;                                                             //0x28
};
