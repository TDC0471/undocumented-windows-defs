#pragma once
/* ------------------ */

#include <_MMPTE.h>
#include <_KGUARDED_MUTEX.h>

//0x20 bytes (sizeof)
struct _MI_SYSTEM_PTE_TYPE
{
    struct _MMPTE* FirstFreePte;                                            //0x0
    ULONG* FailureCount;                                                    //0x8
    struct _KGUARDED_MUTEX* GlobalMutex;                                    //0x10
    volatile ULONG TbFlushTimeStamp;                                        //0x18
};
/* Used in */
// _MM_SESSION_SPACE

