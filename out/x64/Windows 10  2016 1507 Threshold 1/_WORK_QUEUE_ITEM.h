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
// _MI_ACCESS_LOG_STATE
// _MI_BAD_MEMORY_EVENT_ENTRY
// _MI_COMBINE_WORKITEM
// _MI_LDW_WORK_CONTEXT
// _MI_PARTITION_MODWRITES
// _MI_PARTITION_ZEROING
// _MI_QUEUED_DEADSTACK_WORKITEM
// _MI_REBUILD_LARGE_PAGES
// _MI_RESUME_WORKITEM
// _PENDING_RELATIONS_LIST_ENTRY
// _POP_FX_WORK_ORDER
// _POP_THERMAL_ZONE
// _WHEAP_WORK_QUEUE

