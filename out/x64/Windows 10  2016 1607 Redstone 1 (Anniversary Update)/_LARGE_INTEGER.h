#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
union _LARGE_INTEGER
{
    struct
    {
        ULONG LowPart;                                                      //0x0
        LONG HighPart;                                                      //0x4
    };
    struct
    {
        ULONG LowPart;                                                      //0x0
        LONG HighPart;                                                      //0x4
    } u;                                                                    //0x0
    LONGLONG QuadPart;                                                      //0x0
};
/* Used in */
// PO_MEMORY_IMAGE
// _CMHIVE
// _CM_KCB_UOW
// _CM_KEY_CONTROL_BLOCK
// _CM_KEY_NODE
// _CM_PARTIAL_RESOURCE_DESCRIPTOR
// _DEVICE_DESCRIPTION
// _DUMP_INITIALIZATION_CONTEXT
// _DUMP_STACK_CONTEXT
// _DYNAMIC_FUNCTION_TABLE
// _EJOB
// _EPROCESS
// _ETHREAD
// _ETW_LAST_ENABLE_INFO
// _ETW_REF_CLOCK
// _EVENT_HEADER
// _FAST_IO_DISPATCH
// _FILE_BASIC_INFORMATION
// _FILE_NETWORK_OPEN_INFORMATION
// _FILE_OBJECT
// _FILE_STANDARD_INFORMATION
// _FSRTL_ADVANCED_FCB_HEADER
// _FS_FILTER_PARAMETERS
// _HBASE_BLOCK
// _HBIN
// _HHIVE
// _INTERRUPT_VECTOR_DATA
// _IOP_IRP_EXTENSION
// _IO_RESOURCE_DESCRIPTOR
// _IO_STACK_LOCATION
// _IRP
// _KPRCB
// _KRESOURCEMANAGER
// _KTIMER_EXPIRATION_TRACE
// _KTM
// _KTRANSACTION
// _KUSER_SHARED_DATA
// _LDR_DATA_TABLE_ENTRY
// _LOGGED_STREAM_CALLBACK_V1
// _LOG_HANDLE_CONTEXT
// _MAILSLOT_CREATE_PARAMETERS
// _MI_BAD_MEMORY_EVENT_ENTRY
// _MI_PAGEFILE_TRACES
// _MI_PROCESS_STATE
// _MMINPAGE_SUPPORT
// _MMMOD_WRITER_MDL_ENTRY
// _NAMED_PIPE_CREATE_PARAMETERS
// _OBJECT_SYMBOLIC_LINK
// _OPEN_PACKET
// _PEB
// _PEB32
// _PEB64
// _PEP_ACPI_IO_MEMORY_RESOURCE
// _POP_IO_INFO
// _POP_THERMAL_ZONE
// _PO_HIBER_PERF
// _PPM_FFH_THROTTLE_STATE_INFO
// _PRIVATE_CACHE_MAP
// _SEP_RM_LSA_CONNECTION_STATE
// _SHARED_CACHE_MAP
// _TOKEN
// _TRACE_LOGFILE_HEADER
// _VACB
// _WHEAP_ERROR_SOURCE
// _WHEA_GENERIC_ERROR_DESCRIPTOR
// _WHEA_GENERIC_ERROR_DESCRIPTOR_V2
// _WHEA_TIMESTAMP
// _WMI_BUFFER_HEADER
// _WMI_LOGGER_CONTEXT
// _WORK_QUEUE_ENTRY
