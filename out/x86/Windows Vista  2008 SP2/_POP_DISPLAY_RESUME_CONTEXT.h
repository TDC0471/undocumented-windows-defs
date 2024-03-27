#pragma once
/* ------------------ */

#include <_WORK_QUEUE_ITEM.h>
#include <_ETHREAD.h>
#include <_KEVENT.h>

//0x50 bytes (sizeof)
struct _POP_DISPLAY_RESUME_CONTEXT
{
    struct _WORK_QUEUE_ITEM WorkItem;                                       //0x0
    struct _ETHREAD* WorkerThread;                                          //0x10
    struct _KEVENT PrepareUIEvent;                                          //0x14
    struct _KEVENT PowerOnEvent;                                            //0x24
    struct _KEVENT DoneEvent;                                               //0x34
    ULONG WorkerQueued;                                                     //0x44
    ULONG WorkerAbort;                                                      //0x48
    ULONG NoResumeUI;                                                       //0x4c
};
/* Used in */
// _POP_POWER_ACTION

