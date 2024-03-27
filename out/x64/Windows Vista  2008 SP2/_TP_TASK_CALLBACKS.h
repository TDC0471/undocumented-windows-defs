#pragma once
/* ------------------ */

#include <_TP_CALLBACK_INSTANCE.h>
#include <_TP_TASK.h>
#include <_TP_POOL.h>

//0x10 bytes (sizeof)
struct _TP_TASK_CALLBACKS
{
    VOID (*ExecuteCallback)(struct _TP_CALLBACK_INSTANCE* arg1, struct _TP_TASK* arg2); //0x0
    VOID (*Unposted)(struct _TP_TASK* arg1, struct _TP_POOL* arg2);         //0x8
};
/* Used in */
// _TP_TASK

