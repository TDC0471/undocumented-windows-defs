#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>
#include <_MI_POOL_FAILURE_REASONS.h>
#include <_RTL_AVL_TREE.h>
#include <_MI_ACCESS_VIOLATION_RANGE.h>

//0x148 bytes (sizeof)
struct _MI_POOL_STATE
{
    ULONGLONG MaximumNonPagedPoolThreshold;                                 //0x0
    ULONG NonPagedPoolSListMaximum[3];                                      //0x8
    volatile ULONGLONG AllocatedNonPagedPool;                               //0x18
    struct _SINGLE_LIST_ENTRY BadPoolHead;                                  //0x20
    ULONG HighEventSets;                                                    //0x28
    UCHAR HighEventSetsValid;                                               //0x2c
    ULONG PoolFailures[3][3];                                               //0x30
    struct _MI_POOL_FAILURE_REASONS PoolFailureReasons;                     //0x54
    ULONGLONG LowPagedPoolThreshold;                                        //0x80
    ULONGLONG HighPagedPoolThreshold;                                       //0x88
    ULONG PagedPoolSListMaximum;                                            //0x90
    ULONG PreemptiveTrims[4];                                               //0x94
    ULONGLONG SpecialPagesInUsePeak;                                        //0xa8
    ULONG SpecialPoolRejected[6];                                           //0xb0
    volatile ULONGLONG SpecialPagesNonPaged;                                //0xc8
    volatile LONG SpecialPoolPdes;                                          //0xd0
    ULONG SessionSpecialPoolPdesMax;                                        //0xd4
    volatile LONG PermittedFaultsLock;                                      //0xd8
    struct _RTL_AVL_TREE PermittedFaultsTree;                               //0xe0
    struct _MI_ACCESS_VIOLATION_RANGE PermittedFaultsInitialNode[2];        //0xe8
    ULONGLONG TotalPagedPoolQuota;                                          //0x138
    ULONGLONG TotalNonPagedPoolQuota;                                       //0x140
};
/* Used in */
// _MI_SYSTEM_INFORMATION

