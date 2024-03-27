#pragma once
/* ------------------ */

#include <_CACHED_KSTACK_LIST.h>
#include <_MI_DYNAMIC_BITMAP.h>
#include <_MMPFN.h>

//0xb0 bytes (sizeof)
struct _MI_SYSTEM_NODE_INFORMATION
{
    struct _CACHED_KSTACK_LIST CachedKernelStacks[2];                       //0x0
    struct _MI_DYNAMIC_BITMAP DynamicBitMapNonPagedPool;                    //0x40
    ULONGLONG CachedNonPagedPoolCount;                                      //0x88
    ULONGLONG NonPagedPoolSpinLock;                                         //0x90
    struct _MMPFN* CachedNonPagedPool;                                      //0x98
    VOID* NonPagedPoolFirstVa;                                              //0xa0
    VOID* NonPagedPoolLastVa;                                               //0xa8
};
/* Used in */
// _MI_HARDWARE_STATE

