#pragma once
/* ------------------ */

#include <_RTL_BITMAP_EX.h>
#include <_MMPTE.h>
#include <_MI_SYSTEM_VA_TYPE.h>
#include <_MI_CACHED_PTES.h>

//0x58 bytes (sizeof)
struct _MI_SYSTEM_PTE_TYPE
{
    struct _RTL_BITMAP_EX Bitmap;                                           //0x0
    struct _MMPTE* BasePte;                                                 //0x10
    ULONG Flags;                                                            //0x18
    enum _MI_SYSTEM_VA_TYPE VaType;                                         //0x1c
    ULONG PteFailures;                                                      //0x20
    ULONGLONG SpinLock;                                                     //0x28
    volatile ULONGLONG TotalSystemPtes;                                     //0x30
    ULONGLONG Hint;                                                         //0x38
    ULONGLONG LowestBitEverAllocated;                                       //0x40
    struct _MI_CACHED_PTES* CachedPtes;                                     //0x48
    volatile ULONGLONG TotalFreeSystemPtes;                                 //0x50
};
/* Used in */
// _MI_SYSTEM_PTE_STATE
// _MI_VISIBLE_STATE

