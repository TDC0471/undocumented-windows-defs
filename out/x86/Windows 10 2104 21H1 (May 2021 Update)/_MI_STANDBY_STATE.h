#pragma once
/* ------------------ */

#include <_SLIST_HEADER.h>
#include <_MM_PAGE_ACCESS_INFO_HEADER.h>
#include <_KDPC.h>

//0x48 bytes (sizeof)
struct _MI_STANDBY_STATE
{
    ULONG FirstDecayPage;                                                   //0x0
    union _SLIST_HEADER PfnDecayFreeSList;                                  //0x8
    struct _MM_PAGE_ACCESS_INFO_HEADER* PfnRepurposeLog;                    //0x10
    struct _KDPC AllocatePfnRepurposeDpc;                                   //0x14
    union _SLIST_HEADER PageHeatListSlist;                                  //0x38
    volatile LONG PageHeatListDisableAllocation;                            //0x40
};
/* Used in */
// _MI_SYSTEM_INFORMATION

