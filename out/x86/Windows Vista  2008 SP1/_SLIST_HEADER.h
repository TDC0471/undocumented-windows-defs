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
    USHORT Sequence;                                                        //0x6
};
/* Used in */
// _CACHED_KSTACK_LIST
// _GENERAL_LOOKASIDE
// _GENERAL_LOOKASIDE_POOL
// _HEAP_LOOKASIDE
// _KNODE
// _KPRCB
// _MI_VERIFIER_DRIVER_ENTRY
// _MMPAGING_FILE
// _PF_KERNEL_GLOBALS
// _WMI_LOGGER_CONTEXT
