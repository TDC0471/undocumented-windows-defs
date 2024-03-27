#pragma once
/* ------------------ */

#include <_HALP_DMA_ADAPTER_OBJECT.h>
#include <_LIST_ENTRY.h>
#include <_LARGE_INTEGER.h>

//0xe0 bytes (sizeof)
struct _HALP_DMA_MASTER_ADAPTER_OBJECT
{
    struct _HALP_DMA_ADAPTER_OBJECT AdapterObject;                          //0x0
    struct _LIST_ENTRY ContiguousAdapterQueue;                              //0xa0
    struct _LIST_ENTRY ScatterAdapterQueue;                                 //0xb0
    ULONG MapBufferSize;                                                    //0xc0
    union _LARGE_INTEGER MapBufferPhysicalAddress;                          //0xc8
    ULONG ContiguousPageCount;                                              //0xd0
    ULONG ContiguousPageLimit;                                              //0xd4
    ULONG ScatterPageCount;                                                 //0xd8
    ULONG ScatterPageLimit;                                                 //0xdc
};
/* Used in */
// _ADAPTER_OBJECT

