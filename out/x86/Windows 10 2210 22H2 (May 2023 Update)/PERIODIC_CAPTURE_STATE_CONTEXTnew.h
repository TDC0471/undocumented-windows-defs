#pragma once
/* ------------------ */

#include <_EX_TIMER.h>
#include <_PERIODIC_CAPTURE_STATE_GUIDS.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_ETW_PERIODIC_TIMER_STATE.h>

//0x28 bytes (sizeof)
struct PERIODIC_CAPTURE_STATE_CONTEXT
{
    LONGLONG RelativeTimerDueTime;                                          //0x0
    struct _EX_TIMER* Timer;                                                //0x8
    struct _PERIODIC_CAPTURE_STATE_GUIDS Guids;                             //0xc
    struct _WORK_QUEUE_ITEM WorkItem;                                       //0x14
    enum _ETW_PERIODIC_TIMER_STATE TimerState;                              //0x24
};
/* Used in */
// _WMI_LOGGER_CONTEXT

