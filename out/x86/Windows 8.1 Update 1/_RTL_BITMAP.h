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
// _MI_PAGING_FILE_SPACE_BITMAPS
// _MI_SPECIAL_POOL
// _MI_SYSTEM_PTE_TYPE
// _MI_USER_VA_INFO
// _MI_VAD_EVENT_BLOCK
// _MM_PAGED_POOL_INFO
// _POP_HIBER_CONTEXT
// _SEP_LOWBOX_NUMBER_MAPPING
// _WMI_LOGGER_CONTEXT

