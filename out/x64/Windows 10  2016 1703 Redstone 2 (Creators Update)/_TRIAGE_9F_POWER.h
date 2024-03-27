#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_TRIAGE_EX_WORK_QUEUE.h>

//0x20 bytes (sizeof)
struct _TRIAGE_9F_POWER
{
    USHORT Signature;                                                       //0x0
    USHORT Revision;                                                        //0x2
    struct _LIST_ENTRY* IrpList;                                            //0x8
    struct _LIST_ENTRY* ThreadList;                                         //0x10
    struct _TRIAGE_EX_WORK_QUEUE* DelayedWorkQueue;                         //0x18
};
