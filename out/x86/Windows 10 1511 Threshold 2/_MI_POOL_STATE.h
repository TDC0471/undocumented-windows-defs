#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>
#include <_MI_POOL_FAILURE_REASONS.h>
#include <_MM_PAGED_POOL_INFO.h>

//0x4e8 bytes (sizeof)
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
    struct _MM_PAGED_POOL_INFO PagedProtoPoolInfo;                          //0x47c
    ULONG PagedPoolSListMaximum;                                            //0x498
    ULONG PreemptiveTrims[4];                                               //0x49c
    ULONG SpecialPagesInUsePeak;                                            //0x4ac
    ULONG SpecialPoolRejected[9];                                           //0x4b0
    volatile ULONG SpecialPagesNonPaged;                                    //0x4d4
    volatile LONG SpecialPoolPdes;                                          //0x4d8
    ULONG SessionSpecialPoolPdesMax;                                        //0x4dc
    ULONG TotalPagedPoolQuota;                                              //0x4e0
    ULONG TotalNonPagedPoolQuota;                                           //0x4e4
};
/* Used in */
// _MI_SYSTEM_INFORMATION

