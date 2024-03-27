#pragma once
/* ------------------ */

#include <_KTHREAD.h>
#include <_KGATE.h>

//0x38 bytes (sizeof)
struct _KGUARDED_MUTEX
{
    volatile LONG Count;                                                    //0x0
    struct _KTHREAD* Owner;                                                 //0x8
    ULONG Contention;                                                       //0x10
    struct _KGATE Gate;                                                     //0x18
    union
    {
        struct
        {
            SHORT KernelApcDisable;                                         //0x30
            SHORT SpecialApcDisable;                                        //0x32
        };
        ULONG CombinedApcDisable;                                           //0x30
    };
};
/* Used in */
// _KPROCESS
// _MI_SYSTEM_PTE_TYPE
// _MMSESSION
// _MM_PAGED_POOL_INFO
// _MM_SESSION_SPACE
// _PNP_DEVICE_EVENT_LIST
// _POOL_DESCRIPTOR
// _SHARED_CACHE_MAP

