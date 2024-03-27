#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _RTL_BITMAP_EX
{
    ULONGLONG SizeOfBitMap;                                                 //0x0
    ULONGLONG* Buffer;                                                      //0x8
};
/* Used in */
// _MI_DYNAMIC_BITMAP
// _MI_PARTITION_PAGE_LISTS
// _MI_PARTITION_STATE
// _MI_SECTION_STATE
// _MI_SECTION_WOW_STATE
// _MI_SHUTDOWN_STATE
// _MI_SUB64K_FREE_RANGES
// _MI_SYSTEM_PTE_STATE
// _MI_SYSTEM_PTE_TYPE
// _MI_ULTRA_VA_CONTEXT
// _MI_VAD_EVENT_BLOCK
// _MM_SESSION_SPACE

