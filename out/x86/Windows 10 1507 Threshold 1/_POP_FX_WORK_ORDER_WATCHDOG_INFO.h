#pragma once
/* ------------------ */

#include <_KTIMER.h>
#include <_KDPC.h>
#include <_POP_FX_WORK_ORDER.h>

//0x50 bytes (sizeof)
struct _POP_FX_WORK_ORDER_WATCHDOG_INFO
{
    struct _KTIMER Timer;                                                   //0x0
    struct _KDPC Dpc;                                                       //0x28
    struct _POP_FX_WORK_ORDER* WorkOrder;                                   //0x48
};
/* Used in */
// _POP_FX_WORK_ORDER

