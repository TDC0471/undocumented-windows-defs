#pragma once
/* ------------------ */

#include <_RTLP_HP_LOCK_TYPE.h>
#include <_RTL_RB_TREE.h>
#include <_LIST_ENTRY.h>
#include <_HEAP_VS_DELAY_FREE_CONTEXT.h>
#include <_HEAP_SUBALLOCATOR_CALLBACKS.h>
#include <_RTL_HP_VS_CONFIG.h>

//0xc0 bytes (sizeof)
struct _HEAP_VS_CONTEXT
{
    ULONG Lock;                                                             //0x0
    enum _RTLP_HP_LOCK_TYPE LockType;                                       //0x4
    struct _RTL_RB_TREE FreeChunkTree;                                      //0x8
    struct _LIST_ENTRY SubsegmentList;                                      //0x10
    ULONG TotalCommittedUnits;                                              //0x18
    ULONG FreeCommittedUnits;                                               //0x1c
    struct _HEAP_VS_DELAY_FREE_CONTEXT DelayFreeContext;                    //0x40
    VOID* BackendCtx;                                                       //0x80
    struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;                          //0x84
    struct _RTL_HP_VS_CONFIG Config;                                        //0x98
    ULONG Flags;                                                            //0x9c
};
/* Used in */
// _SEGMENT_HEAP

