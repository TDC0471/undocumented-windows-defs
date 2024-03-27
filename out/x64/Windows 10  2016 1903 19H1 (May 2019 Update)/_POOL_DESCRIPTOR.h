#pragma once
/* ------------------ */

#include <_POOL_TYPE.h>

//0x100 bytes (sizeof)
struct _POOL_DESCRIPTOR
{
    enum _POOL_TYPE PoolType;                                               //0x0
    volatile LONG RunningAllocs;                                            //0x40
    volatile ULONGLONG PagesAllocated;                                      //0x48
    volatile ULONGLONG BigPagesAllocated;                                   //0x50
    volatile ULONGLONG BytesAllocated;                                      //0x58
    volatile LONG RunningDeallocs;                                          //0x80
    volatile ULONGLONG PagesDeallocated;                                    //0x88
    volatile ULONGLONG BigPagesDeallocated;                                 //0x90
    volatile ULONGLONG BytesDeallocated;                                    //0x98
    ULONG PoolIndex;                                                        //0xc0
};
/* Used in */
// _MM_SESSION_SPACE

