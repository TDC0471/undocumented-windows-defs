#pragma once
/* ------------------ */

#include <_WORK_QUEUE_ITEM.h>
#include <_ETHREAD.h>
#include <_KEVENT.h>

//0x80 bytes (sizeof)
struct _POP_DISPLAY_RESUME_CONTEXT
{
    struct _WORK_QUEUE_ITEM WorkItem;                                       //0x0
    struct _ETHREAD* WorkerThread;                                          //0x20
    struct _KEVENT PrepareUIEvent;                                          //0x28
    struct _KEVENT PowerOnEvent;                                            //0x40
    struct _KEVENT DoneEvent;                                               //0x58
    ULONG WorkerQueued;                                                     //0x70
    ULONG WorkerAbort;                                                      //0x74
    ULONG NoResumeUI;                                                       //0x78
};
/* Used in */
// _POP_POWER_ACTION

