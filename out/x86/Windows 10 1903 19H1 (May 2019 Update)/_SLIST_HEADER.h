#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>

//0x8 bytes (sizeof)
union _SLIST_HEADER
{
    ULONGLONG Alignment;                                                    //0x0
    struct
    {
        struct _SINGLE_LIST_ENTRY Next;                                     //0x0
        USHORT Depth;                                                       //0x4
    };
    USHORT CpuId;                                                           //0x6
};
/* Used in */
// _CACHED_KSTACK_LIST
// _ETW_STACK_TRACE_BLOCK
// _GENERAL_LOOKASIDE
// _GENERAL_LOOKASIDE_POOL
// _HEAP_VS_DELAY_FREE_CONTEXT
// _KPRCB
// _MI_PAGING_IO_STATE
// _MI_PARTITION_PAGE_LISTS
// _MI_PARTITION_SEGMENTS
// _MI_PARTITION_STORES
// _MI_PROCESS_STATE
// _MI_STANDBY_STATE
// _MI_SYSTEM_PTE_STATE
// _MMPAGING_FILE
// _PEB
// _PF_KERNEL_GLOBALS
// _RTL_LOOKASIDE
// _VF_TARGET_VERIFIED_DRIVER_DATA

