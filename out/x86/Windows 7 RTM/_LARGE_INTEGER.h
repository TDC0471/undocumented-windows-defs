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
// _DUMP_INITIALIZATION_CONTEXT
// _DUMP_STACK_CONTEXT
// _EJOB
// _EPROCESS
// _ETHREAD
// _ETW_LAST_ENABLE_INFO
// _ETW_REF_CLOCK
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
// _IO_RESOURCE_DESCRIPTOR
// _IO_STACK_LOCATION
// _IRP
// _KPRCB
// _KRESOURCEMANAGER
// _KTM
// _KTRANSACTION
// _KUSER_SHARED_DATA
// _LDR_DATA_TABLE_ENTRY
// _MAILSLOT_CREATE_PARAMETERS
// _MI_PAGEFILE_TRACES
// _MMMOD_WRITER_MDL_ENTRY
// _MM_SESSION_SPACE
// _NAMED_PIPE_CREATE_PARAMETERS
// _OBJECT_SYMBOLIC_LINK
// _OPEN_PACKET
// _PEB
// _PERFINFO_TRACE_HEADER
// _POP_HIBER_CONTEXT
// _POP_THERMAL_ZONE
// _POP_THERMAL_ZONE_METRICS
// _PPM_FFH_THROTTLE_STATE_INFO
// _PRIVATE_CACHE_MAP
// _SEGMENT_OBJECT
// _SHARED_CACHE_MAP
// _SYSTEM_TRACE_HEADER
// _TOKEN
// _VACB
// _WHEA_TIMESTAMP
// _WMI_BUFFER_HEADER
// _WMI_LOGGER_CONTEXT

