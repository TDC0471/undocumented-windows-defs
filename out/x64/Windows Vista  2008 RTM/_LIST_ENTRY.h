#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x10 bytes (sizeof)
struct _LIST_ENTRY
{
    struct _LIST_ENTRY* Flink;                                              //0x0
    struct _LIST_ENTRY* Blink;                                              //0x8
};
/* Used in */
// _ACTIVATION_CONTEXT_STACK
// _ALPC_PROCESS_CONTEXT
// _ARBITER_BOOT_ALLOCATION_PARAMETERS
// _ARBITER_LIST_ENTRY
// _ARBITER_QUERY_ARBITRATE_PARAMETERS
// _ARBITER_RETEST_ALLOCATION_PARAMETERS
// _ARBITER_TEST_ALLOCATION_PARAMETERS
// _ARC_DISK_INFORMATION
// _BITMAP_RANGE
// _CALL_HASH_ENTRY
// _CALL_PERFORMANCE_DATA
// _CMHIVE
// _CM_KCB_UOW
// _CM_KEY_BODY
// _CM_KEY_CONTROL_BLOCK
// _CM_KEY_SECURITY_CACHE
// _CM_NOTIFY_BLOCK
// _CM_RM
// _CM_TRANS
// _CM_VIEW_OF_FILE
// _CM_WORKITEM
// _CONTROL_AREA
// _DEFERRED_WRITE
// _DEVICE_NODE
// _DEVICE_OBJECT
// _DEVICE_OBJECT_POWER_EXTENSION
// _DISPATCHER_HEADER
// _DUAL
// _DUMP_STACK_CONTEXT
// _EJOB
// _EPROCESS
// _ERESOURCE
// _ETHREAD
// _ETIMER
// _ETW_GUID_ENTRY
// _ETW_REG_ENTRY
// _FILE_OBJECT
// _GENERAL_LOOKASIDE
// _GENERAL_LOOKASIDE_POOL
// _HANDLE_TABLE
// _HEAP
// _HEAP_FREE_ENTRY
// _HEAP_LIST_LOOKUP
// _HEAP_SEGMENT
// _HEAP_UCR_DESCRIPTOR
// _HEAP_VIRTUAL_ALLOC_ENTRY
// _IO_TIMER
// _IRP
// _KAPC
// _KAPC_STATE
// _KDEVICE_QUEUE
// _KDEVICE_QUEUE_ENTRY
// _KDPC
// _KDPC_DATA
// _KENLISTMENT
// _KINTERRUPT
// _KMUTANT
// _KPRCB
// _KPROCESS
// _KQUEUE
// _KRESOURCEMANAGER
// _KRESOURCEMANAGER_COMPLETION_BINDING
// _KTHREAD
// _KTIMER
// _KTIMER_TABLE_ENTRY
// _KTM
// _KTRANSACTION
// _KWAIT_BLOCK
// _LDR_DATA_TABLE_ENTRY
// _LIST_ENTRY
// _LOADER_PARAMETER_BLOCK
// _LOADER_PARAMETER_EXTENSION
// _LPCP_MESSAGE
// _LPCP_PORT_OBJECT
// _LPCP_PORT_QUEUE
// _MBCB
// _MEMORY_ALLOCATION_DESCRIPTOR
// _MI_VERIFIER_DRIVER_ENTRY
// _MMMOD_WRITER_MDL_ENTRY
// _MMSUPPORT
// _MMVAD_LONG
// _MM_SESSION_SPACE
// _MSUBSECTION
// _OBJECT_HEADER_CREATOR_INFO
// _OBJECT_TYPE
// _PEB
// _PEB_LDR_DATA
// _PI_RESOURCE_ARBITER_ENTRY
// _PNP_DEVICE_COMPLETION_QUEUE
// _PNP_DEVICE_EVENT_ENTRY
// _PNP_DEVICE_EVENT_LIST
// _POOL_BLOCK_HEAD
// _POOL_DESCRIPTOR
// _POP_DEVICE_SYS_STATE
// _POP_HIBER_CONTEXT
// _POP_THERMAL_ZONE
// _POP_TRIGGER_WAIT
// _POWER_CHANNEL_SUMMARY
// _PO_DEVICE_NOTIFY
// _PO_NOTIFY_ORDER_LEVEL
// _PRIVATE_CACHE_MAP
// _RTLP_RANGE_LIST_ENTRY
// _RTL_CRITICAL_SECTION_DEBUG
// _RTL_RANGE_LIST
// _SHARED_CACHE_MAP
// _SHARED_CACHE_MAP_LIST_CURSOR
// _SYSPTES_HEADER
// _TEB
// _VACB
// _VACB_ARRAY_HEADER
// _VI_DEADLOCK_GLOBALS
// _VI_DEADLOCK_NODE
// _VI_DEADLOCK_RESOURCE
// _VI_DEADLOCK_THREAD
// _VOLUME_CACHE_MAP
// _WMI_BUFFER_HEADER
// _WMI_LOGGER_CONTEXT
// _WORK_QUEUE_ENTRY
// _WORK_QUEUE_ITEM
