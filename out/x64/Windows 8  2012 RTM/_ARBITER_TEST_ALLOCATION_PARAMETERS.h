#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_CM_PARTIAL_RESOURCE_DESCRIPTOR.h>

//0x18 bytes (sizeof)
struct _ARBITER_TEST_ALLOCATION_PARAMETERS
{
    struct _LIST_ENTRY* ArbitrationList;                                    //0x0
    ULONG AllocateFromCount;                                                //0x8
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR* AllocateFrom;                   //0x10
};
/* Used in */
// _ARBITER_INSTANCE
// _ARBITER_PARAMETERS

