#pragma once
/* ------------------ */

#include <_KDPC.h>
#include <_KTIMER.h>
#include <_WORK_QUEUE_ITEM.h>

//0x58 bytes (sizeof)
struct _TIMEZONE_CHANGE_EVENT
{
    struct _KDPC Dpc;                                                       //0x0
    struct _KTIMER Timer;                                                   //0x20
    struct _WORK_QUEUE_ITEM WorkItem;                                       //0x48
};
/* Used in */
// _EX_TIMEZONE_STATE

