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
// DEBUG_MEMORY_REQUIREMENTS
// HAL_PRIVATE_DISPATCH
// PO_MEMORY_IMAGE
// _ACPI_CACHED_TABLE
// _ADAPTER_OBJECT
// _BUS_HANDLER
// _CC_NUMA_NODE
// _CMHIVE
// _CM_KCB_UOW
// _CM_KEY_CONTROL_BLOCK
// _CM_KEY_NODE
// _CM_PARTIAL_RESOURCE_DESCRIPTOR
// _CONTROLLER_OBJECT
// _DEFERRED_WRITE
// _DEVICE_DESCRIPTION
// _DMA_COMMON_BUFFER_ENTRY
// _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION
// _DMA_FUNCTION_TABLE
// _DMA_OPERATIONS
// _DOMAIN_CONFIGURATION_ARM64
// _DOMAIN_CONFIGURATION_X64
// _DUMP_INITIALIZATION_CONTEXT
// _DUMP_STACK_CONTEXT
// _DYNAMIC_FUNCTION_TABLE
// _EJOB
// _EPROCESS
// _ETHREAD
// _ETW_LAST_ENABLE_INFO
// _ETW_REF_CLOCK
// _ETW_SILODRIVERSTATE
// _ETW_STACK_TRACE_BLOCK
// _EVENT_HEADER
// _EXT_IOMMU_FUNCTION_TABLE_EXTENDED
// _EXT_IOMMU_RESERVED_MEMORY_REGION
// _EX_TIMEZONE_STATE
// _FACS
// _FADT
// _FAST_IO_DISPATCH
// _FILE_BASIC_INFORMATION
// _FILE_NETWORK_OPEN_INFORMATION
// _FILE_OBJECT
// _FILE_STANDARD_INFORMATION
// _FSRTL_ADVANCED_FCB_HEADER
// _FS_FILTER_PARAMETERS
// _GEN_ADDR
// _HALP_DMA_ADAPTER_OBJECT
// _HALP_DMA_CHANNEL
// _HALP_DMA_DOMAIN_OBJECT
// _HALP_DMA_MASTER_ADAPTER_OBJECT
// _HAL_HV_DMA_DOMAIN_CONFIG_ARM64
// _HAL_HV_DMA_DOMAIN_CONFIG_X64
// _HAL_INTEL_ENLIGHTENMENT_INFORMATION
// _HBASE_BLOCK
// _HBIN
// _HHIVE
// _INTERRUPT_VECTOR_DATA
// _IOMMU_MAP_PHYSICAL_ADDRESS
// _IOMMU_RESERVED_DEVICE
// _IOP_IRP_EXTENSION
// _IO_ADAPTER_CRYPTO_KEY_DESCRIPTOR
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
// _LEAP_SECOND_DATA
// _LOADER_PARAMETER_CI_EXTENSION
// _LOADER_PARAMETER_EXTENSION
// _LOGGED_STREAM_CALLBACK_V1
// _LOG_HANDLE_CONTEXT
// _MAILSLOT_CREATE_PARAMETERS
// _MI_BAD_MEMORY_EVENT_ENTRY
// _MI_HARDWARE_STATE
// _MI_PAGEFILE_TRACES
// _MI_PROCESS_STATE
// _MMINPAGE_SUPPORT
// _MMMOD_WRITER_MDL_ENTRY
// _NAMED_PIPE_CREATE_PARAMETERS
// _OBJECT_SYMBOLIC_LINK
// _OFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2
// _OPEN_PACKET
// _PEB
// _PEB32
// _PEB64
// _PEP_ACPI_IO_MEMORY_RESOURCE
// _PHYSICAL_MEMORY_RANGE
// _POP_IO_INFO
// _PO_HIBER_PERF
// _PPM_FFH_THROTTLE_STATE_INFO
// _PRIVATE_CACHE_MAP
// _PRIVATE_VOLUME_CACHEMAP
// _REGISTERED_IOMMU
// _RSDP
// _SCATTER_GATHER_ELEMENT
// _SEP_RM_LSA_CONNECTION_STATE
// _SHARED_CACHE_MAP
// _SILO_USER_SHARED_DATA
// _TOKEN
// _TRACE_LOGFILE_HEADER
// _VACB
// _WHEAP_ERROR_SOURCE
// _WHEA_GENERIC_ERROR_DESCRIPTOR
// _WHEA_GENERIC_ERROR_DESCRIPTOR_V2
// _WHEA_TIMESTAMP
// _WHEA_XPF_MCA_SECTION
// _WMI_BUFFER_HEADER
// _WMI_LOGGER_CONTEXT
// _WORK_QUEUE_ENTRY
// _XSDT
