#pragma once
/* ------------------ */

#include <_RTL_BITMAP.h>
#include <_MMPTE.h>
#include <_MMSUPPORT.h>
#include <_KGUARDED_MUTEX.h>

//0x2c bytes (sizeof)
struct _MI_SYSTEM_PTE_TYPE
{
    struct _RTL_BITMAP Bitmap;                                              //0x0
    ULONG Hint;                                                             //0x8
    struct _MMPTE* BasePte;                                                 //0xc
    ULONG* FailureCount;                                                    //0x10
    struct _MMSUPPORT* Vm;                                                  //0x14
    volatile LONG TotalSystemPtes;                                          //0x18
    volatile LONG TotalFreeSystemPtes;                                      //0x1c
    volatile LONG CachedPteCount;                                           //0x20
    ULONG PteFailures;                                                      //0x24
    struct _KGUARDED_MUTEX* GlobalMutex;                                    //0x28
};
/* Used in */
// _MM_SESSION_SPACE

