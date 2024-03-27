#pragma once
/* ------------------ */

#include <_RTLP_HP_HEAP_MANAGER.h>
#include <RTL_HP_ENV_HANDLE.h>
#include <_SEGMENT_HEAP.h>

//0x3900 bytes (sizeof)
struct _EX_HEAP_SESSION_STATE
{
    struct _RTLP_HP_HEAP_MANAGER HeapManager;                               //0x0
    struct RTL_HP_ENV_HANDLE PagedEnv;                                      //0x38e0
    struct _SEGMENT_HEAP* PagedHeap;                                        //0x38f0
    struct _SEGMENT_HEAP* SpecialPoolHeap;                                  //0x38f8
};
