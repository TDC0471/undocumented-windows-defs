#pragma once
/* ------------------ */

#include <_POOL_TYPE.h>

//0x100 bytes (sizeof)
struct _POOL_DESCRIPTOR
{
    enum _POOL_TYPE PoolType;                                               //0x0
    volatile LONG RunningAllocs;                                            //0x40
    volatile ULONG PagesAllocated;                                          //0x44
    volatile ULONG BigPagesAllocated;                                       //0x48
    volatile ULONG BytesAllocated;                                          //0x4c
    volatile LONG RunningDeallocs;                                          //0x80
    volatile ULONG PagesDeallocated;                                        //0x84
    volatile ULONG BigPagesDeallocated;                                     //0x88
    volatile ULONG BytesDeallocated;                                        //0x8c
    ULONG PoolIndex;                                                        //0xc0
};
/* Used in */
// _MM_SESSION_SPACE

