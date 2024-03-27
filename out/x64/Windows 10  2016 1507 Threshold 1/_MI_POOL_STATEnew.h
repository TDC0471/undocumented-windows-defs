#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>

//0xf0 bytes (sizeof)
struct _MI_POOL_STATE
{
    ULONGLONG MaximumNonPagedPoolThreshold;                                 //0x0
    ULONG NonPagedPoolSListMaximum[3];                                      //0x8
    volatile ULONGLONG AllocatedNonPagedPool;                               //0x18
    struct _SINGLE_LIST_ENTRY BadPoolHead;                                  //0x20
    ULONG PoolFailures[3][3];                                               //0x28
    ULONG PoolFailureReasons[11];                                           //0x4c
    ULONGLONG LowPagedPoolThreshold;                                        //0x78
    ULONGLONG HighPagedPoolThreshold;                                       //0x80
    ULONG PagedPoolSListMaximum;                                            //0x88
    ULONG PreemptiveTrims[4];                                               //0x8c
    ULONGLONG SpecialPagesInUsePeak;                                        //0xa0
    ULONG SpecialPoolRejected[9];                                           //0xa8
    volatile ULONGLONG SpecialPagesNonPaged;                                //0xd0
    volatile LONG SpecialPoolPdes;                                          //0xd8
    ULONG SessionSpecialPoolPdesMax;                                        //0xdc
    ULONGLONG TotalPagedPoolQuota;                                          //0xe0
    ULONGLONG TotalNonPagedPoolQuota;                                       //0xe8
};
/* Used in */
// _MI_SYSTEM_INFORMATION

