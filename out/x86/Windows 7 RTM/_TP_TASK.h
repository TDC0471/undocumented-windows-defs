#pragma once
/* ------------------ */

#include <_TP_TASK_CALLBACKS.h>
#include <_TP_NBQ_GUARD.h>

//0x20 bytes (sizeof)
struct _TP_TASK
{
    struct _TP_TASK_CALLBACKS* Callbacks;                                   //0x0
    ULONG NumaNode;                                                         //0x4
    UCHAR IdealProcessor;                                                   //0x8
    struct _TP_NBQ_GUARD PostGuard;                                         //0xc
    VOID* NBQNode;                                                          //0x1c
};
/* Used in */
// _TP_TASK_CALLBACKS

