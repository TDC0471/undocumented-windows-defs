#pragma once
/* ------------------ */

#include <_RTL_BITMAP.h>
#include <_MMPTE.h>
#include <_MMSUPPORT.h>
#include <_FAST_MUTEX.h>
#include <_MI_CACHED_PTE.h>

//0x50 bytes (sizeof)
struct _MI_SYSTEM_PTE_TYPE
{
    struct _RTL_BITMAP Bitmap;                                              //0x0
    ULONG Flags;                                                            //0x10
    ULONG Hint;                                                             //0x14
    struct _MMPTE* BasePte;                                                 //0x18
    ULONG* FailureCount;                                                    //0x20
    struct _MMSUPPORT* Vm;                                                  //0x28
    volatile LONG TotalSystemPtes;                                          //0x30
    volatile LONG TotalFreeSystemPtes;                                      //0x34
    volatile LONG CachedPteCount;                                           //0x38
    ULONG PteFailures;                                                      //0x3c
    union
    {
        ULONGLONG SpinLock;                                                 //0x40
        struct _FAST_MUTEX* GlobalMutex;                                    //0x40
    };
    struct _MI_CACHED_PTE* CachedPtes;                                      //0x48
};
/* Used in */
// _MM_SESSION_SPACE

