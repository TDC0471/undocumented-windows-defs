#pragma once
/* ------------------ */

#include <_RTL_BITMAP.h>
#include <_MMPTE.h>
#include <_MI_SYSTEM_VA_TYPE.h>
#include <_EX_PUSH_LOCK.h>
#include <_MMSUPPORT_INSTANCE.h>
#include <_MI_CACHED_PTES.h>

//0x38 bytes (sizeof)
struct _MI_SYSTEM_PTE_TYPE
{
    struct _RTL_BITMAP Bitmap;                                              //0x0
    struct _MMPTE* BasePte;                                                 //0x8
    ULONG Flags;                                                            //0xc
    enum _MI_SYSTEM_VA_TYPE VaType;                                         //0x10
    ULONG* FailureCount;                                                    //0x14
    ULONG PteFailures;                                                      //0x18
    union
    {
        ULONG SpinLock;                                                     //0x1c
        struct _EX_PUSH_LOCK* GlobalPushLock;                               //0x1c
    };
    struct _MMSUPPORT_INSTANCE* Vm;                                         //0x20
    volatile ULONG TotalSystemPtes;                                         //0x24
    ULONG Hint;                                                             //0x28
    ULONG LowestBitEverAllocated;                                           //0x2c
    struct _MI_CACHED_PTES* CachedPtes;                                     //0x30
    volatile ULONG TotalFreeSystemPtes;                                     //0x34
};
/* Used in */
// _MI_SYSTEM_PTE_STATE
// _MI_VISIBLE_STATE
// _MM_SESSION_SPACE

