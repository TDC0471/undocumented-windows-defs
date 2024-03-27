#pragma once
/* ------------------ */

#include <_TRIAGE_PNP_DEVICE_COMPLETION_QUEUE.h>
#include <_TRIAGE_EX_WORK_QUEUE.h>

//0x20 bytes (sizeof)
struct _TRIAGE_9F_PNP
{
    USHORT Signature;                                                       //0x0
    USHORT Revision;                                                        //0x2
    struct _TRIAGE_PNP_DEVICE_COMPLETION_QUEUE* CompletionQueue;            //0x8
    struct _TRIAGE_EX_WORK_QUEUE* DelayedWorkQueue;                         //0x10
    struct _TRIAGE_EX_WORK_QUEUE* DelayedIoWorkQueue;                       //0x18
};
