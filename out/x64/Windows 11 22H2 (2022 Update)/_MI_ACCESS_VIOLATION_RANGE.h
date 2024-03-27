#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>

//0x28 bytes (sizeof)
struct _MI_ACCESS_VIOLATION_RANGE
{
    struct _RTL_BALANCED_NODE Node;                                         //0x0
    VOID* Va;                                                               //0x18
    VOID* EndVaInclusive;                                                   //0x20
};
/* Used in */
// _MI_POOL_STATE

