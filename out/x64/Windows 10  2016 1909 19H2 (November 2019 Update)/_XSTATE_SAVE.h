#pragma once
/* ------------------ */

#include <_XSTATE_SAVE.h>
#include <_KTHREAD.h>
#include <_XSTATE_CONTEXT.h>

//0x38 bytes (sizeof)
struct _XSTATE_SAVE
{
    struct _XSTATE_SAVE* Prev;                                              //0x0
    struct _KTHREAD* Thread;                                                //0x8
    UCHAR Level;                                                            //0x10
    struct _XSTATE_CONTEXT XStateContext;                                   //0x18
};
/* Used in */
// _KTHREAD
// _XSTATE_SAVE

