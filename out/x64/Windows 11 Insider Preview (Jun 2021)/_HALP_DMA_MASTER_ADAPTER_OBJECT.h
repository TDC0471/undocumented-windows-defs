#pragma once
/* ------------------ */

#include <_HALP_DMA_ADAPTER_OBJECT.h>
#include <_LIST_ENTRY.h>
#include <_LARGE_INTEGER.h>

//0xd8 bytes (sizeof)
struct _HALP_DMA_MASTER_ADAPTER_OBJECT
{
    struct _HALP_DMA_ADAPTER_OBJECT AdapterObject;                          //0x0
    struct _LIST_ENTRY ContiguousAdapterQueue;                              //0x98
    struct _LIST_ENTRY ScatterAdapterQueue;                                 //0xa8
    ULONG MapBufferSize;                                                    //0xb8
    union _LARGE_INTEGER MapBufferPhysicalAddress;                          //0xc0
    ULONG ContiguousPageCount;                                              //0xc8
    ULONG ContiguousPageLimit;                                              //0xcc
    ULONG ScatterPageCount;                                                 //0xd0
    ULONG ScatterPageLimit;                                                 //0xd4
};
/* Used in */
// _ADAPTER_OBJECT

