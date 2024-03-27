#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x20 bytes (sizeof)
struct _RTL_RANGE_LIST
{
    struct _LIST_ENTRY ListHead;                                            //0x0
    ULONG Flags;                                                            //0x10
    ULONG Count;                                                            //0x14
    ULONG Stamp;                                                            //0x18
};
/* Used in */
// _ARBITER_INSTANCE

