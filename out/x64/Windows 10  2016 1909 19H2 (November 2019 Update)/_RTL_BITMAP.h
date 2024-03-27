#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _RTL_BITMAP
{
    ULONG SizeOfBitMap;                                                     //0x0
    ULONG* Buffer;                                                          //0x8
};
/* Used in */
// _CMHIVE
// _ETW_REALTIME_CONSUMER
// _FREE_DISPLAY
// _HHIVE
// _JOB_RATE_CONTROL_HEADER
// _MI_DRIVER_VA
// _MI_HARDWARE_STATE
// _MI_NODE_INFORMATION
// _MI_PAGING_FILE_SPACE_BITMAPS
// _MI_PARTITION_STATE
// _MI_PARTITION_STORES
// _MI_VISIBLE_STATE
// _POP_HIBER_CONTEXT
// _SEP_LOWBOX_NUMBER_MAPPING
// _WMI_LOGGER_CONTEXT

