#pragma once
/* ------------------ */

#include <_RTLP_HP_HEAP_MANAGER.h>
#include <_EX_HEAP_POOL_NODE.h>
#include <_SEGMENT_HEAP.h>

//0x228c0 bytes (sizeof)
struct _EX_POOL_HEAP_MANAGER_STATE
{
    struct _RTLP_HP_HEAP_MANAGER HeapManager;                               //0x0
    ULONG NumberOfPools;                                                    //0x1c70
    struct _EX_HEAP_POOL_NODE PoolNode[16];                                 //0x1c80
    struct _SEGMENT_HEAP* SpecialHeaps[4];                                  //0x22880
};
