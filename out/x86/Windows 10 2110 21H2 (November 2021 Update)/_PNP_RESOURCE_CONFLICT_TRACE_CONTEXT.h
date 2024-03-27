#pragma once
/* ------------------ */

#include <_IO_RESOURCE_DESCRIPTOR.h>

//0x10 bytes (sizeof)
struct _PNP_RESOURCE_CONFLICT_TRACE_CONTEXT
{
    UCHAR ResourceType;                                                     //0x0
    ULONG AlternativeCount;                                                 //0x4
    struct _IO_RESOURCE_DESCRIPTOR* ResourceRequests;                       //0x8
    VOID* ArbiterInstance;                                                  //0xc
};
/* Used in */
// _PNP_REBALANCE_TRACE_CONTEXT

