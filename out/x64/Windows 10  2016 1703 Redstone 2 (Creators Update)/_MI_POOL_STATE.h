#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>
#include <_MI_POOL_FAILURE_REASONS.h>

//0xe8 bytes (sizeof)
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
    ULONGLONG TotalPagedPoolQuota;                                          //0xd8
    ULONGLONG TotalNonPagedPoolQuota;                                       //0xe0
};
/* Used in */
// _MI_SYSTEM_INFORMATION

