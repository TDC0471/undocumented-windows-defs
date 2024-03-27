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
// _ADAPTER_OBJECT
// _EJOB
// _ENODE
// _EPARTITION
// _ESERVERSILO_GLOBALS
// _HIVE_LIST_ENTRY
// _IO_WORKITEM
// _KTM
// _KTRANSACTION
// _MI_ACCESS_LOG_STATE
// _MI_BAD_MEMORY_EVENT_ENTRY
// _MI_COMBINE_WORKITEM
// _MI_LDW_WORK_CONTEXT
// _MI_PARTITION_CORE
// _MI_PARTITION_MODWRITES
// _MI_PARTITION_ZEROING
// _MI_REBUILD_LARGE_PAGE_TIMER
// _MI_RESUME_WORKITEM
// _MI_SECTION_STATE
// _PENDING_RELATIONS_LIST_ENTRY
// _POP_FX_WORK_ORDER
// _POP_FX_WORK_POOL_ITEM
// _POP_THERMAL_ZONE
// _WHEAP_WORK_QUEUE
// _WMI_LOGGER_CONTEXT
// _WNF_DISPATCHER

