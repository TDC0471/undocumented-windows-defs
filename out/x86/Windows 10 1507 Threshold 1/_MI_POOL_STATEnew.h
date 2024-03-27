#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>
#include <_MM_PAGED_POOL_INFO.h>

//0x4e0 bytes (sizeof)
struct _MI_POOL_STATE
{
    ULONG MaximumNonPagedPoolThreshold;                                     //0x0
    ULONG NonPagedPoolSListMaximum[3];                                      //0x4
    volatile ULONG AllocatedNonPagedPool;                                   //0x10
    struct _SINGLE_LIST_ENTRY BadPoolHead;                                  //0x14
    ULONG PoolFailures[3][3];                                               //0x18
    ULONG PoolFailureReasons[11];                                           //0x3c
    ULONG LowPagedPoolThreshold;                                            //0x68
    ULONG HighPagedPoolThreshold;                                           //0x6c
    LONG SpecialPoolPdesMax;                                                //0x70
    UCHAR NonPagedPoolNodes[1024];                                          //0x74
    struct _MM_PAGED_POOL_INFO PagedProtoPoolInfo;                          //0x474
    ULONG PagedPoolSListMaximum;                                            //0x490
    ULONG PreemptiveTrims[4];                                               //0x494
    ULONG SpecialPagesInUsePeak;                                            //0x4a4
    ULONG SpecialPoolRejected[9];                                           //0x4a8
    volatile ULONG SpecialPagesNonPaged;                                    //0x4cc
    volatile LONG SpecialPoolPdes;                                          //0x4d0
    ULONG SessionSpecialPoolPdesMax;                                        //0x4d4
    ULONG TotalPagedPoolQuota;                                              //0x4d8
    ULONG TotalNonPagedPoolQuota;                                           //0x4dc
};
/* Used in */
// _MI_SYSTEM_INFORMATION

