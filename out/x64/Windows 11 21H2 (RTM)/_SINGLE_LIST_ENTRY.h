#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>

//0x8 bytes (sizeof)
struct _SINGLE_LIST_ENTRY
{
    struct _SINGLE_LIST_ENTRY* Next;                                        //0x0
};
/* Used in */
// _ALPC_COMPLETION_PACKET_LOOKASIDE
// _ALPC_COMPLETION_PACKET_LOOKASIDE_ENTRY
// _ETHREAD
// _ETW_BUFFER_QUEUE
// _ETW_REALTIME_CONSUMER
// _GENERAL_LOOKASIDE
// _GENERAL_LOOKASIDE_POOL
// _HEAP_SEG_CONTEXT
// _HEAP_VAMGR_RANGE
// _KDPC
// _KDPC_LIST
// _KPRCB
// _KPROCESS
// _KTHREAD
// _LDRP_CSLIST
// _LDR_DDAG_NODE
// _LPCP_MESSAGE
// _MI_PARTITION_SEGMENTS
// _MI_PER_SESSION_PROTOS
// _MI_POOL_STATE
// _MMPFN
// _MM_PAGE_ACCESS_INFO_HEADER
// _PI_BUS_EXTENSION
// _POOL_LIMIT_TABLE_ENTRY
// _RTL_HASH_ENTRY
// _RTL_HASH_TABLE
// _RTL_HASH_TABLE_ITERATOR
// _SINGLE_LIST_ENTRY
// _WMI_BUFFER_HEADER
// _WMI_LOGGER_CONTEXT
// _WORK_QUEUE_ENTRY
