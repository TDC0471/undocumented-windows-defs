#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x20 bytes (sizeof)
struct _WORK_QUEUE_ITEM
{
    struct _LIST_ENTRY List;                                                //0x0
    VOID (*WorkerRoutine)(VOID* arg1);                                      //0x10
    VOID* Parameter;                                                        //0x18
};
/* Used in */
// _IO_WORKITEM
// _KTM
// _KTRANSACTION
// _PENDING_RELATIONS_LIST_ENTRY
// _PNP_DEVICE_COMPLETION_REQUEST

