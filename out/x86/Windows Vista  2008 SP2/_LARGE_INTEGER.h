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
// _ETW_KERNEL_TRACE_TIMESTAMP
// _ETW_LAST_ENABLE_INFO
// _ETW_REF_CLOCK
// _FAST_IO_DISPATCH
// _FILE_BASIC_INFORMATION
// _FILE_NETWORK_OPEN_INFORMATION
// _FILE_OBJECT
// _FILE_STANDARD_INFORMATION
// _FS_FILTER_PARAMETERS
// _HBASE_BLOCK
// _HHIVE
// _IO_RESOURCE_DESCRIPTOR
// _IO_STACK_LOCATION
// _IRP
// _KPRCB
// _KRESOURCEMANAGER
// _KTM
// _KTRANSACTION
// _KUSER_SHARED_DATA
// _MAILSLOT_CREATE_PARAMETERS
// _MI_PAGEFILE_TRACES
// _MMMOD_WRITER_MDL_ENTRY
// _MM_SESSION_SPACE
// _NAMED_PIPE_CREATE_PARAMETERS
// _OBJECT_SYMBOLIC_LINK
// _PEB
// _PERFINFO_HARDPAGEFAULT_INFORMATION
// _PERFINFO_TRACE_HEADER
// _PF_HARD_FAULT_INFO
// _POP_HIBER_CONTEXT
// _PRIVATE_CACHE_MAP
// _SEGMENT_OBJECT
// _SHARED_CACHE_MAP
// _SYSTEM_TRACE_HEADER
// _TEB
// _TOKEN
// _VACB
// _WHEA_TIMESTAMP
// _WMI_BUFFER_HEADER
// _WMI_LOGGER_CONTEXT
// _WNODE_HEADER

