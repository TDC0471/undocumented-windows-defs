#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_CM_PARTIAL_RESOURCE_DESCRIPTOR.h>

//0xc bytes (sizeof)
struct _ARBITER_RETEST_ALLOCATION_PARAMETERS
{
    struct _LIST_ENTRY* ArbitrationList;                                    //0x0
    ULONG AllocateFromCount;                                                //0x4
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR* AllocateFrom;                   //0x8
};
/* Used in */
// _ARBITER_INSTANCE
// _ARBITER_PARAMETERS

