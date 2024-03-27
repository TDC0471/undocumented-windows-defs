#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x14 bytes (sizeof)
struct _RTL_RANGE_LIST
{
    struct _LIST_ENTRY ListHead;                                            //0x0
    ULONG Flags;                                                            //0x8
    ULONG Count;                                                            //0xc
    ULONG Stamp;                                                            //0x10
};
/* Used in */
// _ARBITER_INSTANCE

