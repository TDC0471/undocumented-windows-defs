#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _RTL_BITMAP
{
    ULONG SizeOfBitMap;                                                     //0x0
    ULONG* Buffer;                                                          //0x4
};
/* Used in */
// _CMHIVE
// _ETW_REALTIME_CONSUMER
// _FREE_DISPLAY
// _HHIVE
// _JOB_RATE_CONTROL_HEADER
// _MI_DRIVER_VA
// _MI_ENCLAVE_STATE
// _MI_NODE_INFORMATION
// _MI_PAGING_FILE_SPACE_BITMAPS
// _MI_PARTITION_PAGE_LISTS
// _MI_PARTITION_STATE
// _MI_PARTITION_STORES
// _MI_SECTION_STATE
// _MI_SHUTDOWN_STATE
// _MI_SUB64K_FREE_RANGES
// _MI_SYSTEM_INFORMATION
// _MI_SYSTEM_PTE_STATE
// _MI_SYSTEM_PTE_TYPE
// _MI_VAD_EVENT_BLOCK
// _MI_VISIBLE_STATE
// _POP_HIBER_CONTEXT
// _RTL_RVA_LIST
// _SEP_LOWBOX_NUMBER_MAPPING
// _WMI_LOGGER_CONTEXT
