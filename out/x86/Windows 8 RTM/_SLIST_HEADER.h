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
// _GENERAL_LOOKASIDE
// _GENERAL_LOOKASIDE_POOL
// _HEAP_LOOKASIDE
// _KPRCB
// _PF_KERNEL_GLOBALS
// _VF_TARGET_VERIFIED_DRIVER_DATA

