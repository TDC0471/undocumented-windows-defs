#pragma once
/* ------------------ */

#include <_CACHED_KSTACK_LIST.h>
#include <_MMPFN.h>

//0x48 bytes (sizeof)
struct _MI_SYSTEM_NODE_INFORMATION
{
    struct _CACHED_KSTACK_LIST CachedKernelStacks[2];                       //0x0
    ULONG CachedNonPagedPoolCount;                                          //0x30
    ULONG NonPagedPoolSpinLock;                                             //0x34
    struct _MMPFN* CachedNonPagedPool;                                      //0x38
    VOID* NonPagedPoolFirstVa;                                              //0x3c
    VOID* NonPagedPoolLastVa;                                               //0x40
};
/* Used in */
// _MI_HARDWARE_STATE

