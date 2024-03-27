#pragma once
/* ------------------ */

#include <_TP_TASK_CALLBACKS.h>
#include <_TP_NBQ_GUARD.h>

//0x38 bytes (sizeof)
struct _TP_TASK
{
    struct _TP_TASK_CALLBACKS* Callbacks;                                   //0x0
    ULONG NumaNode;                                                         //0x8
    UCHAR IdealProcessor;                                                   //0xc
    struct _TP_NBQ_GUARD PostGuard;                                         //0x10
    VOID* NBQNode;                                                          //0x30
};
/* Used in */
// _TP_TASK_CALLBACKS

