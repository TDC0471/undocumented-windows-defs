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
    ULONGLONG Lock;                                                         //0x0
    enum _RTLP_HP_LOCK_TYPE LockType;                                       //0x8
    struct _RTL_RB_TREE FreeChunkTree;                                      //0x10
    struct _LIST_ENTRY SubsegmentList;                                      //0x20
    ULONGLONG TotalCommittedUnits;                                          //0x30
    ULONGLONG FreeCommittedUnits;                                           //0x38
    struct _HEAP_VS_DELAY_FREE_CONTEXT DelayFreeContext;                    //0x40
    VOID* BackendCtx;                                                       //0x80
    struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;                          //0x88
    struct _RTL_HP_VS_CONFIG Config;                                        //0xb0
    ULONG Flags;                                                            //0xb4
};
/* Used in */
// _SEGMENT_HEAP

