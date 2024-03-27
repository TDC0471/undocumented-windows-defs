#pragma once
/* ------------------ */

#include <_CM_PARTIAL_RESOURCE_DESCRIPTOR.h>

//0x1c bytes (sizeof)
struct _CM_PARTIAL_RESOURCE_LIST
{
    USHORT Version;                                                         //0x0
    USHORT Revision;                                                        //0x2
    ULONG Count;                                                            //0x4
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];           //0x8
};
/* Used in */
// _ARBITER_QUERY_ALLOCATED_RESOURCES_PARAMETERS
// _CM_FULL_RESOURCE_DESCRIPTOR

