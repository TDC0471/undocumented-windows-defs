#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>
#include <_MI_POOL_FAILURE_REASONS.h>
#include <_RTL_AVL_TREE.h>
#include <_MI_ACCESS_VIOLATION_RANGE.h>

//0x4f0 bytes (sizeof)
struct _MI_POOL_STATE
{
    ULONG MaximumNonPagedPoolThreshold;                                     //0x0
    ULONG NonPagedPoolSListMaximum[3];                                      //0x4
    volatile ULONG AllocatedNonPagedPool;                                   //0x10
    struct _SINGLE_LIST_ENTRY BadPoolHead;                                  //0x14
    ULONG HighEventSets;                                                    //0x18
    UCHAR HighEventSetsValid;                                               //0x1c
    ULONG PoolFailures[3][3];                                               //0x20
    struct _MI_POOL_FAILURE_REASONS PoolFailureReasons;                     //0x44
    ULONG LowPagedPoolThreshold;                                            //0x70
    ULONG HighPagedPoolThreshold;                                           //0x74
    LONG SpecialPoolPdesMax;                                                //0x78
    UCHAR NonPagedPoolNodes[1024];                                          //0x7c
    ULONG PagedPoolSListMaximum;                                            //0x47c
    ULONG PreemptiveTrims[4];                                               //0x480
    ULONG SpecialPagesInUsePeak;                                            //0x490
    ULONG SpecialPoolRejected[6];                                           //0x494
    volatile ULONG SpecialPagesNonPaged;                                    //0x4ac
    volatile LONG SpecialPoolPdes;                                          //0x4b0
    ULONG SessionSpecialPoolPdesMax;                                        //0x4b4
    volatile LONG PermittedFaultsLock;                                      //0x4b8
    struct _RTL_AVL_TREE PermittedFaultsTree;                               //0x4bc
    struct _MI_ACCESS_VIOLATION_RANGE PermittedFaultsInitialNode[2];        //0x4c0
    ULONG TotalPagedPoolQuota;                                              //0x4e8
    ULONG TotalNonPagedPoolQuota;                                           //0x4ec
};
/* Used in */
// _MI_SYSTEM_INFORMATION

