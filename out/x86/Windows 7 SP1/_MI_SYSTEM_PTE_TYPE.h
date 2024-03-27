#pragma once
/* ------------------ */

#include <_RTL_BITMAP.h>
#include <_MMPTE.h>
#include <_MMSUPPORT.h>
#include <_KGUARDED_MUTEX.h>

//0x30 bytes (sizeof)
struct _MI_SYSTEM_PTE_TYPE
{
    struct _RTL_BITMAP Bitmap;                                              //0x0
    ULONG Flags;                                                            //0x8
    ULONG Hint;                                                             //0xc
    struct _MMPTE* BasePte;                                                 //0x10
    ULONG* FailureCount;                                                    //0x14
    struct _MMSUPPORT* Vm;                                                  //0x18
    volatile LONG TotalSystemPtes;                                          //0x1c
    volatile LONG TotalFreeSystemPtes;                                      //0x20
    volatile LONG CachedPteCount;                                           //0x24
    ULONG PteFailures;                                                      //0x28
    union
    {
        ULONG SpinLock;                                                     //0x2c
        struct _KGUARDED_MUTEX* GlobalMutex;                                //0x2c
    };
};
/* Used in */
// _MM_SESSION_SPACE

