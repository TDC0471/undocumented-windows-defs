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
// _HEAP_LOOKASIDE
// _KNODE
// _MI_VERIFIER_DRIVER_ENTRY
// _WMI_LOGGER_CONTEXT

