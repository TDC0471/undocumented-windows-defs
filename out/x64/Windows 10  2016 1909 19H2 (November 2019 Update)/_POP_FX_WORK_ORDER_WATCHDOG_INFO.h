#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KTIMER.h>
#include <_KDPC.h>
#include <_POP_FX_WORK_ORDER.h>
#include <_PEP_WORK_INFORMATION.h>
#include <_KTHREAD.h>

//0xb0 bytes (sizeof)
struct _POP_FX_WORK_ORDER_WATCHDOG_INFO
{
    struct _LIST_ENTRY Link;                                                //0x0
    struct _KTIMER Timer;                                                   //0x10
    struct _KDPC Dpc;                                                       //0x50
    struct _POP_FX_WORK_ORDER* WorkOrder;                                   //0x90
    struct _PEP_WORK_INFORMATION* CurrentWorkInfo;                          //0x98
    ULONGLONG WatchdogStart;                                                //0xa0
    struct _KTHREAD* WorkerThread;                                          //0xa8
};
/* Used in */
// _POP_FX_DEVICE
// _POP_FX_WORK_ORDER

