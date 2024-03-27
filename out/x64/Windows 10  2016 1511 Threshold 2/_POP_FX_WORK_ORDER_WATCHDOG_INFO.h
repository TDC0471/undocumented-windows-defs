#pragma once
/* ------------------ */

#include <_KTIMER.h>
#include <_KDPC.h>
#include <_POP_FX_WORK_ORDER.h>

//0x88 bytes (sizeof)
struct _POP_FX_WORK_ORDER_WATCHDOG_INFO
{
    struct _KTIMER Timer;                                                   //0x0
    struct _KDPC Dpc;                                                       //0x40
    struct _POP_FX_WORK_ORDER* WorkOrder;                                   //0x80
};
/* Used in */
// _POP_FX_WORK_ORDER

