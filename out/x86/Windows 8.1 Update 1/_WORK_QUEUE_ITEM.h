#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x10 bytes (sizeof)
struct _WORK_QUEUE_ITEM
{
    struct _LIST_ENTRY List;                                                //0x0
    VOID (*WorkerRoutine)(VOID* arg1);                                      //0x8
    VOID* Parameter;                                                        //0xc
};
/* Used in */
// _IO_WORKITEM
// _KTM
// _KTRANSACTION
// _PENDING_RELATIONS_LIST_ENTRY
// _POP_FX_WORK_ORDER
// _POP_THERMAL_ZONE
// _WHEAP_WORK_QUEUE

