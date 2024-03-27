#pragma once
/* ------------------ */

#include <_SLIST_HEADER.h>
#include <_RTL_BITMAP.h>
#include <_MM_PAGE_ACCESS_INFO_HEADER.h>
#include <_KDPC.h>

//0x1a0 bytes (sizeof)
struct _MI_STANDBY_STATE
{
    ULONGLONG FirstDecayPage;                                               //0x0
    union _SLIST_HEADER PfnDecayFreeSList;                                  //0x10
    volatile LONG DecayPfnLock;                                             //0x20
    struct _RTL_BITMAP DecayPfnsToBeFreed;                                  //0x28
    ULONG DecayPfnsToBeFreedBuffer[64];                                     //0x38
    struct _MM_PAGE_ACCESS_INFO_HEADER* PfnRepurposeLog;                    //0x138
    struct _KDPC AllocatePfnRepurposeDpc;                                   //0x140
    union _SLIST_HEADER PageHeatListSlist;                                  //0x180
    volatile LONG PageHeatListDisableAllocation;                            //0x190
};
/* Used in */
// _MI_SYSTEM_INFORMATION

