#pragma once
/* ------------------ */

#include <_WORK_QUEUE_ITEM.h>
#include <_POP_FX_WORK_ORDER_WATCHDOG_INFO.h>

//0x38 bytes (sizeof)
struct _POP_FX_WORK_ORDER
{
    struct _WORK_QUEUE_ITEM WorkItem;                                       //0x0
    LONG WorkCount;                                                         //0x20
    VOID* Context;                                                          //0x28
    struct _POP_FX_WORK_ORDER_WATCHDOG_INFO* WatchdogTimerInfo;             //0x30
};
/* Used in */
// _POP_FX_COMPONENT
// _POP_FX_DEVICE
// _POP_FX_PERF_INFO
// _POP_FX_WORK_ORDER_WATCHDOG_INFO

