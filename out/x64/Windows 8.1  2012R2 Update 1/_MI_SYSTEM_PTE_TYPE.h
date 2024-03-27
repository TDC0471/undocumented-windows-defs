#pragma once
/* ------------------ */

#include <_RTL_BITMAP_EX.h>
#include <_MMPTE.h>
#include <_MI_SYSTEM_VA_TYPE.h>
#include <_FAST_MUTEX.h>
#include <_MMSUPPORT.h>
#include <_MI_CACHED_PTE.h>

//0x68 bytes (sizeof)
struct _MI_SYSTEM_PTE_TYPE
{
    struct _RTL_BITMAP_EX Bitmap;                                           //0x0
    struct _MMPTE* BasePte;                                                 //0x10
    ULONG Flags;                                                            //0x18
    enum _MI_SYSTEM_VA_TYPE VaType;                                         //0x1c
    ULONG* FailureCount;                                                    //0x20
    ULONG PteFailures;                                                      //0x28
    union
    {
        ULONGLONG SpinLock;                                                 //0x30
        struct _FAST_MUTEX* GlobalMutex;                                    //0x30
    };
    struct _MMSUPPORT* Vm;                                                  //0x38
    volatile ULONGLONG TotalSystemPtes;                                     //0x40
    ULONGLONG Hint;                                                         //0x48
    struct _MI_CACHED_PTE* CachedPtes;                                      //0x50
    volatile ULONGLONG TotalFreeSystemPtes;                                 //0x58
    volatile LONG CachedPteCount;                                           //0x60
};
/* Used in */
// _MM_SESSION_SPACE

