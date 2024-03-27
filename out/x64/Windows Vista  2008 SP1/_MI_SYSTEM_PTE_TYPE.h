#pragma once
/* ------------------ */

#include <_RTL_BITMAP.h>
#include <_MMPTE.h>
#include <_MMSUPPORT.h>
#include <_KGUARDED_MUTEX.h>

//0x48 bytes (sizeof)
struct _MI_SYSTEM_PTE_TYPE
{
    struct _RTL_BITMAP Bitmap;                                              //0x0
    ULONG Hint;                                                             //0x10
    struct _MMPTE* BasePte;                                                 //0x18
    ULONG* FailureCount;                                                    //0x20
    struct _MMSUPPORT* Vm;                                                  //0x28
    volatile LONG TotalSystemPtes;                                          //0x30
    volatile LONG TotalFreeSystemPtes;                                      //0x34
    volatile LONG CachedPteCount;                                           //0x38
    ULONG PteFailures;                                                      //0x3c
    struct _KGUARDED_MUTEX* GlobalMutex;                                    //0x40
};
/* Used in */
// _MM_SESSION_SPACE

